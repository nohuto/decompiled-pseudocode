/*
 * XREFs of sub_140017ED8 @ 0x140017ED8
 * Callers:
 *     sub_140017DA0 @ 0x140017DA0 (sub_140017DA0.c)
 * Callees:
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_1400318E0 @ 0x1400318E0 (sub_1400318E0.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140046750 @ 0x140046750 (sub_140046750.c)
 *     sub_1400468D0 @ 0x1400468D0 (sub_1400468D0.c)
 *     sub_140053F68 @ 0x140053F68 (sub_140053F68.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140017ED8(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // r14
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h]

  v26 = sub_1400468D0(a3);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 48) & v26) + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 == v10 )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v25[0] = a1 + 8;
    v12 = (_QWORD *)sub_140044584(32LL);
    v25[1] = v12;
    v12[2] = *a3;
    sub_140010994(v12 + 3, *a4);
    v13 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *(float *)a1 )
    {
      v24 = sub_140053F68(a1);
      sub_140046750(a1, v24);
      v17 = v26;
      v10 = *(_QWORD *)sub_1400318E0(a1, v25, v12 + 2, v26);
    }
    else
    {
      v17 = v26;
    }
    v18 = *(_QWORD **)(v10 + 8);
    ++*(_QWORD *)(a1 + 16);
    *v12 = v10;
    v12[1] = v18;
    *v18 = v12;
    *(_QWORD *)(v10 + 8) = v12;
    v19 = 2 * (v17 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_QWORD *)(v20 + 16 * (v17 & *(_QWORD *)(a1 + 48)));
    if ( v21 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v20 + 16 * (v17 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v21 == v10 )
      {
        *(_QWORD *)(v20 + 16 * (v17 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_16;
      }
      if ( *(_QWORD **)(v20 + 16 * (v17 & *(_QWORD *)(a1 + 48)) + 8) != v18 )
        goto LABEL_16;
    }
    *(_QWORD *)(v20 + 8 * v19 + 8) = v12;
LABEL_16:
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  v11 = *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 48) & v26));
  while ( *a3 != *(_QWORD *)(v9 + 16) )
  {
    if ( v9 == v11 )
    {
      v10 = v9;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
