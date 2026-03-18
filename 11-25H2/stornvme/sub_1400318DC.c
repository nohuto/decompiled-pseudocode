/*
 * XREFs of sub_1400318DC @ 0x1400318DC
 * Callers:
 *     sub_14002EBF8 @ 0x14002EBF8 (sub_14002EBF8.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 *     sub_140031208 @ 0x140031208 (sub_140031208.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400318DC(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  LODWORD(v3) = a3 - 1;
  v4 = a3 - 1;
  if ( (int)v3 >= 0 )
  {
    do
    {
      v3 = a2 & 0xF;
      a2 >>= 4;
      LOBYTE(v3) = a0123456789abcd[v3];
      *(_BYTE *)(v4 + a1) = v3;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v3;
}
