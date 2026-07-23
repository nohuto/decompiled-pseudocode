/*
 * XREFs of MiLockRegistryRecoverySection @ 0x14086A780
 * Callers:
 *     <none>
 * Callees:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiLockRegistryRecoverySection(__int64 a1)
{
  int v2; // ebx
  ULONG_PTR *v4; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v2 = 0;
  do
  {
    v2 = MiSnapDriverRange(a1, v2, 128, 0, (__int64)&v4, (__int64)&v5);
    if ( v4 )
      MiLockCode(a1, v4, v5, 2);
  }
  while ( v2 );
  return 0LL;
}
