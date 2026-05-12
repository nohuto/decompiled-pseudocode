/*
 * XREFs of sub_140196914 @ 0x140196914
 * Callers:
 *     sub_1401973B0 @ 0x1401973B0 (sub_1401973B0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400781F4 @ 0x1400781F4 (sub_1400781F4.c)
 *     sub_140195ED0 @ 0x140195ED0 (sub_140195ED0.c)
 *     sub_140196ED8 @ 0x140196ED8 (sub_140196ED8.c)
 */

__int64 __fastcall sub_140196914(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5, _QWORD *a6, _BYTE *a7)
{
  _BYTE *v7; // r10
  _QWORD *v8; // rdi
  _BYTE *v9; // r11
  _QWORD **v10; // r8
  _QWORD *v12; // r9
  unsigned int v14; // esi
  _QWORD *v15; // rdx
  char v16; // r12
  PVOID v17; // rbp
  _QWORD *v18; // rcx
  __int64 v19; // rax
  char *v20; // r14
  _QWORD *v21; // rax
  __int128 v22; // xmm0
  _DWORD *v23; // rax
  _DWORD *v24; // rdi
  _DWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  char v33; // si
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rax
  PVOID v36; // rax
  _QWORD *v37; // rcx
  _BYTE *v38; // rax
  void *v39; // rcx
  PVOID v41[8]; // [rsp+28h] [rbp-40h] BYREF
  char v44; // [rsp+88h] [rbp+20h] BYREF

  v7 = a5;
  v8 = (_QWORD *)(a1 + 1032);
  v9 = a7;
  v10 = (_QWORD **)(a3 + 40);
  *a4 = 0LL;
  v44 = 0;
  v12 = a6;
  v14 = 0;
  v41[0] = 0LL;
  v15 = *v10;
  v16 = 0;
  *v7 = 0;
  v17 = 0LL;
  *v12 = 0LL;
  *v9 = 0;
  if ( v15 != v10 )
  {
    do
    {
      v18 = v15 - 1;
      if ( v15[2] == *v8 && v18[4] == v8[1] )
        break;
      v15 = (_QWORD *)*v15;
      v18 = 0LL;
    }
    while ( v15 != v10 );
    if ( v18 )
    {
      *v12 = v18[7];
      *v7 = 1;
      *v9 = 1;
      *a4 = v18;
      return v14;
    }
  }
  v19 = sub_1400143E0(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v20 = (char *)v19;
  if ( !v19 )
    return (unsigned int)-1073741670;
  v21 = (_QWORD *)(v19 + 8);
  *(_DWORD *)v20 = 112;
  v21[1] = v21;
  *v21 = v21;
  v22 = *(_OWORD *)v8;
  *((_DWORD *)v20 + 18) = 0x40000;
  *(_OWORD *)(v20 + 24) = v22;
  v23 = (_DWORD *)sub_1400143E0(64LL, 392LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v24 = v23;
  if ( v23 )
  {
    *v23 = 1145917490;
    v25 = v23 + 88;
    v23[1] = 8193;
    v23[2] = 352;
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v24 + 2) = a1;
    v26 = sub_1400143E0(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v26 )
    {
      v14 = -1073741670;
      goto LABEL_35;
    }
    v24[12] = 0x10000;
    *((_QWORD *)v24 + 7) = v26;
    *((_DWORD *)v20 + 10) |= 0x80000000;
    if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 1144);
      v28 = a1 + 1400;
    }
    else
    {
      v28 = 0LL;
      v27 = 0LL;
    }
    *((_QWORD *)v20 + 8) = v27;
    *((_QWORD *)v24 + 37) = v28;
    *(_OWORD *)(v24 + 18) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v24 + 22) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v24 + 26) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(v24 + 30) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(v24 + 34) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(v24 + 38) = *(_OWORD *)(a1 + 256);
    *(_OWORD *)(v24 + 42) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(v24 + 46) = *(_OWORD *)(a1 + 288);
    *(_OWORD *)(v24 + 50) = *(_OWORD *)(a1 + 304);
    *(_OWORD *)(v24 + 54) = *(_OWORD *)(a1 + 320);
    *(_OWORD *)(v24 + 58) = *(_OWORD *)(a1 + 336);
    *(_OWORD *)(v24 + 62) = *(_OWORD *)(a1 + 352);
    *(_OWORD *)(v24 + 66) = *(_OWORD *)(a1 + 368);
    *(_OWORD *)(v24 + 70) = *(_OWORD *)(a1 + 384);
    v29 = sub_1400143E0(64LL, 132LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v29 )
    {
      v14 = -1073741670;
LABEL_31:
      if ( !v16 && v17 )
        sub_140195ED0(v41);
      if ( !v24 )
      {
LABEL_36:
        if ( !v20 )
          return v14;
        goto LABEL_37;
      }
LABEL_35:
      ExFreePoolWithTag(v24, 0x44436152u);
      goto LABEL_36;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1048LL);
    *(_OWORD *)v29 = *(_OWORD *)v30;
    *(_OWORD *)(v29 + 16) = *(_OWORD *)(v30 + 16);
    *(_OWORD *)(v29 + 32) = *(_OWORD *)(v30 + 32);
    *(_OWORD *)(v29 + 48) = *(_OWORD *)(v30 + 48);
    *(_OWORD *)(v29 + 64) = *(_OWORD *)(v30 + 64);
    *(_OWORD *)(v29 + 80) = *(_OWORD *)(v30 + 80);
    *(_OWORD *)(v29 + 96) = *(_OWORD *)(v30 + 96);
    *(_OWORD *)(v29 + 112) = *(_OWORD *)(v30 + 112);
    *(_DWORD *)(v29 + 128) = *(_DWORD *)(v30 + 128);
    *((_WORD *)v24 + 153) = *(_WORD *)(*(_QWORD *)(a1 + 576) + 8LL);
    *((_WORD *)v24 + 154) = *(_WORD *)(*(_QWORD *)(a1 + 576) + 10LL);
    *((_BYTE *)v24 + 310) = *(_BYTE *)(*(_QWORD *)(a1 + 576) + 16LL);
    v31 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 24LL) & 0xFFFFC000;
    *((_QWORD *)v24 + 39) = v31;
    *((_QWORD *)v24 + 39) = v31 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 576) + 28LL) << 32);
    v24[83] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 620LL);
    *((_QWORD *)v24 + 40) = v29;
    v24[82] = *(_DWORD *)(a2 + 56);
    v14 = sub_140196ED8(a1, a3, v41, &v44);
    if ( (v14 & 0x80000000) != 0 )
    {
      v16 = v44;
      v17 = v41[0];
      goto LABEL_31;
    }
    v32 = *(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL);
    if ( v32 && (int)PoFxRegisterCrashdumpDevice(*v32) >= 0 )
    {
      *(_BYTE *)v25 = 1;
      v33 = 1;
      *((_QWORD *)v25 + 1) = **(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL);
    }
    else
    {
      v33 = 0;
    }
    v34 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 104) = 40;
    *(_WORD *)(a1 + 106) = 1;
    if ( sub_1400781F4(v34, (LARGE_INTEGER)(a1 + 104)) >= 0
      && (v35 = *(_QWORD *)(a1 + 136)) != 0
      && *(_QWORD *)(a1 + 128) )
    {
      *((_QWORD *)v25 + 3) = v35;
      *((_QWORD *)v25 + 4) = *(_QWORD *)(a1 + 112);
    }
    else
    {
      *(_WORD *)(a1 + 106) = 0;
      if ( !v33 )
      {
LABEL_29:
        v36 = v41[0];
        v37 = a6;
        v14 = 0;
        v16 = v44;
        v17 = 0LL;
        *((PVOID *)v20 + 7) = v41[0];
        *((_QWORD *)v20 + 6) = v24;
        v24 = 0LL;
        *v37 = v36;
        v38 = a7;
        *a4 = v20;
        v20 = 0LL;
        v41[0] = 0LL;
        *v38 = v16;
        goto LABEL_31;
      }
    }
    *((_QWORD *)v25 + 2) = a1 + 100;
    *((_QWORD *)v24 + 3) = a1 + 100;
    *((_QWORD *)v24 + 4) = sub_140079910;
    *((_QWORD *)v24 + 5) = v25;
    goto LABEL_29;
  }
  v14 = -1073741670;
LABEL_37:
  v39 = (void *)*((_QWORD *)v20 + 6);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0x44436152u);
    *((_QWORD *)v20 + 6) = 0LL;
  }
  ExFreePoolWithTag(v20, 0x44436152u);
  return v14;
}
