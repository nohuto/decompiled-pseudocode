/*
 * XREFs of PspGetNewSessionId @ 0x1407FF284
 * Callers:
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 *     MmMaximumUserSessionId @ 0x14070A274 (MmMaximumUserSessionId.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PspGetNewSessionId()
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG ClearBitsAndSet; // eax
  unsigned int v2; // r8d
  ULONG v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  void *Pool2; // rax
  void *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&NormalizationListLock.WaitBlockFill11[24], 1u, 0);
  v2 = -1;
  v3 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
  {
LABEL_10:
    PspUnlockProcessListExclusive(CurrentThread);
    return v3;
  }
  if ( (unsigned int)(*(_DWORD *)&NormalizationListLock.WaitBlockFill11[24] + 128) > *(_DWORD *)&NormalizationListLock.WaitBlockFill11[24] )
  {
    v4 = MmMaximumUserSessionId() & 0xFFFFFFC0;
    if ( v5 <= v4 )
      v4 = v5;
    if ( v4 > v6 )
    {
      v7 = v4 >> 3;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        memmove(
          Pool2,
          NormalizationListLock.WaitBlock[0].Object,
          (unsigned __int64)*(unsigned int *)&NormalizationListLock.WaitBlockFill11[24] >> 3);
        if ( NormalizationListLock.WaitBlock[0].Object != &NormalizationListLock.WaitBlockFill11[40] )
          ExFreePoolWithTag(NormalizationListLock.WaitBlock[0].Object, 0);
        NormalizationListLock.WaitBlock[0].Object = v9;
        *(_DWORD *)&NormalizationListLock.WaitBlockFill11[24] = 8 * v7;
        v3 = RtlFindClearBitsAndSet((PRTL_BITMAP)&NormalizationListLock.WaitBlockFill11[24], 1u, 0);
      }
      goto LABEL_10;
    }
  }
  return v2;
}
