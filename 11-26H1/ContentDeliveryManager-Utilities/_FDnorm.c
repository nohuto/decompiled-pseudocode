/*
 * XREFs of _FDnorm @ 0x180020864
 * Callers:
 *     _FDscale @ 0x18000C358 (_FDscale.c)
 *     _FDunscale @ 0x180020AA4 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r8
  unsigned __int16 v2; // r9
  __int16 v3; // r11
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r10
  __int16 v7; // dx
  unsigned int v8; // kr00_4
  unsigned __int16 v9; // r8
  __int64 result; // rax

  v1 = a1 + 1;
  v2 = 1;
  v3 = a1[1] & 0x8000;
  v4 = a1[1] & 0x7F;
  a1[1] = v4;
  if ( !v4 )
  {
    if ( !*a1 )
      goto LABEL_13;
    v4 = *a1;
    v2 = -15;
    *v1 = *a1;
    v1 = a1 + 1;
    *a1 = 0;
  }
  if ( v4 < 0x80u )
  {
    v5 = *a1;
    v6 = v4;
    do
    {
      v8 = 2 * v5;
      v7 = HIWORD(v8);
      v5 = v8;
      v4 = (2 * v6) | v7;
      --v2;
      v6 = v4;
    }
    while ( v4 < 0x80u );
    *v1 = v4;
    v1 = a1 + 1;
    *a1 = v5;
  }
  if ( v4 >= 0x100u )
  {
    v9 = *a1;
    do
    {
      ++v2;
      v9 = (v4 << 15) | (v9 >> 1);
      v4 >>= 1;
    }
    while ( v4 >= 0x100u );
    *a1 = v9;
    v1 = a1 + 1;
  }
  v4 &= 0x7Fu;
LABEL_13:
  result = v2;
  *v1 = v3 | v4;
  return result;
}
