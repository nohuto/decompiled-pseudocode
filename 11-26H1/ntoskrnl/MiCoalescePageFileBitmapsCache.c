/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x14044C2E0
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiFinishPageFileExtension @ 0x14050F0CC (MiFinishPageFileExtension.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     MiRescanPageFileBitmapPortion @ 0x14044CAE8 (MiRescanPageFileBitmapPortion.c)
 *     RtlLengthCurrentClearRunBackward @ 0x14044CF94 (RtlLengthCurrentClearRunBackward.c)
 */

char __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // r10
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r15d
  __int64 v16; // r12
  char v17; // r11
  unsigned __int64 i; // rcx
  int v19; // edx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // r9
  unsigned int v24; // r10d
  unsigned int v25; // ecx
  int v26; // r9d
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // r13d
  char v32; // r8
  int v33; // esi
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r9
  int v37; // edx
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // ebx
  int v41; // r10d
  int v42; // r8d
  int v43; // r10d
  unsigned int v44; // edx
  __int64 v45; // rax
  char v46; // cl
  int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // r15d
  __int64 v50; // r8
  _DWORD *v51; // r11
  _DWORD *v52; // rax
  unsigned int v53; // r8d
  _DWORD *v54; // rcx
  int v55; // ebx
  unsigned int v56; // edx
  __int64 v57; // rax
  char v58; // cl
  bool v59; // zf
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // edx
  unsigned int v63; // edx
  unsigned __int64 j; // rcx
  unsigned __int64 v65; // rax
  _QWORD *v66; // rdx
  unsigned __int64 v67; // rbp
  __int64 v68; // rax
  unsigned __int64 v69; // rdi
  bool v70; // r8
  int v71; // ecx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  char v75; // dl
  __int64 v76; // rcx
  unsigned int v77; // r8d
  __int64 v78; // rdx
  _DWORD *v79; // r9
  _DWORD *v80; // rax
  _DWORD *v81; // rcx
  unsigned int v82; // r10d
  __int64 v83; // rcx
  char v84; // dl
  unsigned int v85; // r8d
  _DWORD *v86; // rbx
  unsigned int v87; // r10d
  unsigned int v88; // edx
  _DWORD *v89; // r8
  unsigned __int64 v90; // rax
  int v91; // r12d
  __int64 v92; // rcx
  unsigned int v93; // edx
  __int64 *v94; // rcx
  unsigned int v95; // eax
  int v96; // eax
  __int64 v98; // [rsp+30h] [rbp-48h]
  __int64 v99; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v101; // [rsp+80h] [rbp+8h]
  int v102; // [rsp+80h] [rbp+8h]
  int *v103; // [rsp+98h] [rbp+20h]

  v3 = &retaddr;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 175) & 1) != 0 )
    return (char)v3;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 24LL;
  v8 = *(_QWORD *)(a1 + 128);
  v9 = 8LL;
  if ( !a2 )
    v9 = 24LL;
  v98 = v6 + v9;
  v10 = *(_QWORD *)(a1 + 136);
  if ( !a2 )
    v7 = 8LL;
  v11 = (int *)(v7 + v6);
  v12 = 0LL;
  v103 = v11;
  if ( (v10 & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 128;
    else
      v8 = 0LL;
  }
  v13 = 0LL;
  v14 = v10 & 1;
  while ( v8 )
  {
    if ( a3 > *(_DWORD *)(v8 + 24) )
    {
      v21 = *(_QWORD *)(v8 + 8);
      if ( !v14 || !v21 )
        goto LABEL_21;
      v8 ^= v21;
    }
    else
    {
      if ( a3 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_11;
      v21 = *(_QWORD *)v8;
      v13 = v8;
      if ( v14 && v21 )
        v8 ^= v21;
      else
LABEL_21:
        v8 = v21;
    }
  }
  v8 = v13;
LABEL_11:
  v15 = *(_DWORD *)(v8 + 24);
  v16 = v8 - 24;
  v17 = -1;
  if ( v15 == a3 + 1 && v15 != -1 )
  {
    ++*(_DWORD *)(v16 + 52);
    v12 = v8 - 24;
    *(_DWORD *)(v16 + 48) = a3;
  }
  i = *(_QWORD *)v8;
  v19 = 0;
  v20 = v8;
  if ( *(_QWORD *)v8 )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == v20 )
        break;
      v20 = i;
    }
  }
  if ( i )
  {
    v26 = *(_DWORD *)(i + 28);
    v27 = i - 24;
    v28 = v26 + *(_DWORD *)(i + 24);
    v99 = v27;
    v19 = v28 - 1;
    v101 = v28 - 1;
    if ( v28 == (_DWORD)v5 )
    {
      if ( *(_DWORD *)(v16 + 48) == (_DWORD)v5 )
      {
        *(_DWORD *)(v27 + 52) = v26 + *(_DWORD *)(v16 + 52);
        *(_DWORD *)(v16 + 52) = 0;
        RtlRbRemoveNode(a1 + 112, v8 - 24);
        RtlRbRemoveNode(a1 + 128, v8);
        v94 = *(__int64 **)(a1 + 152);
        if ( *v94 != a1 + 144 )
          __fastfail(3u);
        v17 = -1;
        v19 = v101;
        v12 = v99 | 1;
        v11 = v103;
        *(_QWORD *)v16 = a1 + 144;
        *(_QWORD *)(v16 + 8) = v94;
        *v94 = v16;
        *(_QWORD *)(a1 + 152) = v16;
      }
      else
      {
        v12 = v27;
        *(_DWORD *)(v27 + 52) = v26 + 1;
      }
    }
  }
  if ( !v12 )
  {
    v22 = v15 - ((v15 != -1) + 1) - v5;
    v23 = *(_QWORD *)(a1 + 144);
    v24 = v5 - ((v19 != 0) + 1) - v19;
    if ( v23 == a1 + 144 )
    {
      v48 = *(_QWORD *)(a1 + 120);
      if ( (v48 & 1) != 0 )
      {
        if ( v48 == 1 )
          v23 = 0LL;
        else
          v23 = v48 ^ ((a1 + 112) | 1);
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 120);
      }
    }
    v99 = v23;
    v25 = v5 - (v19 != 0) - v19 + v22;
    if ( *(_DWORD *)(v23 + 52) >= v25 || v25 < 0x20 )
      goto LABEL_29;
    if ( v22 )
    {
      v49 = v22 + 1;
      v50 = *((_QWORD *)v103 + 1);
      v51 = (_DWORD *)(v50 + 4 * (v5 >> 5));
      v52 = (_DWORD *)(v50 + 4 * ((unsigned __int64)(unsigned int)(*v103 - 1) >> 5));
      v53 = 0;
      v54 = v52 - 1;
      if ( (*v103 & 0x1F) == 0 )
        v54 = v52;
      v55 = v5 & 0x1F;
      v56 = *v51 & ~*((_DWORD *)qword_140019C60 + (v5 & 0x1F));
      if ( v51 <= v54 )
      {
        while ( !v56 )
        {
          v53 += 32;
          if ( v53 >= v49 && v53 - v55 >= v49 )
            goto LABEL_159;
          if ( v51 == v54 )
            goto LABEL_57;
          v56 = v51[1];
          ++v51;
        }
        v17 = -1;
        v59 = !_BitScanForward64((unsigned __int64 *)&v83, v56);
        v84 = -1;
        if ( !v59 )
          v84 = v83;
        v53 += v84;
      }
      else
      {
LABEL_57:
        LODWORD(v57) = *v103;
        if ( (*v103 & 0x1F) != 0 )
        {
          if ( v53 )
            v56 = v51[1];
          v17 = -1;
          v59 = !_BitScanForward64(
                   (unsigned __int64 *)&v57,
                   v56 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_140019C60 + (v57 & 0x1F)));
          v58 = -1;
          if ( !v59 )
            v58 = v57;
          v53 += v58;
        }
        else
        {
LABEL_159:
          v17 = -1;
        }
      }
      v85 = v53 - v55;
      if ( v85 > v49 )
        v85 = v49;
      v25 = v85 + v24;
      v22 = v85 - 1;
      if ( v85 + v24 < 0x20 || *(_DWORD *)(v23 + 52) >= v25 )
        goto LABEL_29;
    }
    if ( !v24 )
      goto LABEL_124;
    v86 = (_DWORD *)*((_QWORD *)v103 + 1);
    v87 = v24 + 1;
    v88 = 0;
    v89 = &v86[v5 >> 5];
    v90 = (unsigned int)(*v89 & *((_DWORD *)qword_140019C60 + (v5 & 0x1F)));
    v91 = 31 - (v5 & 0x1F);
    while ( !(_DWORD)v90 )
    {
      v88 += 32;
      if ( v88 >= v87 && v88 - v91 >= v87 || v89 == v86 )
        goto LABEL_120;
      v90 = (unsigned int)*--v89;
    }
    v59 = !_BitScanReverse64((unsigned __int64 *)&v92, v90);
    if ( !v59 )
      v17 = v92;
    v88 += 31 - v17;
LABEL_120:
    v93 = v88 - v91;
    if ( v93 > v87 )
      v93 = v87;
    v25 = v93 + v22;
    v24 = v93 - 1;
    if ( v93 + v22 < 0x20 || *(_DWORD *)(v23 + 52) >= v25 )
    {
LABEL_29:
      LODWORD(v3) = *(_DWORD *)(a1 + 108);
      if ( (unsigned int)v3 > v25 )
        v25 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 108) = v25;
    }
    else
    {
LABEL_124:
      LOBYTE(v3) = MiRescanPageFileBitmapPortion(a1, v98, (unsigned int)v5 - v24, v25, (__int64)&v99);
    }
    return (char)v3;
  }
  if ( (v12 & 1) != 0 )
  {
    v12 &= ~1uLL;
  }
  else
  {
    v29 = *(_DWORD *)(v12 + 48);
    if ( v29 == (_DWORD)v5 )
    {
      v95 = RtlLengthCurrentClearRunBackward(v11, (unsigned int)v5, 0xFFFFFFFFLL);
      if ( v95 > 1 )
      {
        v96 = RtlLengthCurrentClearRunBackward(v98, (unsigned int)v5, v95);
        *(_DWORD *)(v12 + 52) += v96 - 1;
        *(_DWORD *)(v12 + 48) = v5 - v96 + 1;
      }
    }
    else
    {
      v30 = *((_QWORD *)v11 + 1);
      v31 = *v11;
      v102 = *(_DWORD *)(v12 + 52);
      v32 = v29 + v102 - 1;
      v33 = *v11 & 0x1F;
      v34 = 4 * ((unsigned __int64)(unsigned int)(v29 + v102 - 1) >> 5);
      v35 = v30 + 4 * ((unsigned __int64)(unsigned int)(*v11 - 1) >> 5);
      v36 = v34 + v30;
      v37 = *(_DWORD *)(v34 + v30);
      v38 = v35 - 4;
      if ( !v33 )
        v38 = v35;
      v39 = v32 & 0x1F;
      v40 = v39;
      v41 = *((_DWORD *)qword_140019C60 + v39);
      v42 = 0;
      v43 = ~v41;
      v44 = v43 & v37;
      if ( v36 <= v38 )
      {
        while ( !v44 )
        {
          v42 += 32;
          if ( v42 == -1 && v40 == 0 )
            goto LABEL_96;
          if ( v36 == v38 )
            goto LABEL_42;
          v44 = *(_DWORD *)(v36 + 4);
          v36 += 4LL;
        }
        v74 = v44;
        v75 = -1;
        v59 = !_BitScanForward64((unsigned __int64 *)&v76, v74);
        if ( !v59 )
          v75 = v76;
        v47 = v75;
LABEL_95:
        v42 += v47;
      }
      else
      {
LABEL_42:
        if ( v33 )
        {
          if ( v42 )
            v44 = *(_DWORD *)(v36 + 4);
          v59 = !_BitScanForward64(
                   (unsigned __int64 *)&v45,
                   v44 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_140019C60 + (v31 & 0x1F)));
          v46 = -1;
          if ( !v59 )
            v46 = v45;
          v47 = v46;
          goto LABEL_95;
        }
      }
LABEL_96:
      v77 = v42 - v40;
      if ( v77 > 1 )
      {
        v78 = *(_QWORD *)(v98 + 8);
        v79 = (_DWORD *)(v34 + v78);
        v80 = (_DWORD *)(v78 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)v98 - 1) >> 5));
        v62 = 0;
        v81 = v80 - 1;
        if ( (*(_DWORD *)v98 & 0x1F) == 0 )
          v81 = v80;
        v82 = *v79 & v43;
        if ( v79 <= v81 )
        {
          while ( !v82 )
          {
            v62 += 32;
            if ( v62 >= v77 && v62 - v40 >= v77 )
              goto LABEL_68;
            if ( v79 == v81 )
              goto LABEL_100;
            v82 = v79[1];
            ++v79;
          }
          v59 = !_BitScanForward64(&v60, v82);
          LOBYTE(v61) = v60;
LABEL_65:
          if ( !v59 )
            v17 = v61;
          v62 += v17;
        }
        else
        {
LABEL_100:
          if ( (*(_DWORD *)v98 & 0x1F) != 0 )
          {
            if ( v62 )
              v82 = v79[1];
            v59 = !_BitScanForward64(
                     (unsigned __int64 *)&v61,
                     v82 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_140019C60 + (*(_DWORD *)v98 & 0x1F)));
            goto LABEL_65;
          }
        }
LABEL_68:
        v63 = v62 - v40;
        if ( v63 > v77 )
          v63 = v77;
        *(_DWORD *)(v12 + 52) = v63 + v102 - 1;
      }
    }
  }
  j = *(_QWORD *)(v12 + 8);
  v65 = v12;
  if ( j )
  {
    v66 = *(_QWORD **)j;
    if ( *(_QWORD *)j )
    {
      do
      {
        j = (unsigned __int64)v66;
        v66 = (_QWORD *)*v66;
      }
      while ( v66 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)j == v65 )
        break;
      v65 = j;
    }
  }
  LODWORD(v3) = *(_DWORD *)(v12 + 52);
  if ( *(_DWORD *)(j + 52) <= (unsigned int)v3 )
  {
    v67 = a1 + 112;
    RtlRbRemoveNode(v67, v12);
    v68 = *(_QWORD *)(v67 + 8);
    if ( (v68 & 1) != 0 )
    {
      if ( !*(_QWORD *)v67 )
      {
        LOBYTE(v3) = RtlRbInsertNodeEx(v67, 0LL, 0, v12);
        return (char)v3;
      }
      v69 = *(_QWORD *)v67 ^ v67;
    }
    else
    {
      v69 = *(_QWORD *)v67;
    }
    v70 = 0;
    v71 = v68 & 1;
    if ( v69 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)(v12 + 48) < *(_QWORD *)(v69 + 48) )
        {
          v72 = *(_QWORD *)v69;
          if ( v71 )
          {
            if ( !v72 )
              goto LABEL_91;
            v72 ^= v69;
          }
          if ( !v72 )
            goto LABEL_91;
          v69 = v72;
        }
        v73 = *(_QWORD *)(v69 + 8);
        if ( v71 )
        {
          if ( !v73 )
            break;
          v73 ^= v69;
        }
        if ( !v73 )
          break;
        v69 = v73;
      }
      v70 = 1;
    }
LABEL_91:
    LOBYTE(v3) = RtlRbInsertNodeEx(v67, v69, v70, v12);
  }
  return (char)v3;
}
