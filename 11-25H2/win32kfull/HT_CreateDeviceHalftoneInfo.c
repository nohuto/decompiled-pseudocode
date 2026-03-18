/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1400FF514
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     GetCIEPrims @ 0x140100BA4 (GetCIEPrims.c)
 *     ComputeHTCell @ 0x140100DA8 (ComputeHTCell.c)
 *     ComputeChecksum @ 0x140101094 (ComputeChecksum.c)
 *     CleanUpDHI @ 0x140101648 (CleanUpDHI.c)
 *     MulFD6 @ 0x14013FA7C (MulFD6.c)
 *     RaisePower @ 0x14013FBB0 (RaisePower.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140140584 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x140141E5C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r13
  __int16 v9; // r15
  unsigned int v10; // r11d
  unsigned __int16 v11; // r14
  unsigned int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  int v15; // ecx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r9
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // r14
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // r8
  int v26; // ebx
  bool v27; // cc
  unsigned int v28; // r13d
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  __int64 result; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  unsigned int v37; // r8d
  unsigned __int64 v38; // xmm0_8
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // r10
  int v41; // ecx
  int v42; // r13d
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  __int64 v49; // xmm1_8
  unsigned int v50; // ecx
  int v51; // esi
  unsigned int v52; // r14d
  unsigned int v53; // r15d
  unsigned int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  __int64 v58; // rbx
  unsigned int v59; // edx
  unsigned int v60; // ebx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rcx
  __int16 v69; // ax
  __int64 v70; // rcx
  char v71; // [rsp+20h] [rbp-E0h]
  int v72; // [rsp+24h] [rbp-DCh]
  int v73; // [rsp+28h] [rbp-D8h]
  _DWORD v74[10]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v75; // [rsp+80h] [rbp-80h]
  _BYTE v76[4]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v77; // [rsp+94h] [rbp-6Ch]
  __int16 v78; // [rsp+96h] [rbp-6Ah]
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v84; // [rsp+C2h] [rbp-3Eh]
  unsigned __int16 v85; // [rsp+C4h] [rbp-3Ch]
  unsigned __int16 v86; // [rsp+C6h] [rbp-3Ah]
  __int128 v87; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v89; // [rsp+E0h] [rbp-20h]
  unsigned __int16 v90; // [rsp+E2h] [rbp-1Eh]
  unsigned __int16 v91; // [rsp+E4h] [rbp-1Ch]
  unsigned __int8 v92; // [rsp+E6h] [rbp-1Ah]
  _DWORD v93[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v94; // [rsp+100h] [rbp+0h]
  int v95; // [rsp+104h] [rbp+4h]
  int v96; // [rsp+108h] [rbp+8h] BYREF
  int v97; // [rsp+110h] [rbp+10h]
  int v98; // [rsp+114h] [rbp+14h]
  int v99; // [rsp+118h] [rbp+18h]
  int v100; // [rsp+11Ch] [rbp+1Ch]
  int v101; // [rsp+120h] [rbp+20h]
  int v102; // [rsp+124h] [rbp+24h]

  v75 = a2;
  v3 = 88LL;
  memset_0(v76, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v76, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v6 = 0LL;
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v7 = v79;
  v4[7] = v79;
  if ( !v7 )
    v4[7] = IsMulDestroyBrushInternalSupported;
  v8 = v82;
  v9 = v77 & 0x6FF;
  v77 &= 0x6FFu;
  *((_DWORD *)v4 + 16) = 305459218;
  if ( v8 && *(_WORD *)(v8 + 22) == 0xFFFE )
  {
    v72 = 0;
    v10 = 1;
  }
  else
  {
    qmemcpy(v93, "THTN0002.naDuohC", sizeof(v93));
    v72 = 1;
    v8 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum(v93, 305459218LL, 16LL);
  }
  v11 = v89;
  v12 = v86;
  v13 = v91;
  v14 = v90;
  if ( v89 == 0xFFFF && v90 == 0xFFFF && v91 == 0xFFFF )
  {
    v73 = 128;
LABEL_14:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_15;
  }
  v73 = v6;
  if ( (unsigned __int16)(v89 - 100) > 0xFF78u
    || (unsigned __int16)(v90 - 100) > 0xFF78u
    || (unsigned __int16)(v91 - 100) > 0xFF78u )
  {
    goto LABEL_14;
  }
LABEL_15:
  v15 = (unsigned __int16)(8 * (v10 & v9));
  v16 = v84;
  *((_DWORD *)v4 + 56) = v15;
  *((_WORD *)v4 + 114) = v16;
  if ( !v16 || (v17 = v85, *((_WORD *)v4 + 115) = v85, !v17) )
  {
    v16 = 300;
    *((_DWORD *)v4 + 57) = 19661100;
    v17 = 300;
    v12 = v6;
LABEL_49:
    if ( v12 > 3 * (unsigned int)v16 || v12 > 3 * (unsigned int)v17 || !v12 )
      goto LABEL_19;
    v34 = 2 * v12 * v12;
    v93[1] = v34;
    v35 = DivFD6(v17 * v17 + v16 * (unsigned int)v16, v34);
    v19 = RaisePower(v35, 2LL, 3LL);
    v15 = *((_DWORD *)v4 + 56);
    v6 = 0LL;
    v10 = 1;
    goto LABEL_20;
  }
  if ( (v12 & 0x8000) == 0 )
    goto LABEL_49;
  v18 = v12 & 0x7FFF;
  if ( (unsigned int)(v18 - 333) > 0x394B )
  {
LABEL_19:
    v19 = 1000000;
    goto LABEL_20;
  }
  v19 = 1000 * v18;
LABEL_20:
  if ( (v9 & 4) != 0 )
  {
    *((_BYTE *)v4 + 73) = v6;
    v20 = v15 | 2;
  }
  else
  {
    *((_BYTE *)v4 + 73) = v10;
    if ( (v9 & 0x80u) != 0 )
    {
      v15 |= 0x400u;
      *((_DWORD *)v4 + 56) = v15;
    }
    if ( (v9 & 2) == 0 )
      goto LABEL_23;
    v20 = v10 | v15;
  }
  *((_DWORD *)v4 + 56) = v20;
LABEL_23:
  *((_DWORD *)v4 + 58) = v19;
  v21 = v11;
  v22 = v78;
  *((_DWORD *)v4 + 46) = 100 * v21;
  *((_DWORD *)v4 + 47) = 100 * v14;
  *((_DWORD *)v4 + 48) = 100 * v13;
  if ( (v72 != (_DWORD)v6 || v22 > 0x12u || v22 == 18 && v80 == v6)
    && (unsigned __int16)(v22 - 6) > (unsigned __int16)v10 )
  {
    v22 = 17;
    v78 = 17;
  }
  if ( (v9 & 4) != 0 && v22 <= 3u )
  {
    v22 = 17;
    v78 = 17;
  }
  v23 = v77;
  v24 = v77 & 0x70;
  if ( (v77 & 0x70) == 0 )
    goto LABEL_53;
  switch ( v24 )
  {
    case ' ':
      v93[0] = 4;
      break;
    case '0':
      v93[0] = 2;
      break;
    case '@':
      v93[0] = 5;
      break;
    case 'P':
      v93[0] = v10;
      break;
    case '`':
      v93[0] = 6;
      break;
    case 'p':
      v93[0] = v6;
      break;
    default:
LABEL_53:
      v93[0] = 3;
      break;
  }
  *((_BYTE *)v4 + 74) = v93[0];
  GetCIEPrims(v8, v4 + 14, 4LL, v10);
  GetCIEPrims(v81, (char *)v4 + 76, v25, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    v36 = 0LL;
    v37 = 0;
    if ( v83 )
    {
      v38 = *(_QWORD *)v83;
      v37 = *(_DWORD *)(v83 + 8);
      v39 = v37;
      v36 = *(_QWORD *)v83;
      v40 = *(_QWORD *)v83;
      if ( v40 > 0x2328u
        || WORD1(v38) > 0x2328u
        || WORD2(v38) > 0x2328u
        || HIWORD(v38) > 0x2328u
        || (unsigned __int16)v37 > 0x2328u
        || HIWORD(v37) > 0x2328u )
      {
        v41 = 0;
      }
      else
      {
        v41 = 1;
        if ( !(_WORD)v38 && !WORD1(v38) && !WORD2(v38) && !HIWORD(v38) && !v37 )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v41 = 0;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
      v39 = 0;
      v40 = 0;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v72 || !v41 )
      {
        v37 = 13762880;
        v39 = 320;
        v40 = DefaultSolidDyesInfo;
        v36 = DefaultSolidDyesInfo;
      }
      v74[1] = 100 * WORD2(v36);
      v74[2] = 100 * v39;
      v74[3] = 100 * v40;
      v74[5] = 100 * HIWORD(v37);
      v74[6] = 100 * WORD1(v36);
      v74[7] = 100 * HIWORD(v36);
      v74[8] = 1000000;
      v74[4] = 1000000;
      v74[0] = 1000000;
      ComputeInverseMatrix3x3(v74, (char *)v4 + 148);
      v42 = *((_DWORD *)v4 + 56);
      if ( (v42 & 1) == 0 )
      {
        v97 = *((_DWORD *)v4 + 37);
        v99 = *((_DWORD *)v4 + 38);
        v101 = *((_DWORD *)v4 + 39);
        v96 = 3;
        v98 = 1000000;
        v100 = 1000000;
        v102 = 1000000;
        v43 = MulDivFD6Pairs(&v96);
        v44 = 1000000 - MulFD6((unsigned int)(1000000 - v43), *((unsigned int *)v4 + 114));
        v97 = *((_DWORD *)v4 + 40);
        v99 = *((_DWORD *)v4 + 41);
        v101 = *((_DWORD *)v4 + 42);
        v45 = MulDivFD6Pairs(&v96);
        v46 = v44 - MulFD6((unsigned int)(1000000 - v45), *((unsigned int *)v4 + 115));
        v97 = *((_DWORD *)v4 + 43);
        v99 = *((_DWORD *)v4 + 44);
        v101 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v42 | 1;
        v47 = MulDivFD6Pairs(&v96);
        v48 = MulFD6((unsigned int)(1000000 - v47), *((unsigned int *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((unsigned int *)v4 + 36), (unsigned int)(v46 - v48));
      }
    }
  }
  v26 = ComputeHTCell(v22, v80, v4 + 5);
  if ( v26 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v26;
  }
  else
  {
    v27 = WORD2(v87) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v27 && (_WORD)v87 == 24 && (*(_DWORD *)((char *)&v87 + 6) != 655370000 || WORD5(v87) != 10000) )
    {
      v49 = v88;
      *(_OWORD *)((char *)v4 + 12) = v87;
      *(_QWORD *)((char *)v4 + 28) = v49;
    }
    else
    {
      *(_OWORD *)((char *)v4 + 12) = DefaultCA;
      *(_QWORD *)((char *)v4 + 28) = 0LL;
    }
    if ( (v9 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v9 & 8) != 0 )
    {
      v50 = v92;
      v71 = v92;
      v51 = *((_DWORD *)v4 + 56) | (8 * (v23 & 0x400 | 0x20));
      v52 = v92 & 3;
      v53 = (v92 >> 2) & 7;
      *((_DWORD *)v4 + 56) = v51;
      v93[2] = v53;
      v28 = v50 >> 5;
      v93[3] = v52;
      if ( (_BYTE)v50 == 1 )
      {
        v71 = 124;
        v52 = 4;
        v93[3] = 4;
        v53 = 4;
        v93[2] = 4;
        v28 = 4;
      }
      else if ( (_BYTE)v50 == 2 )
      {
        v71 = -41;
        v52 = 5;
        v93[3] = 5;
        v53 = 5;
        v93[2] = 5;
        v28 = 5;
      }
      else if ( !v28 || !v53 || !v52 )
      {
        v51 |= 0x200u;
        v93[3] = 255;
        *((_DWORD *)v4 + 56) = v51;
        v52 = 255;
        v53 = 255;
        v93[2] = 255;
        v28 = 255;
        v71 = -1;
      }
      *((_BYTE *)v4 + 844) = (v51 & 0x2000) != 0;
      if ( v28 == v53 && v28 == v52 )
      {
        v51 |= 0x800u;
        *((_BYTE *)v4 + 493) = v28;
        *((_DWORD *)v4 + 56) = v51;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v54 = v28;
      if ( v28 < v53 )
        v54 = v53;
      if ( v54 < v52 )
        v54 = v52;
      v94 = v54;
      if ( v54 <= 6 && (v55 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v55 + 16) == 0xFFFE )
      {
        v56 = *((_QWORD *)Src + 4);
        *((_DWORD *)v4 + 56) = v51 | 0x4000;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v55 + 19) + 1, 256LL);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 18) + 1, 256LL);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 21) + 1, 256LL);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 20) + 1, 256LL);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 5) + 1, 256LL);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 4) + 1, 256LL);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 25) + 1, 256LL);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 24) + 1, 256LL);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 27) + 1, 256LL);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 26) + 1, 256LL);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 29) + 1, 256LL);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 28) + 1, 256LL);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 31) + 1, 256LL);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 30) + 1, 256LL);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 33) + 1, 256LL);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 32) + 1, 256LL);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v56 + 35) + 1, 256LL);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v56 + 34) + 1, 256LL);
        v57 = *(unsigned __int16 *)(v56 + 10);
        if ( (unsigned __int16)v57 < 0x2710u )
        {
          if ( (_WORD)v57 )
            *((_DWORD *)v4 + 128) = 100 * v57;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v58 = (unsigned int)DivFD6(1000000LL, *((unsigned int *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((unsigned int *)v4 + v28 + 128), v58);
        *((_DWORD *)v4 + 126) = MulFD6(*((unsigned int *)v4 + v53 + 134), (unsigned int)v58);
        *((_DWORD *)v4 + 127) = MulFD6(*((unsigned int *)v4 + v52 + 140), (unsigned int)v58);
        v59 = 6;
        do
        {
          if ( v59 >= v28 )
            *((_DWORD *)v4 + v59 + 128) = 1000000;
          if ( v59 >= v53 )
            *((_DWORD *)v4 + v59 + 134) = 1000000;
          if ( v59 >= v52 )
            *((_DWORD *)v4 + v59 + 140) = 1000000;
          --v59;
        }
        while ( v59 );
        v95 = 0;
      }
      else
      {
        v60 = *((_DWORD *)v4 + 58) * v54;
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v28, v60);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v53, v60);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v52, v60);
      }
      v61 = *((_DWORD *)v4 + 126);
      v62 = *((unsigned int *)v4 + 125);
      v63 = *((unsigned int *)v4 + 128);
      if ( (int)v62 < v61 )
        v62 = (unsigned int)v61;
      v64 = *((_DWORD *)v4 + 127);
      if ( (int)v62 < v64 )
        v62 = (unsigned int)v64;
      if ( (_DWORD)v63 == 0xFFFF )
      {
        if ( (_DWORD)v62 == 1000000 && (v4[28] & 0x800) != 0 )
          v63 = 0LL;
        else
          v63 = 666667LL;
        *((_DWORD *)v4 + 128) = v63;
      }
      if ( !(_DWORD)v63 )
      {
        if ( (_DWORD)v62 != 1000000 || (v63 = 0LL, (v4[28] & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v63 = 1000000LL;
        }
      }
      v65 = RaisePower(v63, v62, 0LL);
      v66 = *((unsigned int *)v4 + 125);
      *((_DWORD *)v4 + 128) = v65;
      v67 = MulFD6(v66, 4095LL);
      v68 = *((unsigned int *)v4 + 126);
      *((_WORD *)v4 + 247) = v67 + 1;
      v69 = MulFD6(v68, 4095LL);
      v70 = *((unsigned int *)v4 + 127);
      *((_WORD *)v4 + 248) = v69 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v70, 4095LL) + 1;
    }
    else
    {
      v71 = -1;
      v94 = 1;
      LOBYTE(v28) = 1;
      v93[3] = 1;
      v93[2] = 1;
    }
    v29 = *((unsigned __int16 *)v4 + 114);
    v30 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 489) = v93[2];
    *((_BYTE *)v4 + 490) = v93[3];
    *((_BYTE *)v4 + 491) = v94;
    *((_BYTE *)v4 + 492) = v71;
    v93[2] = *((_DWORD *)v4 + 58);
    v93[0] = v29;
    v93[1] = v30;
    v93[3] = v30 + v29;
    *((_BYTE *)v4 + 488) = v28;
    v31 = ComputeChecksum(v93, 2820218943LL, 16LL);
    v27 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v31;
    if ( !v27 )
      *((_BYTE *)v4 + 74) = 3;
    *((_DWORD *)v4 + 56) |= v73;
    result = 1414021956LL;
    v33 = v75;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *v33 = v4;
  }
  return result;
}
