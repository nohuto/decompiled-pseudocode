/*
 * XREFs of sub_140014CBC @ 0x140014CBC
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140015208 @ 0x140015208 (sub_140015208.c)
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

NTSTATUS __fastcall sub_140014CBC(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 Pool2; // rax
  _DWORD *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // ebp
  unsigned int v18; // ecx
  bool v19; // zf
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rax
  void *v26; // rdx
  int *v27; // rax
  unsigned __int64 v28; // rdx
  char *v29; // rax
  char v30; // si
  unsigned int v31; // eax
  char v32; // r12
  char v33; // r11
  char v34; // al
  char v35; // r15
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char *v38; // r11
  unsigned int *v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  char v42; // cl
  char v43; // r8
  char v44; // [rsp+60h] [rbp-68h]
  char v45; // [rsp+61h] [rbp-67h]
  unsigned int v46; // [rsp+64h] [rbp-64h]
  __int64 v47; // [rsp+68h] [rbp-60h]
  int v48; // [rsp+68h] [rbp-60h]
  __int128 v49; // [rsp+70h] [rbp-58h] BYREF

  v2 = a1[14];
  v4 = *(_QWORD *)(a2 + 184);
  v47 = v4;
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    v17 = -1073741820;
LABEL_60:
    LOBYTE(v8) = 0;
    goto LABEL_62;
  }
  v7 = *(_DWORD *)(v4 + 8);
  if ( v7 < 0x38 )
  {
    v17 = -1073741789;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(v6 + 8) & 1) != 0 )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v4 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1[3] + 8LL), (PIRP)a2);
  }
  memset_0(*(void **)(a2 + 24), 0, v7);
  *(_BYTE *)(v6 + 8) |= 1u;
  *(_DWORD *)(v6 + 4) = 56;
  *(_BYTE *)(v6 + 33) &= ~1u;
  *(_DWORD *)v6 = 56;
  LOBYTE(v8) = 0;
  *(_BYTE *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 9) = 16711681;
  *(_DWORD *)(v6 + 16) = 4096;
  *(_DWORD *)(v6 + 20) = 0x10000;
  *(_DWORD *)(v6 + 24) = 32;
  *(_DWORD *)(v6 + 28) = 32;
  v9 = a1[20];
  if ( v9 )
  {
    *(_OWORD *)(v6 + 40) = *(_OWORD *)(v9 + 90);
  }
  else
  {
    v23 = a1[19];
    if ( v23
      && ((v24 = (_DWORD *)a1[3], *v24 != 1094997074)
        ? (*v24 != 1314275652
         ? (v25 = 232LL)
         : (v25 = (__int64)(v24 + 100)))
        : (v25 = (__int64)(v24 + 152)),
          (*(_DWORD *)(*(_QWORD *)v25 + 184LL) & 0x40) != 0) )
    {
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(v23 + 41);
    }
    else
    {
      *(_DWORD *)(v6 + 40) = *(_DWORD *)(v2 + 32);
    }
  }
  v10 = a1[1];
  v11 = *(_QWORD *)(v10 + 64);
  if ( *(_DWORD *)v11 == 1431193940 )
    v12 = *(_QWORD *)(v11 + 24);
  else
    v12 = *(_QWORD *)(v10 + 64);
  if ( *(_DWORD *)v11 != 1431193940 )
    v11 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 272LL, 1918067026LL);
  v14 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 28;
    *(_DWORD *)(Pool2 + 16) = 1771392;
    *(_QWORD *)(Pool2 + 4) = 0x455241574D524946LL;
    if ( v11 )
      v15 = *(_DWORD *)(v11 + 1392);
    else
      v15 = *(_DWORD *)(v12 + 4124);
    v14[3] = v15;
    v14[6] = 244;
    v14[7] = 1;
    v14[9] = 1;
    v14[11] = 56;
    v14[12] = 216;
    v14[8] = 24;
    v14[10] = v11 == 0;
    v14[15] = 24;
    v14[14] = 2;
    v16 = sub_1400153FC((_DWORD)a1, a2, (_DWORD)v14, 272, (__int64)sub_1400399C0, 0, 64);
    v17 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741801 )
        goto LABEL_19;
      if ( v16 != -1073741670 )
      {
        v17 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v17 = sub_140015208(a2, v14);
      if ( v17 == -1073741801 )
        goto LABEL_19;
    }
    if ( v17 != -1073741670 )
    {
LABEL_16:
      v18 = *(_DWORD *)(v47 + 8);
      if ( v18 >= *(_DWORD *)(v6 + 4) )
        v18 = *(_DWORD *)(v6 + 4);
      *(_QWORD *)(a2 + 56) = v18;
    }
LABEL_19:
    ExFreePoolWithTag(v14, 0x72536152u);
    goto LABEL_20;
  }
  sub_14008D9B8(v10, 64, 272, 1918067026, 0x80000000);
  v17 = -1073741670;
LABEL_62:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_20:
  v19 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v17;
  if ( v19 )
    goto LABEL_24;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_24;
    v26 = &unk_140148B18;
    goto LABEL_35;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_24;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v27 = *(int **)(a2 + 56);
        if ( v27 )
          v8 = *v27;
        sub_140056AB0((_DWORD)v20, v21, (unsigned int)&v49, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_24;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_24;
    v26 = &unk_140149FE8;
LABEL_35:
    sub_140052F3C(v20, v26, &v49, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_24;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_24;
  v28 = *(_QWORD *)(v21 + 8);
  v35 = 0;
  v36 = 0LL;
  v44 = 0;
  v37 = 0;
  v30 = 0;
  v33 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v28 + 2) != 40 )
  {
    v42 = *(_BYTE *)(v28 + 72);
    v36 = *(_BYTE **)(v28 + 32);
    v37 = *(_BYTE *)(v28 + 11);
    v35 = *(_BYTE *)(v28 + 4);
    if ( !*(_BYTE *)(v28 + 2) )
      goto LABEL_105;
    goto LABEL_24;
  }
  v38 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v28 + 20) )
    goto LABEL_24;
  LODWORD(v20) = 0;
  v48 = 0;
  v46 = *(_DWORD *)(v28 + 56);
  if ( !v46 )
    goto LABEL_102;
  v39 = (unsigned int *)(v28 + 120);
  while ( 1 )
  {
    v40 = *v39;
    if ( (unsigned int)v40 >= 0x80 )
    {
      v41 = *(unsigned int *)(v28 + 16);
      if ( (unsigned int)v40 < (unsigned int)v41 )
        break;
    }
LABEL_95:
    LODWORD(v20) = (_DWORD)v20 + 1;
    ++v39;
    v48 = (int)v20;
    if ( (unsigned int)v20 >= v46 )
      goto LABEL_102;
  }
  if ( *(_DWORD *)(v40 + v28) != 64 )
  {
    LODWORD(v20) = *(_DWORD *)(v40 + v28) - 65;
    if ( *(_DWORD *)(v40 + v28) == 65 )
    {
      LODWORD(v20) = v40 + 56;
      if ( v40 + 56 <= v41 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v40 + v28 + 10) )
          v38 = (char *)(v40 + v28 + 24);
        v35 = *(_BYTE *)(v40 + v28 + 8);
        v36 = *(_BYTE **)(v40 + v28 + 16);
        v37 = *(_BYTE *)(v40 + v28 + 9);
      }
    }
    else if ( *(_DWORD *)(v40 + v28) == 66 )
    {
      LODWORD(v20) = v40 + 40;
      if ( v40 + 40 <= v41 )
      {
        if ( *(_DWORD *)(v40 + v28 + 12) )
          v38 = (char *)(v40 + v28 + 32);
        v36 = *(_BYTE **)(v40 + v28 + 24);
        goto LABEL_101;
      }
    }
    goto LABEL_93;
  }
  LODWORD(v20) = v40 + 40;
  if ( v40 + 40 > v41 )
  {
LABEL_93:
    if ( v45 )
      goto LABEL_102;
    LODWORD(v20) = v48;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(v40 + v28 + 10) )
    v38 = (char *)(v40 + v28 + 24);
  v36 = *(_BYTE **)(v40 + v28 + 16);
LABEL_101:
  v37 = *(_BYTE *)(v40 + v28 + 9);
  v35 = *(_BYTE *)(v40 + v28 + 8);
LABEL_102:
  if ( v38 )
  {
    v42 = *v38;
    v33 = 0;
LABEL_105:
    LOBYTE(v20) = v42 - 8;
    if ( ((unsigned __int8)v20 & 0x5D) == 0 )
    {
      v43 = *(_BYTE *)(v28 + 3);
      if ( v43 == 1 || !v36 || !v37 )
        goto LABEL_56;
      LOBYTE(v28) = 0;
      v20 = &v36[v37];
      v29 = v36 + 8;
      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
      {
        if ( v29 <= v20 )
        {
          LOBYTE(v28) = 1;
          v33 = v36[2];
          v30 = v36[1] & 0xF;
          v32 = v36[3];
        }
      }
      else
      {
        if ( v29 <= v20 )
        {
          v30 = v36[2] & 0xF;
          v31 = v37;
          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
            v31 = (unsigned __int8)v36[7] + 8;
          v20 = v36 + 13;
          v28 = (unsigned __int64)&v36[v31];
          if ( (unsigned __int64)(v36 + 13) > v28 )
            v44 = 0;
          else
            v44 = v36[12];
          if ( (unsigned __int64)(v36 + 14) <= v28 )
            v32 = *v20;
          LOBYTE(v28) = 1;
        }
        v33 = v44;
      }
      if ( (_BYTE)v28 )
      {
        LOBYTE(v8) = v33;
        v34 = v32;
      }
      else
      {
LABEL_56:
        v30 = 0;
        v34 = 0;
      }
      sub_140052E64((_DWORD)v20, v28, (unsigned int)&v49, a2, *(_DWORD *)(a2 + 48), v43, v35, v30, v8, v34, a2);
    }
  }
LABEL_24:
  IofCompleteRequest((PIRP)a2, 0);
  return v17;
}
