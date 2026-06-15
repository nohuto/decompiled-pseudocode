/*
 * XREFs of sub_140052318 @ 0x140052318
 * Callers:
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 * Callees:
 *     sub_140020858 @ 0x140020858 (sub_140020858.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140045320 @ 0x140045320 (sub_140045320.c)
 *     sub_140052F18 @ 0x140052F18 (sub_140052F18.c)
 *     sub_140053F68 @ 0x140053F68 (sub_140053F68.c)
 *     sub_1400541D0 @ 0x1400541D0 (sub_1400541D0.c)
 *     sub_1400544D4 @ 0x1400544D4 (sub_1400544D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140052318(float *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v21[0] = a1 + 2;
  v8 = sub_140044584(0x38uLL);
  v21[1] = v8;
  v9 = v8 + 16;
  sub_140021954(v8 + 16, *a3);
  v10 = *a4;
  *(_QWORD *)(v8 + 48) = *a4;
  if ( v10 )
    sub_1400B6010(v10);
  v11 = sub_140052F18(v9);
  sub_140020858(a1, v22, v9, v11);
  v12 = *((_QWORD *)&v22[0] + 1);
  if ( *((_QWORD *)&v22[0] + 1) )
  {
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    if ( v13 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v14 = v13 + 1;
    if ( v14 < 0 )
      v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
          + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
    else
      v15 = (float)(int)v14;
    v16 = *((_QWORD *)a1 + 7);
    if ( v16 < 0 )
    {
      v18 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v16 >> 1);
      v17 = (float)(int)v18 + (float)(int)v18;
    }
    else
    {
      v17 = (float)(int)v16;
    }
    if ( (float)(v15 / v17) > *a1 )
    {
      v19 = sub_140053F68(a1);
      sub_1400541D0(a1, v19);
      v22[0] = *(_OWORD *)sub_140020858(a1, v22, v9, v11);
    }
    v12 = sub_1400544D4(a1, v11, *(_QWORD *)&v22[0], v8, v21[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
  }
  *(_QWORD *)a2 = v12;
  sub_140045320((__int64)v21);
  return a2;
}
