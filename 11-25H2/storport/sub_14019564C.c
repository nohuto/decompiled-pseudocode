/*
 * XREFs of sub_14019564C @ 0x14019564C
 * Callers:
 *     sub_140196430 @ 0x140196430 (sub_140196430.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140195B08 @ 0x140195B08 (sub_140195B08.c)
 *     sub_140195D40 @ 0x140195D40 (sub_140195D40.c)
 *     sub_140195ED0 @ 0x140195ED0 (sub_140195ED0.c)
 *     sub_1401960A8 @ 0x1401960A8 (sub_1401960A8.c)
 */

__int64 __fastcall sub_14019564C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, _QWORD *a6, _BYTE *a7)
{
  _BYTE *v7; // rbx
  _QWORD *v8; // r11
  _QWORD *v9; // r12
  _BYTE *v11; // r13
  _QWORD *v12; // rcx
  unsigned int v13; // edi
  _QWORD *v15; // r8
  _QWORD *v16; // r10
  _QWORD *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  char v27; // cl
  bool v28; // sf
  __int64 v29; // rax
  __int64 v31; // [rsp+68h] [rbp+48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+50h]
  __int64 v33; // [rsp+78h] [rbp+58h] BYREF

  v32 = a3;
  v31 = a2;
  v7 = a5;
  v8 = (_QWORD *)(a3 + 40);
  v9 = a6;
  v11 = a7;
  v12 = 0LL;
  v33 = 0LL;
  v13 = 0;
  *a4 = 0LL;
  *v9 = 0LL;
  v15 = *(_QWORD **)(a3 + 40);
  *v7 = 0;
  *v11 = 0;
  LOBYTE(v31) = 0;
  while ( 1 )
  {
    v16 = 0LL;
    v17 = 0LL;
    if ( v15 == v8 )
      break;
    v12 = v15 - 1;
    v16 = v15 - 1;
    v17 = v15 - 1;
    v18 = v15[2] - *(_QWORD *)(a1 + 1032);
    if ( !v18 )
      v18 = v12[4] - *(_QWORD *)(a1 + 1040);
    if ( !v18 )
      break;
    v15 = (_QWORD *)*v15;
    v12 = 0LL;
  }
  if ( v16 )
  {
    *v9 = v17[7];
    *a4 = (__int64)v12;
    *v7 = 1;
    *v11 = 1;
    return v13;
  }
  v19 = sub_1400143E0(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  a5 = (_BYTE *)v19;
  v20 = v19;
  if ( v19
    && (v21 = (_QWORD *)(v19 + 8),
        v21[1] = v21,
        *v21 = v21,
        *(_DWORD *)v20 = 112,
        *(_OWORD *)(v20 + 24) = *(_OWORD *)(a1 + 1032),
        v22 = (_DWORD *)sub_1400143E0(64LL, 360LL, 1145266514LL, *(_QWORD *)(a1 + 8)),
        (v23 = v22) != 0LL) )
  {
    *v22 = 1145917490;
    v22[1] = 4097;
    v22[2] = 320;
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v23 + 2) = a1;
    *(_OWORD *)(v23 + 18) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v23 + 22) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v23 + 26) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(v23 + 30) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(v23 + 34) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(v23 + 38) = *(_OWORD *)(a1 + 256);
    *(_OWORD *)(v23 + 42) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(v23 + 46) = *(_OWORD *)(a1 + 288);
    *(_OWORD *)(v23 + 50) = *(_OWORD *)(a1 + 304);
    *(_OWORD *)(v23 + 54) = *(_OWORD *)(a1 + 320);
    *(_OWORD *)(v23 + 58) = *(_OWORD *)(a1 + 336);
    *(_OWORD *)(v23 + 62) = *(_OWORD *)(a1 + 352);
    *(_OWORD *)(v23 + 66) = *(_OWORD *)(a1 + 368);
    *(_OWORD *)(v23 + 70) = *(_OWORD *)(a1 + 384);
    v23[68] &= ~2u;
    *(_DWORD *)(v20 + 44) = 320;
    v24 = sub_1400143E0(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v24 )
    {
      *((_QWORD *)v23 + 7) = v24;
      v23[12] = 0x10000;
      if ( (unsigned __int8)(*(_BYTE *)(a1 + 320) - 2) <= 2u )
        *(_DWORD *)(v20 + 40) |= 1u;
      *(_DWORD *)(v20 + 40) |= 0x40000002u;
      *((_WORD *)v23 + 152) = word_140168464;
      if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
      {
        *(_QWORD *)(v20 + 64) = *(_QWORD *)(a1 + 1144);
        v25 = a1 + 1400;
      }
      else
      {
        *(_QWORD *)(v20 + 64) = 0LL;
        v25 = 0LL;
      }
      *((_QWORD *)v23 + 37) = v25;
      if ( *(_DWORD *)(a1 + 368) )
        sub_1401960A8(a1, v23 + 18);
      v26 = sub_140195B08(a1, v32, &v33, &v31);
      v27 = v31;
      v13 = v26;
      v28 = v26 < 0;
      v29 = v33;
      if ( !v28 )
      {
        *(_QWORD *)(v20 + 48) = v23;
        v13 = 0;
        *(_QWORD *)(v20 + 56) = v29;
        v23 = 0LL;
        *v9 = v29;
        v29 = 0LL;
        *a4 = v20;
        v20 = 0LL;
        a5 = 0LL;
        v33 = 0LL;
        *v11 = v27;
      }
      if ( !v27 && v29 )
        sub_140195ED0(&v33);
      if ( !v23 )
        goto LABEL_28;
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(v23, 0x44436152u);
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_28:
  if ( v20 )
    sub_140195D40(&a5);
  return v13;
}
