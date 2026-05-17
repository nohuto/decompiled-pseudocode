/*
 * XREFs of RtlRcuReadLock @ 0x180149970
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpRcuCurrentThreadData @ 0x180149B1C (RtlpRcuCurrentThreadData.c)
 */

__int64 __fastcall RtlRcuReadLock(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 result; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (__int64 *)RtlpRcuCurrentThreadData(a1, 1LL);
  *a2 = v4;
  v5 = v4;
  if ( !v4 )
    return RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 120));
  result = *v4 + 1;
  *v5 = result;
  if ( result == 1 )
  {
    result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
    v5[2] = result;
    _InterlockedOr(v7, 0);
  }
  else if ( !result )
  {
    __fastfail(0xEu);
  }
  return result;
}
