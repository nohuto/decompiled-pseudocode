/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x140444400
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     MiRescanPageFileBitmapPortion @ 0x140444C08 (MiRescanPageFileBitmapPortion.c)
 *     RtlLengthCurrentClearRunBackward @ 0x1404450B4 (RtlLengthCurrentClearRunBackward.c)
 */

char __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // r10
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  int v14; // eax
  int v15; // r15d
  unsigned __int64 v16; // r12
  char v17; // r11
  unsigned __int64 i; // rcx
  int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
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
  int v32; // esi
  unsigned __int64 v33; // r15
  _DWORD *v34; // r9
  unsigned __int64 v35; // rcx
  int v36; // ebx
  int v37; // r8d
  int v38; // r10d
  unsigned int v39; // edx
  __int64 v40; // rax
  char v41; // cl
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // r15d
  __int64 v45; // r8
  _DWORD *v46; // r11
  _DWORD *v47; // rax
  unsigned int v48; // r8d
  _DWORD *v49; // rcx
  int v50; // ebx
  unsigned int v51; // edx
  __int64 v52; // rax
  char v53; // cl
  bool v54; // zf
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // edx
  unsigned __int64 j; // rcx
  unsigned __int64 v60; // rax
  _QWORD *v61; // rdx
  _RTL_RB_TREE *v62; // rbp
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdi
  BOOLEAN v65; // r8
  int v66; // ecx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  char v70; // dl
  __int64 v71; // rcx
  unsigned int v72; // r8d
  __int64 v73; // rdx
  _DWORD *v74; // r9
  _DWORD *v75; // rax
  _DWORD *v76; // rcx
  unsigned int v77; // r10d
  __int64 v78; // rcx
  char v79; // dl
  unsigned int v80; // r8d
  _DWORD *v81; // rbx
  unsigned int v82; // r10d
  unsigned int v83; // edx
  _DWORD *v84; // r8
  unsigned __int64 v85; // rax
  int v86; // r12d
  __int64 v87; // rcx
  unsigned int v88; // edx
  unsigned __int64 *v89; // rcx
  unsigned int v90; // eax
  int v91; // eax
  __int64 v93; // [rsp+30h] [rbp-48h]
  __int64 v94; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v96; // [rsp+80h] [rbp+8h]
  int v97; // [rsp+80h] [rbp+8h]
  int *v98; // [rsp+98h] [rbp+20h]

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
  v93 = v6 + v9;
  v10 = *(_QWORD *)(a1 + 136);
  if ( !a2 )
    v7 = 8LL;
  v11 = (int *)(v7 + v6);
  v12 = 0LL;
  v98 = v11;
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
    v94 = v27;
    v19 = v28 - 1;
    v96 = v28 - 1;
    if ( v28 == (_DWORD)v5 )
    {
      if ( *(_DWORD *)(v16 + 48) == (_DWORD)v5 )
      {
        *(_DWORD *)(v27 + 52) = v26 + *(_DWORD *)(v16 + 52);
        *(_DWORD *)(v16 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)(v8 - 24));
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)v8);
        v89 = *(unsigned __int64 **)(a1 + 152);
        if ( *v89 != a1 + 144 )
          __fastfail(3u);
        v17 = -1;
        v19 = v96;
        v12 = v94 | 1;
        v11 = v98;
        *(_QWORD *)v16 = a1 + 144;
        *(_QWORD *)(v16 + 8) = v89;
        *v89 = v16;
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
      v43 = *(_QWORD *)(a1 + 120);
      if ( (v43 & 1) != 0 )
      {
        if ( v43 == 1 )
          v23 = 0LL;
        else
          v23 = v43 ^ ((a1 + 112) | 1);
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 120);
      }
    }
    v94 = v23;
    v25 = v5 - (v19 != 0) - v19 + v22;
    if ( *(_DWORD *)(v23 + 52) >= v25 || v25 < 0x20 )
      goto LABEL_29;
    if ( v22 )
    {
      v44 = v22 + 1;
      v45 = *((_QWORD *)v98 + 1);
      v46 = (_DWORD *)(v45 + 4 * (v5 >> 5));
      v47 = (_DWORD *)(v45 + 4 * ((unsigned __int64)(unsigned int)(*v98 - 1) >> 5));
      v48 = 0;
      v49 = v47 - 1;
      if ( (*v98 & 0x1F) == 0 )
        v49 = v47;
      v50 = v5 & 0x1F;
      v51 = *v46 & ~*((_DWORD *)qword_1400195D0 + (v5 & 0x1F));
      if ( v46 <= v49 )
      {
        while ( !v51 )
        {
          v48 += 32;
          if ( v48 >= v44 && v48 - v50 >= v44 )
            goto LABEL_159;
          if ( v46 == v49 )
            goto LABEL_57;
          v51 = v46[1];
          ++v46;
        }
        v17 = -1;
        v54 = !_BitScanForward64((unsigned __int64 *)&v78, v51);
        v79 = -1;
        if ( !v54 )
          v79 = v78;
        v48 += v79;
      }
      else
      {
LABEL_57:
        LODWORD(v52) = *v98;
        if ( (*v98 & 0x1F) != 0 )
        {
          if ( v48 )
            v51 = v46[1];
          v17 = -1;
          v54 = !_BitScanForward64(
                   (unsigned __int64 *)&v52,
                   v51 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_1400195D0 + (v52 & 0x1F)));
          v53 = -1;
          if ( !v54 )
            v53 = v52;
          v48 += v53;
        }
        else
        {
LABEL_159:
          v17 = -1;
        }
      }
      v80 = v48 - v50;
      if ( v80 > v44 )
        v80 = v44;
      v25 = v80 + v24;
      v22 = v80 - 1;
      if ( v80 + v24 < 0x20 || *(_DWORD *)(v23 + 52) >= v25 )
        goto LABEL_29;
    }
    if ( !v24 )
      goto LABEL_124;
    v81 = (_DWORD *)*((_QWORD *)v98 + 1);
    v82 = v24 + 1;
    v83 = 0;
    v84 = &v81[v5 >> 5];
    v85 = (unsigned int)(*v84 & *((_DWORD *)qword_1400195D0 + (v5 & 0x1F)));
    v86 = 31 - (v5 & 0x1F);
    while ( !(_DWORD)v85 )
    {
      v83 += 32;
      if ( v83 >= v82 && v83 - v86 >= v82 || v84 == v81 )
        goto LABEL_120;
      v85 = (unsigned int)*--v84;
    }
    v54 = !_BitScanReverse64((unsigned __int64 *)&v87, v85);
    if ( !v54 )
      v17 = v87;
    v83 += 31 - v17;
LABEL_120:
    v88 = v83 - v86;
    if ( v88 > v82 )
      v88 = v82;
    v25 = v88 + v22;
    v24 = v88 - 1;
    if ( v88 + v22 < 0x20 || *(_DWORD *)(v23 + 52) >= v25 )
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
      LOBYTE(v3) = MiRescanPageFileBitmapPortion(a1, v93, (unsigned int)v5 - v24, v25, (__int64)&v94);
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
      v90 = RtlLengthCurrentClearRunBackward(v11, (unsigned int)v5, 0xFFFFFFFFLL);
      if ( v90 > 1 )
      {
        v91 = RtlLengthCurrentClearRunBackward(v93, (unsigned int)v5, v90);
        *(_DWORD *)(v12 + 52) += v91 - 1;
        *(_DWORD *)(v12 + 48) = v5 - v91 + 1;
      }
    }
    else
    {
      v30 = *((_QWORD *)v11 + 1);
      v31 = *v11;
      v97 = *(_DWORD *)(v12 + 52);
      v32 = *v11 & 0x1F;
      v33 = 4 * ((unsigned __int64)(unsigned int)(v29 + v97 - 1) >> 5);
      v34 = (_DWORD *)(v33 + v30);
      v35 = v30 + 4 * ((unsigned __int64)(unsigned int)(*v11 - 1) >> 5) - 4;
      if ( !v32 )
        v35 = v30 + 4 * ((unsigned __int64)(unsigned int)(v31 - 1) >> 5);
      v36 = ((_BYTE)v29 + (_BYTE)v97 - 1) & 0x1F;
      v37 = 0;
      v38 = ~*((_DWORD *)qword_1400195D0 + (((_BYTE)v29 + (_BYTE)v97 - 1) & 0x1F));
      v39 = *v34 & v38;
      if ( (unsigned __int64)v34 <= v35 )
      {
        while ( !v39 )
        {
          v37 += 32;
          if ( v37 == -1 && v36 == 0 )
            goto LABEL_96;
          if ( v34 == (_DWORD *)v35 )
            goto LABEL_42;
          v39 = v34[1];
          ++v34;
        }
        v69 = v39;
        v70 = -1;
        v54 = !_BitScanForward64((unsigned __int64 *)&v71, v69);
        if ( !v54 )
          v70 = v71;
        v42 = v70;
LABEL_95:
        v37 += v42;
      }
      else
      {
LABEL_42:
        if ( v32 )
        {
          if ( v37 )
            v39 = v34[1];
          v54 = !_BitScanForward64(
                   (unsigned __int64 *)&v40,
                   v39 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_1400195D0 + (v31 & 0x1F)));
          v41 = -1;
          if ( !v54 )
            v41 = v40;
          v42 = v41;
          goto LABEL_95;
        }
      }
LABEL_96:
      v72 = v37 - v36;
      if ( v72 > 1 )
      {
        v73 = *(_QWORD *)(v93 + 8);
        v74 = (_DWORD *)(v33 + v73);
        v75 = (_DWORD *)(v73 + 4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)v93 - 1) >> 5));
        v57 = 0;
        v76 = v75 - 1;
        if ( (*(_DWORD *)v93 & 0x1F) == 0 )
          v76 = v75;
        v77 = *v74 & v38;
        if ( v74 <= v76 )
        {
          while ( !v77 )
          {
            v57 += 32;
            if ( v57 >= v72 && v57 - v36 >= v72 )
              goto LABEL_68;
            if ( v74 == v76 )
              goto LABEL_100;
            v77 = v74[1];
            ++v74;
          }
          v54 = !_BitScanForward64(&v55, v77);
          LOBYTE(v56) = v55;
LABEL_65:
          if ( !v54 )
            v17 = v56;
          v57 += v17;
        }
        else
        {
LABEL_100:
          if ( (*(_DWORD *)v93 & 0x1F) != 0 )
          {
            if ( v57 )
              v77 = v74[1];
            v54 = !_BitScanForward64(
                     (unsigned __int64 *)&v56,
                     v77 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_1400195D0 + (*(_DWORD *)v93 & 0x1F)));
            goto LABEL_65;
          }
        }
LABEL_68:
        v58 = v57 - v36;
        if ( v58 > v72 )
          v58 = v72;
        *(_DWORD *)(v12 + 52) = v58 + v97 - 1;
      }
    }
  }
  j = *(_QWORD *)(v12 + 8);
  v60 = v12;
  if ( j )
  {
    v61 = *(_QWORD **)j;
    if ( *(_QWORD *)j )
    {
      do
      {
        j = (unsigned __int64)v61;
        v61 = (_QWORD *)*v61;
      }
      while ( v61 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)j == v60 )
        break;
      v60 = j;
    }
  }
  LODWORD(v3) = *(_DWORD *)(v12 + 52);
  if ( *(_DWORD *)(j + 52) <= (unsigned int)v3 )
  {
    v62 = (_RTL_RB_TREE *)(a1 + 112);
    RtlRbRemoveNode(v62, (PRTL_BALANCED_NODE)v12);
    Min = v62->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( !v62->Root )
      {
        LOBYTE(v3) = RtlRbInsertNodeEx(v62, 0LL, 0, (PRTL_BALANCED_NODE)v12);
        return (char)v3;
      }
      Root = (unsigned __int64)v62->Root ^ (unsigned __int64)v62;
    }
    else
    {
      Root = (unsigned __int64)v62->Root;
    }
    v65 = 0;
    v66 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)(v12 + 48) < *(_QWORD *)(Root + 48) )
        {
          v67 = *(_QWORD *)Root;
          if ( v66 )
          {
            if ( !v67 )
              goto LABEL_91;
            v67 ^= Root;
          }
          if ( !v67 )
            goto LABEL_91;
          Root = v67;
        }
        v68 = *(_QWORD *)(Root + 8);
        if ( v66 )
        {
          if ( !v68 )
            break;
          v68 ^= Root;
        }
        if ( !v68 )
          break;
        Root = v68;
      }
      v65 = 1;
    }
LABEL_91:
    LOBYTE(v3) = RtlRbInsertNodeEx(v62, (PRTL_BALANCED_NODE)Root, v65, (PRTL_BALANCED_NODE)v12);
  }
  return (char)v3;
}
