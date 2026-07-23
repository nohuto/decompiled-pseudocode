/*
 * XREFs of PspGetNewSessionId @ 0x140804CB4
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     MmMaximumUserSessionId @ 0x14070EF28 (MmMaximumUserSessionId.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)&NormalizationListLock.WaitBlockFill11[56], 1u, 0);
  v2 = -1;
  v3 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
  {
LABEL_10:
    PspUnlockProcessListExclusive(CurrentThread);
    return v3;
  }
  if ( (unsigned int)(*(_DWORD *)&NormalizationListLock.WaitBlockFill11[56] + 128) > *(_DWORD *)&NormalizationListLock.WaitBlockFill11[56] )
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
          *(const void **)&NormalizationListLock.WaitBlockFill11[64],
          (unsigned __int64)*(unsigned int *)&NormalizationListLock.WaitBlockFill11[56] >> 3);
        if ( *(struct _KTHREAD **)&NormalizationListLock.WaitBlockFill11[64] != (struct _KTHREAD *)&NormalizationListLock.WaitBlockFill11[72] )
          ExFreePoolWithTag(*(PVOID *)&NormalizationListLock.WaitBlockFill11[64], 0);
        *(_QWORD *)&NormalizationListLock.WaitBlockFill11[64] = v9;
        *(_DWORD *)&NormalizationListLock.WaitBlockFill11[56] = 8 * v7;
        v3 = RtlFindClearBitsAndSet((PRTL_BITMAP)&NormalizationListLock.WaitBlockFill11[56], 1u, 0);
      }
      goto LABEL_10;
    }
  }
  return v2;
}
