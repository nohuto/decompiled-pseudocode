/*
 * XREFs of sub_1401AFF24 @ 0x1401AFF24
 * Callers:
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003E598 @ 0x14003E598 (sub_14003E598.c)
 *     sub_14005A4F0 @ 0x14005A4F0 (sub_14005A4F0.c)
 *     sub_1400781F4 @ 0x1400781F4 (sub_1400781F4.c)
 *     sub_1400A1F34 @ 0x1400A1F34 (sub_1400A1F34.c)
 *     sub_1401B02E0 @ 0x1401B02E0 (sub_1401B02E0.c)
 */

__int64 __fastcall sub_1401AFF24(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  _BYTE *v6; // rsi
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  unsigned int v14; // r14d
  _QWORD *v15; // r10
  _QWORD *v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  _DWORD *v20; // rax
  _DWORD *v21; // rsi
  _DWORD *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // eax
  char v28; // r13
  PVOID v29; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  char v33; // r14
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rax
  PVOID v36; // rax
  _QWORD *v37; // rcx
  PVOID v38; // [rsp+20h] [rbp-10h] BYREF
  PVOID v39; // [rsp+28h] [rbp-8h] BYREF
  char v40; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp+50h]
  char v42; // [rsp+88h] [rbp+58h]

  v41 = a3;
  v6 = a6;
  *a3 = 0LL;
  v8 = a5;
  v9 = a3;
  *a4 = 0;
  v40 = 0;
  v38 = 0LL;
  v12 = *(_QWORD **)(a2 + 40);
  v13 = 0LL;
  v42 = 0;
  v14 = 0;
  *v8 = 0LL;
  v15 = 0LL;
  *v6 = 0;
  v16 = 0LL;
  if ( v12 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v13 = v12 - 1;
      v15 = v12 - 1;
      v16 = v12 - 1;
      v31 = v12[2] - *(_QWORD *)(a1 + 5064);
      if ( !v31 )
        v31 = v13[4] - *(_QWORD *)(a1 + 5072);
      if ( !v31 )
        break;
      v12 = (_QWORD *)*v12;
      v13 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
    }
    while ( v12 != (_QWORD *)(a2 + 40) );
    v9 = v41;
    v8 = a5;
  }
  if ( v15 )
  {
    *v9 = v13;
    *v8 = v16[7];
    *a4 = 1;
    *v6 = 1;
    return v14;
  }
  v17 = (_QWORD *)sub_1400143E0(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v39 = v17;
  v18 = v17;
  if ( !v17
    || (v19 = v17 + 1,
        v19[1] = v19,
        *v19 = v19,
        *(_DWORD *)v18 = 112,
        *(_OWORD *)(v18 + 3) = *(_OWORD *)(a1 + 5064),
        v20 = (_DWORD *)sub_1400143E0(64LL, 360LL, 1145266514LL, *(_QWORD *)(a1 + 8)),
        (v21 = v20) == 0LL) )
  {
    v14 = -1073741670;
    goto LABEL_21;
  }
  *v20 = 1145917490;
  v22 = v20 + 80;
  v20[1] = 4097;
  v20[2] = 320;
  ObfReferenceObject(*(PVOID *)(a1 + 8));
  *((_QWORD *)v21 + 2) = a1;
  *(_OWORD *)(v21 + 18) = *(_OWORD *)(a1 + 384);
  *(_OWORD *)(v21 + 22) = *(_OWORD *)(a1 + 400);
  *(_OWORD *)(v21 + 26) = *(_OWORD *)(a1 + 416);
  *(_OWORD *)(v21 + 30) = *(_OWORD *)(a1 + 432);
  *(_OWORD *)(v21 + 34) = *(_OWORD *)(a1 + 448);
  *(_OWORD *)(v21 + 38) = *(_OWORD *)(a1 + 464);
  *(_OWORD *)(v21 + 42) = *(_OWORD *)(a1 + 480);
  *(_OWORD *)(v21 + 46) = *(_OWORD *)(a1 + 496);
  *(_OWORD *)(v21 + 50) = *(_OWORD *)(a1 + 512);
  *(_OWORD *)(v21 + 54) = *(_OWORD *)(a1 + 528);
  *(_OWORD *)(v21 + 58) = *(_OWORD *)(a1 + 544);
  *(_OWORD *)(v21 + 62) = *(_OWORD *)(a1 + 560);
  *(_OWORD *)(v21 + 66) = *(_OWORD *)(a1 + 576);
  *(_OWORD *)(v21 + 70) = *(_OWORD *)(a1 + 592);
  *((_DWORD *)v18 + 11) = 320;
  v23 = sub_1400143E0(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v23 )
  {
    *((_QWORD *)v21 + 7) = v23;
    v21[12] = 0x10000;
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 528) - 2) <= 2u )
      *((_DWORD *)v18 + 10) |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x20) != 0 )
      *((_DWORD *)v18 + 10) |= 2u;
    v24 = *(_QWORD *)(a1 + 608);
    if ( (*(_DWORD *)(v24 + 184) & 0x80u) != 0 && (*(_DWORD *)(v24 + 188) & 2) != 0 )
      *((_WORD *)v21 + 152) = word_140168464;
    else
      *((_WORD *)v21 + 152) = -1;
    if ( *(_BYTE *)(a1 + 4370) )
    {
      v18[8] = *(_QWORD *)(a1 + 880);
      v25 = a1 + 952;
    }
    else
    {
      v18[8] = 0LL;
      v25 = 0LL;
    }
    *((_QWORD *)v21 + 37) = v25;
    v26 = *(_DWORD *)(a1 + 576);
    if ( v26 )
      sub_1400A1F34(a1, (__int64)(v21 + 18), v26);
    v27 = sub_1401B02E0(a1, a2, &v38, &v40);
    v28 = v40;
    v14 = v27;
    if ( v27 < 0 )
    {
      v29 = v38;
LABEL_19:
      if ( !v28 && v29 )
        sub_14005A4F0(&v38);
      if ( !v21 )
        goto LABEL_21;
      goto LABEL_30;
    }
    v32 = *(_QWORD **)(a1 + 4960);
    if ( v32 && (int)PoFxRegisterCrashdumpDevice(*v32) >= 0 )
    {
      *(_BYTE *)v22 = 1;
      v33 = 1;
      *((_QWORD *)v22 + 1) = **(_QWORD **)(a1 + 4960);
    }
    else
    {
      v33 = v42;
    }
    v34 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 5024) = 40;
    *(_WORD *)(a1 + 5026) = 1;
    if ( sub_1400781F4(v34, (LARGE_INTEGER)(a1 + 5024)) >= 0
      && (v35 = *(_QWORD *)(a1 + 5056)) != 0
      && *(_QWORD *)(a1 + 5048) )
    {
      *((_QWORD *)v22 + 3) = v35;
      *((_QWORD *)v22 + 4) = *(_QWORD *)(a1 + 5032);
    }
    else
    {
      *(_WORD *)(a1 + 5026) = 0;
      if ( !v33 )
      {
LABEL_47:
        v36 = v38;
        v14 = 0;
        v37 = a5;
        v18[6] = v21;
        v21 = 0LL;
        v18[7] = v36;
        v39 = 0LL;
        *v37 = v36;
        v29 = 0LL;
        v38 = 0LL;
        *a6 = v28;
        *v41 = v18;
        v18 = 0LL;
        goto LABEL_19;
      }
    }
    *((_QWORD *)v22 + 2) = a1 + 4893;
    *((_QWORD *)v21 + 3) = a1 + 4893;
    *((_QWORD *)v21 + 4) = sub_140079910;
    *((_QWORD *)v21 + 5) = v22;
    goto LABEL_47;
  }
  v14 = -1073741670;
LABEL_30:
  ExFreePoolWithTag(v21, 0x44436152u);
LABEL_21:
  if ( v18 )
    sub_14003E598(&v39);
  return v14;
}
