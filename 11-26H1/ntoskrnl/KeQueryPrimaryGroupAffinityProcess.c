/*
 * XREFs of KeQueryPrimaryGroupAffinityProcess @ 0x14045BF50
 * Callers:
 *     PspWritePebAffinityInfoAttached @ 0x1409E64F4 (PspWritePebAffinityInfoAttached.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14045BFC0 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14045C064 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  _WORD *v6; // rcx
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0LL;
  v3 = 0LL;
  v9 = 0;
  KiAcquireProcessLockShared(a1, &v9);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 416);
  v6 = *(_WORD **)(a1 + 80);
  v7 = *(unsigned __int16 *)(a1 + 416);
  if ( (unsigned __int16)v7 < *v6 )
    v3 = *(_QWORD *)&v6[4 * v7 + 4];
  LOBYTE(v5) = v9;
  *(_QWORD *)a2 = v3;
  return KiReleaseProcessLockShared(a1, v5);
}
