/*
 * XREFs of sub_140093194 @ 0x140093194
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140053F68 @ 0x140053F68 (sub_140053F68.c)
 *     sub_1400930A0 @ 0x1400930A0 (sub_1400930A0.c)
 *     sub_140093678 @ 0x140093678 (sub_140093678.c)
 *     sub_140093ADC @ 0x140093ADC (sub_140093ADC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140093194(float *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v20; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-30h]
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = sub_140026BBC((__int64)a1, (__int64)a3, 8uLL);
  sub_1400930A0(a1, v22, a3, v6);
  if ( !*((_QWORD *)&v22[0] + 1) )
  {
    if ( *((_QWORD *)a1 + 2) == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    v20 = a1 + 2;
    v7 = (_QWORD *)sub_1400492F4(48LL, 0LL);
    v21 = v7;
    v7[2] = *a3;
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      v13 = sub_140053F68((__int64)a1, v8);
      sub_140093ADC(a1, v13);
      v22[0] = *(_OWORD *)sub_1400930A0(a1, v22, v7 + 2, v6);
    }
    v21 = 0LL;
    v14 = *(_QWORD *)&v22[0];
    v15 = *(_QWORD **)(*(_QWORD *)&v22[0] + 8LL);
    ++*((_QWORD *)a1 + 2);
    *v7 = v14;
    v7[1] = v15;
    *v15 = v7;
    *(_QWORD *)(v14 + 8) = v7;
    v16 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v17 = *((_QWORD *)a1 + 3);
    v18 = *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v18 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v7;
LABEL_18:
      *(_QWORD *)(v17 + 8 * v16 + 8) = v7;
      goto LABEL_19;
    }
    if ( v18 == v14 )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v7;
    }
    else if ( *(_QWORD **)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) == v15 )
    {
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 1;
    sub_140093678(&v20);
    return a2;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v22[0] + 1);
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
