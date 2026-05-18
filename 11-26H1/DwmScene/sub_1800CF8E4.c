/*
 * XREFs of sub_1800CF8E4 @ 0x1800CF8E4
 * Callers:
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_1800CFAFC @ 0x1800CFAFC (sub_1800CFAFC.c)
 *     sub_1800CFB2C @ 0x1800CFB2C (sub_1800CFB2C.c)
 *     sub_1800CFB6C @ 0x1800CFB6C (sub_1800CFB6C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF8E4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rbx
  float *v10; // rcx
  float v11; // xmm0_4
  char v12; // dl
  _BYTE v14[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v17 = *a1;
  sub_1800CFB2C(v14, a1);
  sub_1800CFAFC(v8, v15 + 4, a3, a4);
  sub_180013074(v15, &v17);
  sub_180013074(v15 + 1, &v17);
  sub_180013074(v15 + 2, &v17);
  *((_BYTE *)v15 + 24) = 0;
  *((_BYTE *)v15 + 25) = 0;
  v9 = v15;
  v10 = *(float **)(*a1 + 8LL);
  v16 = (unsigned __int64)v10;
  if ( !*((_BYTE *)v10 + 25) )
  {
    v11 = *((float *)v15 + 8);
    do
    {
      *(_QWORD *)&v16 = v10;
      if ( v11 <= v10[8] )
      {
        v12 = 0;
        DWORD2(v16) = 0;
      }
      else
      {
        v12 = 1;
        DWORD2(v16) = 1;
      }
      if ( !v12 )
        v10 += 4;
      v10 = *(float **)v10;
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  if ( a1[1] == 0x555555555555555LL )
    sub_18001DF68();
  v15 = 0LL;
  sub_1800CFB6C(v14);
  *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v16, (__int64)v9);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
