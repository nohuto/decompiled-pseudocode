/*
 * XREFs of PspCreateSilo @ 0x140B0B9E8
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 *     PspFreeStorage @ 0x140AED2CC (PspFreeStorage.c)
 *     PspJobHasChildren @ 0x140B0BAE0 (PspJobHasChildren.c)
 *     PspAllocStorage @ 0x140B0BB04 (PspAllocStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // esi
  __int64 result; // rax
  signed __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v8 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1536) )
  {
    result = PspAllocStorage(&v8);
    if ( (int)result < 0 )
      return result;
    v2 = v8;
  }
  PspLockJobExclusive(a1, (__int64)CurrentThread);
  if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    v6 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
  {
    v6 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v4 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), v2, 0LL) != 0);
    v2 &= v4;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x40000000u);
    v6 = 0;
  }
  else
  {
    v6 = -1073741811;
  }
  PspUnlockJobExclusive(a1, (__int64)CurrentThread, v4, v5);
  if ( v2 )
    PspFreeStorage((_QWORD *)v2);
  return v6;
}
