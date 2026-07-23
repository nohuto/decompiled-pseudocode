/*
 * XREFs of RtlpLookupDynamicUserFunctionTable @ 0x140464B08
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402CB950 (RtlpLookupUserFunctionTable.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

volatile void *__fastcall RtlpLookupDynamicUserFunctionTable(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r15
  signed __int64 *p_SwapListEntry; // rdi
  LegacyAutoBoost *v9; // r14
  struct _LIST_ENTRY *Blink; // rdx
  int v11; // r8d
  int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  char *v15; // r14
  char *v16; // rcx
  char *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  volatile void *ULong64FromUser; // rbx
  unsigned int ULongFromUser; // eax
  SIZE_T v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[3].ReadyListHead.Blink )
  {
    --CurrentThread->SpecialApcDisable;
    p_SwapListEntry = (signed __int64 *)&Process[3].SwapListEntry;
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[3].SwapListEntry, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&Process[3].SwapListEntry,
        0,
        v9,
        (struct _KTHREAD *)&Process[3].SwapListEntry);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    Blink = Process[3].ReadyListHead.Blink;
    if ( Blink && LODWORD(Blink->Flink) != 1 )
    {
      v11 = *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12;
      v12 = 1;
      v13 = LODWORD(Blink->Flink) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v13 < v12 )
            goto LABEL_29;
          v14 = (v12 + v13) >> 1;
          v15 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v14);
          v16 = &v15[*((unsigned int *)&Blink[2].Flink + 6 * v14)];
          if ( a1 >= (unsigned __int64)v15 )
            break;
          if ( !v14 )
            goto LABEL_29;
          v13 = v14 - 1;
        }
        if ( a1 >= 0x7FFFFFFF0000LL && RtlKernelScpFunctionTableSize )
        {
          if ( a1 < (unsigned __int64)v16 )
            goto LABEL_20;
          if ( a1 < (unsigned __int64)&v16[v11] && v15 != PsNtosImageBase && v15 != PsHalImageBase )
            break;
        }
        if ( a1 < (unsigned __int64)v16 )
        {
LABEL_20:
          v11 = *((_QWORD *)&Blink[2].Flink + 3 * v14);
          v16 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v14);
          v17 = (char *)*((_QWORD *)&Blink[1].Flink + 3 * v14);
LABEL_21:
          *(_QWORD *)(a2 + 8) = v16;
          *(_DWORD *)(a2 + 16) = v11;
          if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_SwapListEntry);
          KeAbPostRelease((unsigned __int64)p_SwapListEntry);
          v20 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v20
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v19, v18);
          }
          ULong64FromUser = (volatile void *)RtlReadULong64FromUser(v17 + 16);
          *(_QWORD *)a2 = ULong64FromUser;
          ULongFromUser = RtlReadULongFromUser(v17 + 84);
          if ( ULongFromUser > 0x15555555 )
            RtlRaiseStatus(-1073741675);
          v23 = 12 * ULongFromUser;
          *(_DWORD *)(a2 + 20) = v23;
          ProbeForRead(ULong64FromUser, v23, 4u);
          return ULong64FromUser;
        }
        v12 = v14 + 1;
      }
      v17 = (char *)&RtlKernelScpFunctionTable;
      goto LABEL_21;
    }
LABEL_29:
    if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_SwapListEntry);
    KeAbPostRelease((unsigned __int64)p_SwapListEntry);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v25, v24);
  }
  return 0LL;
}
