/*
 * XREFs of sub_140020D64 @ 0x140020D64
 * Callers:
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 * Callees:
 *     sub_1400208E8 @ 0x1400208E8 (sub_1400208E8.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140045320 @ 0x140045320 (sub_140045320.c)
 *     sub_140045350 @ 0x140045350 (sub_140045350.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140052F18 @ 0x140052F18 (sub_140052F18.c)
 *     sub_140053F68 @ 0x140053F68 (sub_140053F68.c)
 *     sub_14005400C @ 0x14005400C (sub_14005400C.c)
 *     sub_1400544D4 @ 0x1400544D4 (sub_1400544D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140020D64(float *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF

  v20[0] = a1 + 2;
  v8 = sub_140044584(56LL);
  v20[1] = v8;
  v9 = (_QWORD *)(v8 + 16);
  sub_140021954(v8 + 16, *a3);
  v10 = *a4;
  *(_QWORD *)(v8 + 48) = *a4;
  if ( v10 )
    sub_1400B6010(v10);
  v11 = sub_140052F18(v9);
  sub_1400208E8(a1, v21, v9, v11);
  if ( *((_QWORD *)&v21[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v21[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
    if ( v8 )
    {
      sub_140045350(v9);
      sub_1400453E4(v8, 56LL);
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v13 = v12 + 1;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *((_QWORD *)a1 + 7);
    if ( v15 < 0 )
    {
      v17 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v17 + (float)(int)v17;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *a1 )
    {
      v18 = sub_140053F68(a1);
      sub_14005400C(a1, v18);
      v21[0] = *(_OWORD *)sub_1400208E8(a1, v21, v9, v11);
    }
    *(_QWORD *)a2 = sub_1400544D4(a1, v11, *(_QWORD *)&v21[0], v8, v20[0], 0LL);
    *(_BYTE *)(a2 + 8) = 1;
    sub_140045320(v20);
  }
  return a2;
}
