/*
 * XREFs of _Dnorm @ 0x180020B34
 * Callers:
 *     _Dscale @ 0x18000D010 (_Dscale.c)
 *     _Dunscale @ 0x180020E6C (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  __int16 v1; // si
  unsigned __int16 v2; // r8
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // r9
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r10
  unsigned __int16 v19; // di
  unsigned __int16 v20; // bx
  __int16 v21; // cx
  __int64 result; // rax

  v1 = a1[3] & 0x8000;
  v2 = a1[3] & 0xF;
  a1[3] = v2;
  v4 = 1;
  if ( v2 || a1[2] || a1[1] || *a1 )
  {
    v5 = v2;
    if ( v2 )
    {
      v10 = v2;
    }
    else
    {
      v6 = a1[2];
      v7 = a1[1];
      v8 = *a1;
      do
      {
        v9 = v6;
        v5 = v6;
        v10 = v6;
        v4 -= 16;
        v6 = v7;
        v7 = v8;
        v8 = 0;
      }
      while ( !v9 );
      *a1 = 0;
      a1[2] = v6;
      a1[1] = v7;
    }
    v11 = v5;
    if ( v5 < 0x10u )
    {
      v12 = a1[2];
      v13 = a1[1];
      v14 = *a1;
      do
      {
        v15 = v12;
        v12 = (2 * v12) | (v13 >> 15);
        v11 = (2 * v5) | (v15 >> 15);
        --v4;
        v13 = (2 * v13) | (v14 >> 15);
        v10 = v11;
        v5 = v11;
        v16 = 2 * v14;
        v14 *= 2;
      }
      while ( v11 < 0x10u );
      *a1 = v16;
      a1[2] = v12;
      a1[1] = v13;
    }
    if ( v11 >= 0x20u )
    {
      v17 = a1[1];
      v11 = v10;
      v18 = a1[2];
      v19 = *a1;
      do
      {
        ++v4;
        v20 = (v17 << 15) | (v19 >> 1);
        v21 = v11 << 15;
        v19 = v20;
        v17 = (v18 << 15) | (v17 >> 1);
        v11 >>= 1;
        v18 = (v18 >> 1) | v21;
      }
      while ( v11 >= 0x20u );
      *a1 = v20;
      a1[2] = v18;
      a1[1] = v17;
    }
    v2 = v11 & 0xF;
    a1[3] = v2;
  }
  result = v4;
  a1[3] = v1 | v2;
  return result;
}
