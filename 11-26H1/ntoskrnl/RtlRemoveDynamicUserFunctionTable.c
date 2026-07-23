/*
 * XREFs of RtlRemoveDynamicUserFunctionTable @ 0x14049A280
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicUserFunctionTable(__int64 a1)
{
  unsigned __int64 ULong64FromUser; // r12
  __int64 v3; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *p_SwapListEntry; // rdi
  AutoBoost *v8; // rax
  AutoBoost *v9; // r15
  unsigned int *Blink; // r15
  unsigned int v11; // edx
  unsigned int i; // ecx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  $241382875694CED3D471BC5892DE3337 *v16; // rcx
  unsigned int *v18; // r9
  unsigned int v19; // r12d
  _KPROCESS *Process; // [rsp+58h] [rbp+10h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ULong64FromUser = RtlReadULong64FromUser(a1 + 48);
  v3 = RtlReadULong64FromUser(a1 + 40);
  v5 = v3;
  if ( v3 - ULong64FromUser >= 0xFFFFFFFF )
    return 3221225621LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_SwapListEntry = (unsigned __int64 *)&Process[3].SwapListEntry;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL, 0LL, v4);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_SwapListEntry, v8, (__int64)p_SwapListEntry);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  Blink = (unsigned int *)Process[3].ReadyListHead.Blink;
  if ( Blink )
  {
    v11 = *Blink;
    for ( i = 1; i < v11; ++i )
    {
      if ( *(_QWORD *)&Blink[6 * i + 6] >= ULong64FromUser )
      {
        v18 = &Blink[6 * i];
        if ( *((_QWORD *)v18 + 3) != ULong64FromUser || v18[8] != v5 - (_DWORD)ULong64FromUser )
          break;
        v19 = v11 - 1;
        if ( i != v11 - 1 )
          memmove(v18 + 4, &Blink[4 * i + 10 + 2 * i], 24LL * (v11 - i - 1));
        v13 = 0;
        *Blink = v19;
        goto LABEL_15;
      }
    }
  }
  v13 = -1073741569;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_SwapListEntry, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_SwapListEntry);
  KeAbPostRelease((unsigned __int64)p_SwapListEntry);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v16 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v16->ApcState.ApcListHead[0].Flink != v16 )
      KiCheckForKernelApcDelivery((__int64)v16, v14);
  }
  return v13;
}
