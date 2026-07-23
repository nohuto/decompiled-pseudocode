/*
 * XREFs of PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140A94870 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessIoPriorityLimitCallback @ 0x140B042D0 (PspSetProcessIoPriorityLimitCallback.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x140239494 (KeAbProcessBaseIoPriorityChange.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbThreadAreAllEntriesFree @ 0x140270FC4 (KeAbThreadAreAllEntriesFree.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspNotifyProcessEffectiveIoLimitChanged(__int64 a1, unsigned int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  _QWORD **v11; // rdi
  _QWORD *i; // rbx
  __int64 v14; // r9
  unsigned int IoPriorityThread; // eax
  unsigned int v16; // r9d
  _QWORD *j; // rbx
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r10
  unsigned int v21; // r9d

  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
  }
  v11 = (_QWORD **)(a1 + 880);
  for ( i = *(_QWORD **)(a1 + 880); i != v11; i = (_QWORD *)*i )
  {
    if ( !(unsigned int)KeAbThreadAreAllEntriesFree(i - 175) )
    {
      v14 = (*((_DWORD *)i + 10) >> 9) & 7;
      if ( a2 < (unsigned int)v14 )
        v14 = a2;
      IoPriorityThread = PsGetIoPriorityThread(i - 175, v10, v8, v14);
      if ( v16 != IoPriorityThread )
        KeAbProcessBaseIoPriorityChange(i - 175, v16, IoPriorityThread);
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  if ( a3 )
  {
    for ( j = *v11; j != v11; j = (_QWORD *)*j )
    {
      v18 = (*((_DWORD *)j + 10) >> 9) & 7;
      if ( a2 < (unsigned int)v18 )
        v18 = a2;
      v19 = PsGetIoPriorityThread(j - 175, v10, v8, v18);
      if ( v21 < v19 )
        IoBoostThreadIoPriority(v20, v19, 0LL);
    }
  }
  return PspUnlockProcessThreadListShared(a1, CurrentThread);
}
