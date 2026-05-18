/*
 * XREFs of sub_18000C388 @ 0x18000C388
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 */

char __fastcall sub_18000C388(char a1)
{
  int v2; // eax

  LOBYTE(v2) = __uncaught_exception();
  if ( v2 && !a1 )
    _InterlockedExchange64(&qword_1801C7D78, 0LL);
  return v2;
}
