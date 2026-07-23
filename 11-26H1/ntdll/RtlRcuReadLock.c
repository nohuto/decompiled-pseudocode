/*
 * XREFs of RtlRcuReadLock @ 0x180149820
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpRcuCurrentThreadData @ 0x1801499CC (RtlpRcuCurrentThreadData.c)
 */

void __fastcall RtlRcuReadLock(_RTL_SRWLOCK *a1, __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (__int64 *)RtlpRcuCurrentThreadData(a1, 1LL);
  *a2 = v4;
  v5 = v4;
  if ( v4 )
  {
    v6 = *v4 + 1;
    *v5 = v6;
    if ( v6 == 1 )
    {
      v5[2] = a1[2].Value & 0xFFFFFFFFFFFFFFFEuLL;
      _InterlockedOr(v7, 0);
    }
    else if ( !v6 )
    {
      __fastfail(0xEu);
    }
  }
  else
  {
    RtlAcquireSRWLockShared(a1 + 15);
  }
}
