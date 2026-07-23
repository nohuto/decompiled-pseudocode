/*
 * XREFs of KeEnumerateQueueApc @ 0x1405F3D20
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1405B6974 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeEnumerateQueueApc(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // bl
  char v6; // bp
  _QWORD **v7; // r14
  _QWORD *i; // rsi
  unsigned __int8 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v10 = 0;
  if ( a4 )
  {
    v4 = *a4;
    v6 = *a4;
  }
  else
  {
    v6 = 1;
  }
  KiAcquireThreadLockRaiseToDpc(a1, &v10);
  do
  {
    v7 = (_QWORD **)(a1 + 16LL * v4 + 152);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
      guard_dispatch_icall_no_overrides(i - 2, 88LL);
    ++v4;
  }
  while ( v4 <= v6 );
  return KiReleaseThreadLockLowerIrql(a1, v10);
}
