/*
 * XREFs of sub_18008D524 @ 0x18008D524
 * Callers:
 *     sub_18008C7C4 @ 0x18008C7C4 (sub_18008C7C4.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_18008CC2C @ 0x18008CC2C (sub_18008CC2C.c)
 */

__int64 __fastcall sub_18008D524(float *Src, __int64 a2, void *a3, __int64 a4)
{
  __int64 v4; // rdi
  float *i; // r10
  __int64 v8; // rdi
  __int64 v9; // rbx
  float *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rdx
  float *v15; // rcx
  __int64 v16; // r10
  float *v17; // r11
  void *v19; // [rsp+20h] [rbp-18h] BYREF
  void *v20; // [rsp+28h] [rbp-10h]

  v4 = a4;
  for ( i = Src; v4 > 32; i = (float *)v11 )
  {
    v8 = v4 - 32;
    v19 = a3;
    v20 = a3;
    v9 = v8;
    if ( v8 >= 32 )
      v9 = 32LL;
    v10 = i + 128;
    v4 = v8 - v9;
    v11 = (__int64)&i[4 * v9 + 128];
    do
    {
      while ( *v10 > *i )
      {
        sub_18008CC2C((__int64)&v19, v10);
        v10 = (float *)(v13 + 16);
        if ( v10 == (float *)v11 )
        {
          v14 = v12;
          v15 = i;
          goto LABEL_10;
        }
      }
      sub_18008CC2C((__int64)&v19, i);
      i = (float *)(v16 + 16);
    }
    while ( i != v17 );
    v14 = v11;
    v15 = v10;
LABEL_10:
    a3 = (void *)sub_180017A18(v15, v14, v20);
    v19 = a3;
  }
  return sub_180017A18(i, a2, a3);
}
