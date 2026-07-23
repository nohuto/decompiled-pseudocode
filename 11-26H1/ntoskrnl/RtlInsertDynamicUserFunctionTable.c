/*
 * XREFs of RtlInsertDynamicUserFunctionTable @ 0x140483144
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
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicUserFunctionTable(__int64 a1)
{
  unsigned __int64 ULong64FromUser; // r12
  unsigned __int64 v3; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  unsigned int v5; // esi
  volatile signed __int64 *p_SwapListEntry; // r14
  AutoBoost *v7; // rax
  AutoBoost *v8; // rdi
  __int64 Blink; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 Pool2; // rax
  _OWORD *v19; // rcx
  unsigned int v20; // r9d
  unsigned __int64 *v21; // rax
  __int64 v22; // r14
  _KPROCESS *Process; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  int v27; // [rsp+88h] [rbp+10h]
  int v28; // [rsp+90h] [rbp+18h]
  struct _LIST_ENTRY *P; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ULong64FromUser = RtlReadULong64FromUser(a1 + 48);
  v3 = RtlReadULong64FromUser(a1 + 40);
  v24 = v3;
  if ( v3 < ULong64FromUser || v3 - ULong64FromUser > 0xFFFFFFFF )
    return 3221225621LL;
  v28 = v3 - ULong64FromUser;
  P = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_SwapListEntry = (volatile signed __int64 *)&Process[3].SwapListEntry;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL, 0LL, v4);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Process[3].SwapListEntry, v7, (__int64)&Process[3].SwapListEntry);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  Blink = (__int64)Process[3].ReadyListHead.Blink;
  if ( Blink )
  {
    v10 = *(_DWORD *)Blink;
    v11 = *(_DWORD *)(Blink + 4);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( v10 + 1 <= v11 )
  {
LABEL_29:
    v20 = 1;
    if ( v10 > 1 )
    {
      v21 = (unsigned __int64 *)(Blink + 48);
      do
      {
        if ( ULong64FromUser < *v21 )
          break;
        ++v20;
        v21 += 3;
      }
      while ( v20 < v10 );
    }
    if ( *(_QWORD *)(Blink + 24LL * (v20 - 1) + 24) + (unsigned __int64)*(unsigned int *)(Blink + 24LL * (v20 - 1) + 32) > ULong64FromUser
      || v20 < v10 && *(_QWORD *)(Blink + 24LL * v20 + 24) < v24 )
    {
      v5 = -1073741800;
    }
    else
    {
      v22 = 24LL * v20;
      if ( v20 != v10 )
        memmove(
          (void *)(Blink + 8 * (v20 + 1 + 2LL + 2LL * (v20 + 1))),
          (const void *)(v22 + Blink + 16),
          24LL * (v10 - v20));
      *(_QWORD *)(v22 + Blink + 16) = a1;
      *(_QWORD *)(v22 + Blink + 24) = ULong64FromUser;
      *(_DWORD *)(v22 + Blink + 32) = v28;
      *(_DWORD *)(v22 + Blink + 36) = 0;
      *(_DWORD *)Blink = v10 + 1;
      p_SwapListEntry = (volatile signed __int64 *)&Process[3].SwapListEntry;
    }
    goto LABEL_15;
  }
  v12 = v11 + 10;
  v27 = v12;
  if ( (unsigned int)v12 >= v11 && (unsigned __int64)(24 * v12 + 16) < 0xFFFFFFFF )
  {
    P = Process[3].ReadyListHead.Blink;
    Pool2 = ExAllocatePool2(0x101uLL);
    Blink = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      v13 = 0LL;
      goto LABEL_16;
    }
    v19 = (_OWORD *)(Pool2 + 16);
    if ( v10 )
    {
      memmove(v19, &P[1], 24LL * v10);
    }
    else
    {
      *v19 = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      v10 = 1;
    }
    *(_DWORD *)Blink = v10;
    *(_DWORD *)(Blink + 4) = v27;
    *(_BYTE *)(Blink + 12) = 0;
    Process[3].ReadyListHead.Blink = (struct _LIST_ENTRY *)Blink;
    goto LABEL_29;
  }
  v5 = -1073741675;
LABEL_15:
  v13 = P;
LABEL_16:
  if ( (_InterlockedExchangeAdd64(p_SwapListEntry, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_SwapListEntry);
  KeAbPostRelease((unsigned __int64)p_SwapListEntry);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15, v14);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x46447452u);
  return v5;
}
