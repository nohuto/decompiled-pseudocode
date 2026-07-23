/*
 * XREFs of PspLockRootJobShared @ 0x140777B38
 * Callers:
 *     PspLockJobAndRootShared @ 0x140B6D224 (PspLockJobAndRootShared.c)
 * Callees:
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 */

__int64 __fastcall PspLockRootJobShared(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 1312);
  PspLockJobShared(v7, a2, a3);
  result = v7;
  if ( v7 != *(_QWORD *)(a1 + 1312) )
  {
    do
    {
      PspUnlockJobShared(v7, a2, a3);
      v7 = *(_QWORD *)(a1 + 1312);
      PspLockJobShared(v7, a2, a3);
      result = *(_QWORD *)(a1 + 1312);
    }
    while ( v7 != result );
  }
  return result;
}
