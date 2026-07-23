/*
 * XREFs of MiGetPrivatePageCount @ 0x1404E7B08
 * Callers:
 *     MiAllocateCrcList @ 0x140B58BB8 (MiAllocateCrcList.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  volatile LONG *v1; // rdi
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  v1 = (volatile LONG *)(a1 + 21384);
  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 18320);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 21384));
  v5 = (_QWORD *)*v3;
  while ( v5 != v3 )
  {
    v6 = v5[15];
    v5 = (_QWORD *)*v5;
    v7 = v2 + v6;
    if ( v7 <= v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v4 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v1);
  else
    ExReleaseSpinLockShared(v1, v4);
  return v2;
}
