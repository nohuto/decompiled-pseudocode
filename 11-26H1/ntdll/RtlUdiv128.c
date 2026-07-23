/*
 * XREFs of RtlUdiv128 @ 0x18014A4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlUdiv128(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rax

  v6 = 64LL;
  do
  {
    v7 = 2 * a2;
    v8 = a2 >> 63;
    v9 = 2 * a2;
    v10 = (2 * a1) | v8;
    v11 = v10 | (a1 >> 63);
    a1 = v10 - a3;
    if ( v11 < a3 )
      a1 = v10;
    a2 = v9 | 1;
    if ( v11 < a3 )
      a2 = v7;
    --v6;
  }
  while ( v6 );
  if ( a4 )
    *a4 = a1;
  return a2;
}
