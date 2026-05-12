/*
 * XREFs of sub_140098900 @ 0x140098900
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_1400158F0 @ 0x1400158F0 (sub_1400158F0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140091C38 @ 0x140091C38 (sub_140091C38.c)
 *     sub_140091EAC @ 0x140091EAC (sub_140091EAC.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140098900(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // edi
  __int64 v5; // rdx
  int v7; // ecx
  int Status; // esi
  _DWORD *v9; // r13
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int128 *v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rax
  _DWORD *v18; // rsi
  _DWORD *v19; // rsi
  char v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r15
  char v23; // al
  PVOID v24; // rsi
  PVOID v25; // rcx
  PIRP v26; // rsi
  __int64 v27; // r8
  IRP *v28; // rax
  NTSTATUS v29; // eax
  IRP *v30; // r8
  _OWORD *v31; // rdx
  unsigned int v32; // eax
  _OWORD *v33; // rax
  _OWORD *v34; // r13
  __int64 v35; // rcx
  __int128 v36; // xmm1
  bool v37; // cf
  _OWORD *v38; // r12
  __int64 v39; // rax
  __int128 v40; // xmm1
  bool v41; // zf
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  int *v44; // rax
  const EVENT_DESCRIPTOR *v45; // rdx
  __int64 v46; // rdx
  char v47; // bp
  _BYTE *v48; // r9
  unsigned __int8 v49; // r10
  char v50; // r11
  char v51; // r13
  char v52; // r12
  char *v53; // rbx
  int v54; // eax
  unsigned int v55; // r8d
  unsigned int *v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  char v59; // cl
  char v60; // r8
  _BYTE *v61; // rax
  unsigned int v62; // eax
  unsigned __int64 v63; // r8
  char v64; // al
  __int64 v66; // [rsp+20h] [rbp-C8h]
  __int64 v67; // [rsp+28h] [rbp-C0h]
  __int64 v68; // [rsp+28h] [rbp-C0h]
  __int64 v69; // [rsp+30h] [rbp-B8h]
  __int64 v70; // [rsp+38h] [rbp-B0h]
  char v71[8]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD *v72; // [rsp+68h] [rbp-80h]
  PIRP Irp; // [rsp+70h] [rbp-78h]
  PVOID Dst; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+80h] [rbp-68h]
  struct _IO_STATUS_BLOCK v76; // [rsp+88h] [rbp-60h] BYREF
  GUID v77; // [rsp+98h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 3424);
  v3 = 0;
  Irp = (PIRP)a1;
  v5 = *(_QWORD *)(a2 + 184);
  v7 = *(_DWORD *)(a1 + 3432);
  Status = 0;
  v71[0] = 0;
  v9 = *(_DWORD **)(a2 + 24);
  v10 = *(_DWORD *)(v5 + 8);
  v76 = 0LL;
  if ( (((v7 - 8) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(a1 + 506) & 0x10) == 0) && v7 != 11 )
  {
    Status = -1073741637;
LABEL_59:
    v16 = 0LL;
    goto LABEL_60;
  }
  if ( *(_DWORD *)(v5 + 16) < 0xCu )
    goto LABEL_58;
  if ( v10 < 0x20C )
  {
    Status = -1073741789;
    goto LABEL_59;
  }
  if ( !v9 || *v9 != 12 || v9[1] != 12 || v9[2] > 1u )
  {
LABEL_58:
    Status = -1073741811;
    goto LABEL_59;
  }
  v11 = MEMORY[0xFFFFF78000000014];
  if ( (v9[2] & 1) != 0 )
  {
    if ( v2 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !v2 )
  {
LABEL_20:
    v17 = sub_1400143E0(64LL, 528LL, 1414750546LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 3424) = v17;
    v2 = v17;
    if ( !v17 )
    {
      Status = -1073741670;
      goto LABEL_59;
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v2 + 520) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v2 < 0x430E23400uLL )
  {
    *v9 = 524;
    v12 = (__int128 *)(v2 + 8);
    v9[1] = 524;
    v13 = 4LL;
    *((_BYTE *)v9 + 8) = (*(_DWORD *)(v2 + 520) & 2) != 0;
    v14 = (_OWORD *)((char *)v9 + 9);
    do
    {
      v15 = *v12;
      v12 += 8;
      *v14 = v15;
      v14 += 8;
      *(v14 - 7) = *(v12 - 7);
      *(v14 - 6) = *(v12 - 6);
      *(v14 - 5) = *(v12 - 5);
      *(v14 - 4) = *(v12 - 4);
      *(v14 - 3) = *(v12 - 3);
      *(v14 - 2) = *(v12 - 2);
      *(v14 - 1) = *(v12 - 1);
      --v13;
    }
    while ( v13 );
    *(_DWORD *)(v2 + 520) |= 1u;
    v16 = 524LL;
    *(_QWORD *)v2 = v11;
    goto LABEL_60;
  }
LABEL_22:
  v18 = *(_DWORD **)(a1 + 24);
  if ( *v18 == 1314275652 )
  {
    v19 = v18 + 44;
  }
  else if ( *v18 == 1094997074 )
  {
    v19 = v18 + 96;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *((_BYTE *)v19 + 98);
  v21 = *(_QWORD *)(a1 + 8);
  v72 = v19;
  v22 = sub_140015A14(v21, 0, v20, 1);
  if ( !v22 )
  {
    Status = -1073741801;
    goto LABEL_59;
  }
  P = (PVOID)sub_1400143E0(64LL, 512LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( P )
  {
    Dst = (PVOID)sub_1400143E0(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
    if ( !Dst )
    {
      Status = -1073741801;
LABEL_33:
      v16 = 0LL;
      goto LABEL_34;
    }
    sub_140091EAC(a1, a2, v22, (__int64)Dst, v66, *((_BYTE *)v19 + 98));
    Status = sub_140099180(a1, v22, v71);
    if ( Status < 0 )
      goto LABEL_33;
    v23 = v71[0];
    v16 = 9LL;
    v24 = Dst;
    v25 = Dst;
    *v9 = 524;
    v9[1] = 9;
    *((_BYTE *)v9 + 8) = v23;
    memset_0(v25, 0, 0xFFuLL);
    v68 = (__int64)v24;
    v26 = Irp;
    sub_140091C38((__int64)Irp, a2, v22, (__int64)P, v66, v68, v69, *((_BYTE *)v72 + 98));
    v28 = sub_140014B7C((__int64)v26->MdlAddress, v22, v27, &v76);
    Irp = v28;
    if ( !v28 )
    {
      Status = -1073741801;
      goto LABEL_34;
    }
    v29 = sub_140018E30((PDEVICE_OBJECT)v26->MdlAddress, v28);
    v30 = Irp;
    Status = v29;
    if ( v29 >= 0 )
    {
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
      {
LABEL_55:
        sub_1400158A4(v30);
LABEL_34:
        ExFreePoolWithTag(P, 0x72536152u);
        if ( Dst )
          ExFreePoolWithTag(Dst, 0x4E536152u);
        goto LABEL_36;
      }
      Status = sub_1400158F0(*(_BYTE *)(v22 + 3));
    }
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(v22 + 2) == 40 )
      {
        v31 = *(_OWORD **)(v22 + 64);
        v32 = *(_DWORD *)(v22 + 60);
      }
      else
      {
        v31 = *(_OWORD **)(v22 + 24);
        v32 = *(_DWORD *)(v22 + 16);
      }
      if ( v32 >= 0x200 )
      {
        v9[1] = 524;
        v33 = v31;
        v34 = (_OWORD *)((char *)v9 + 9);
        v35 = 4LL;
        do
        {
          *v34 = *v33;
          v34[1] = v33[1];
          v34[2] = v33[2];
          v34[3] = v33[3];
          v34[4] = v33[4];
          v34[5] = v33[5];
          v34[6] = v33[6];
          v34 += 8;
          v36 = v33[7];
          v33 += 8;
          *(v34 - 1) = v36;
          --v35;
        }
        while ( v35 );
        v37 = v71[0] != 0;
        *(_QWORD *)v2 = v11;
        *(_DWORD *)(v2 + 520) = (v37 ? 2 : 0) | *(_DWORD *)(v2 + 520) & 0xFFFFFFFD | 1;
        v38 = (_OWORD *)(v2 + 8);
        v39 = 4LL;
        do
        {
          *v38 = *v31;
          v38[1] = v31[1];
          v38[2] = v31[2];
          v38[3] = v31[3];
          v38[4] = v31[4];
          v38[5] = v31[5];
          v38[6] = v31[6];
          v38 += 8;
          v40 = v31[7];
          v31 += 8;
          *(v38 - 1) = v40;
          --v39;
        }
        while ( v39 );
        v16 = 524LL;
      }
      else
      {
        Status = -1073741823;
      }
    }
    goto LABEL_55;
  }
  Status = -1073741801;
  v16 = 0LL;
LABEL_36:
  if ( *((_BYTE *)v72 + 98) == 1 )
  {
    *(_QWORD *)(v22 + 80) = 0LL;
    *(_QWORD *)(v22 + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(v22 + 48) = 0LL;
    *(_QWORD *)(v22 + 56) = 0LL;
    *(_QWORD *)(v22 + 32) = 0LL;
  }
  ExFreePoolWithTag((PVOID)v22, 0x72536152u);
LABEL_60:
  v41 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v16;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = Status;
  if ( v41 )
    goto LABEL_124;
  v77 = 0LL;
  IoGetActivityIdIrp(a2, &v77);
  v43 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v43 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_124;
    v45 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_123;
  }
  if ( *(_BYTE *)v43 != 15 )
  {
    if ( *(_BYTE *)v43 != 27 )
      goto LABEL_124;
    if ( *(_BYTE *)(v43 + 1) == 7 && !*(_DWORD *)(v43 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v44 = *(int **)(a2 + 56);
        if ( v44 )
          v3 = *v44;
        LODWORD(v67) = *(_DWORD *)(a2 + 48);
        LODWORD(v66) = v3;
        sub_140056AB0(v42, v43, &v77, a2, v66, v67);
      }
      goto LABEL_124;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_124;
    v45 = &stru_140149FE8;
LABEL_123:
    LODWORD(v66) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v42, v45, &v77, a2, v66);
    goto LABEL_124;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_124;
  v46 = *(_QWORD *)(v43 + 8);
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( *(_BYTE *)(v46 + 2) != 40 )
  {
    v59 = *(_BYTE *)(v46 + 72);
    v48 = *(_BYTE **)(v46 + 32);
    v49 = *(_BYTE *)(v46 + 11);
    v47 = *(_BYTE *)(v46 + 4);
    if ( *(_BYTE *)(v46 + 2) )
      goto LABEL_124;
LABEL_102:
    LOBYTE(v42) = v59 - 8;
    if ( (v42 & 0x5D) != 0 )
      goto LABEL_124;
    if ( *(_BYTE *)(v46 + 3) == 1 || !v48 || !v49 )
      goto LABEL_119;
    v60 = 0;
    v42 = (unsigned __int64)&v48[v49];
    v61 = v48 + 8;
    if ( (unsigned __int8)((*v48 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v61 > v42 )
        goto LABEL_117;
      v51 = v48[2];
      v50 = v48[1] & 0xF;
      v52 = v48[3];
    }
    else
    {
      if ( (unsigned __int64)v61 > v42 )
        goto LABEL_117;
      v50 = v48[2] & 0xF;
      v62 = v49;
      if ( (unsigned int)(unsigned __int8)v48[7] + 8 <= v49 )
        v62 = (unsigned __int8)v48[7] + 8;
      v42 = (unsigned __int64)(v48 + 13);
      v63 = (unsigned __int64)&v48[v62];
      if ( (unsigned __int64)(v48 + 13) <= v63 )
        v51 = v48[12];
      if ( (unsigned __int64)(v48 + 14) <= v63 )
        v52 = *(_BYTE *)v42;
    }
    v60 = 1;
LABEL_117:
    if ( v60 )
    {
      LOBYTE(v3) = v51;
      v64 = v52;
LABEL_120:
      LOBYTE(v70) = v50;
      LOBYTE(v69) = v47;
      LOBYTE(v67) = *(_BYTE *)(v46 + 3);
      LODWORD(v66) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v42, v46, &v77, a2, v66, v67, v69, v70, v3, v64, a2);
      goto LABEL_124;
    }
LABEL_119:
    v50 = 0;
    v64 = 0;
    goto LABEL_120;
  }
  v53 = 0LL;
  v71[0] = 0;
  if ( *(_DWORD *)(v46 + 20) )
    goto LABEL_124;
  v54 = *(_DWORD *)(v46 + 56);
  v42 = 0LL;
  LODWORD(v72) = 0;
  LODWORD(Irp) = v54;
  if ( !v54 )
    goto LABEL_99;
  v55 = (unsigned int)Irp;
  v56 = (unsigned int *)(v46 + 120);
  Dst = (PVOID)(v46 + 120);
  while ( 1 )
  {
    v57 = *v56;
    if ( (unsigned int)v57 >= 0x80 )
    {
      v58 = *(unsigned int *)(v46 + 16);
      if ( (unsigned int)v57 < (unsigned int)v58 )
        break;
    }
LABEL_93:
    v42 = (unsigned int)(v42 + 1);
    v56 = (unsigned int *)((char *)Dst + 4);
    LODWORD(v72) = v42;
    Dst = (char *)Dst + 4;
    if ( (unsigned int)v42 >= v55 )
      goto LABEL_99;
  }
  if ( *(_DWORD *)(v57 + v46) != 64 )
  {
    v42 = (unsigned int)(*(_DWORD *)(v57 + v46) - 65);
    if ( *(_DWORD *)(v57 + v46) == 65 )
    {
      v42 = v57 + 56;
      if ( v57 + 56 <= v58 )
      {
        v71[0] = 1;
        if ( *(_BYTE *)(v57 + v46 + 10) )
          v53 = (char *)(v57 + v46 + 24);
        v47 = *(_BYTE *)(v57 + v46 + 8);
        v48 = *(_BYTE **)(v57 + v46 + 16);
        v49 = *(_BYTE *)(v57 + v46 + 9);
      }
    }
    else if ( *(_DWORD *)(v57 + v46) == 66 )
    {
      v42 = v57 + 40;
      if ( v57 + 40 <= v58 )
      {
        if ( *(_DWORD *)(v57 + v46 + 12) )
          v53 = (char *)(v57 + v46 + 32);
        v48 = *(_BYTE **)(v57 + v46 + 24);
        goto LABEL_98;
      }
    }
    goto LABEL_91;
  }
  v42 = v57 + 40;
  if ( v57 + 40 > v58 )
  {
LABEL_91:
    if ( v71[0] )
      goto LABEL_99;
    LODWORD(v42) = (_DWORD)v72;
    v55 = (unsigned int)Irp;
    goto LABEL_93;
  }
  if ( *(_BYTE *)(v57 + v46 + 10) )
    v53 = (char *)(v57 + v46 + 24);
  v48 = *(_BYTE **)(v57 + v46 + 16);
LABEL_98:
  v49 = *(_BYTE *)(v57 + v46 + 9);
  v47 = *(_BYTE *)(v57 + v46 + 8);
LABEL_99:
  if ( v53 )
  {
    v59 = *v53;
    goto LABEL_102;
  }
LABEL_124:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)Status;
}
