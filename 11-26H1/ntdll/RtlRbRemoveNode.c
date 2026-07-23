/*
 * XREFs of RtlRbRemoveNode @ 0x18008BD00
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x18006FD20 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18008B350 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18008D798 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800EC12C (RtlpHpVsFreeChunkRemove.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D2F0 (EtwpRemoveGuidEntryFromTable.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     RtlRemovePointerMapping @ 0x180145C90 (RtlRemovePointerMapping.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x1801416C8 (RtlpRbReportFatalError.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  signed __int64 v2; // rbx
  $7D93978C745EB1C2D28075BAF55422B4 v4; // cl
  PRTL_BALANCED_NODE v5; // r12
  char v6; // al
  unsigned __int64 v7; // r14
  _RTL_BALANCED_NODE *v8; // rdi
  char v9; // cl
  unsigned __int64 v10; // r15
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *v12; // rax
  unsigned __int64 v13; // rcx
  _RTL_BALANCED_NODE *Min; // rcx
  _RTL_BALANCED_NODE *v15; // rax
  _RTL_BALANCED_NODE *v16; // rax
  char v17; // al
  char v18; // al
  $424C8BBEF8F6C852886B4C6E806B5DB0 v19; // r8
  char v20; // r8
  _RTL_BALANCED_NODE *v21; // rcx
  BOOL v22; // r13d
  unsigned __int64 v23; // rcx
  _RTL_BALANCED_NODE *v24; // r12
  unsigned __int64 v25; // rbx
  $7D93978C745EB1C2D28075BAF55422B4 v26; // al
  $7D93978C745EB1C2D28075BAF55422B4 v27; // dl
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  int v30; // r15d
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  _RTL_BALANCED_NODE *v39; // rcx
  unsigned __int64 v40; // rcx
  _RTL_BALANCED_NODE *v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rcx
  $424C8BBEF8F6C852886B4C6E806B5DB0 v45; // al
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  _RTL_BALANCED_NODE *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  char v58; // al
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  unsigned __int64 Root; // rcx
  unsigned __int64 v62; // rax
  _RTL_BALANCED_NODE *v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  char v69; // al
  char v70; // dl
  unsigned __int64 v71; // rax
  __int64 v72; // r13
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  char v77; // dl
  unsigned __int64 v78; // r14
  _BOOL8 v79; // r13
  unsigned __int64 v80; // rcx
  int v81; // r12d
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  _RTL_BALANCED_NODE *v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // r15
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  int v95; // r15d
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r14
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r14
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rcx
  _RTL_BALANCED_NODE *v104; // rcx
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v107; // al
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  signed __int64 v112; // rax
  _RTL_BALANCED_NODE *v113; // rax
  __int64 v114; // rax
  char v115; // al
  unsigned __int64 v116; // rax
  __int128 v117; // rax
  unsigned int v118; // [rsp+78h] [rbp+50h]
  unsigned __int64 v119; // [rsp+80h] [rbp+58h]
  unsigned __int64 v120; // [rsp+80h] [rbp+58h]

  v2 = (signed __int64)Node->Children[0];
  v4 = Tree->0;
  v5 = Node;
  v6 = *(_BYTE *)&v4 & 1;
  if ( (*(_BYTE *)&v4 & 1) != 0 && v2 )
    v2 ^= (unsigned __int64)Node;
  v7 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v4 & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)Node;
  if ( v2 )
  {
    if ( !v7 )
      goto LABEL_6;
    v48 = *(_QWORD *)v7;
    v118 = 1;
    v10 = v7;
    v8 = (_RTL_BALANCED_NODE *)v7;
    if ( *(_QWORD *)v7 )
    {
      v118 = 0;
      do
      {
        v8 = (_RTL_BALANCED_NODE *)v10;
        if ( (*(_BYTE *)&v4 & 1) != 0 && v48 )
          v10 ^= v48;
        else
          v10 = v48;
        v48 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    v49 = (_RTL_BALANCED_NODE *)v2;
    if ( (*(_BYTE *)&v4 & 1) != 0 )
      v49 = (_RTL_BALANCED_NODE *)(v10 ^ v2);
    *(_QWORD *)v10 = v49;
    v50 = *(_QWORD *)(v2 + 16);
    v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v51 )
      v51 ^= v2;
    if ( (PRTL_BALANCED_NODE)v51 != v5 )
      RtlpRbReportFatalError(v51, v5);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v52 = v10 ^ v2;
    else
      v52 = v10;
    *(_QWORD *)(v2 + 16) = v52 | v50 & 3;
    v53 = *(_QWORD *)(v7 + 16);
    v54 = v53 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v54 )
      v54 ^= v7;
    if ( (PRTL_BALANCED_NODE)v54 != v5 )
      RtlpRbReportFatalError(v54, v5);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v55 = v10 ^ v7;
    else
      v55 = v10;
    *(_QWORD *)(v7 + 16) = v55 | v53 & 3;
    v2 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v2 )
    {
      v2 ^= v10;
    }
    else if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    {
LABEL_98:
      v56 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v10 + 8) = v7;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v56 )
        v56 ^= v10;
      if ( (_RTL_BALANCED_NODE *)v56 != v8 && (v56 || v8 != (_RTL_BALANCED_NODE *)v10) )
        RtlpRbReportFatalError(v56, v8);
      v57 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v19 = *($424C8BBEF8F6C852886B4C6E806B5DB0 *)(v10 + 16);
      v58 = *(_BYTE *)&Tree->0 & 1;
      if ( v58 && v57 )
      {
        v57 ^= (unsigned __int64)v5;
      }
      else if ( !v58 )
      {
        goto LABEL_105;
      }
      if ( v57 )
        v57 ^= v10;
LABEL_105:
      v59 = v57 | *(_DWORD *)(v10 + 16) & 3;
      *(_QWORD *)(v10 + 16) = v59;
      *(_BYTE *)(v10 + 16) ^= (*(_BYTE *)&v5->0 ^ v59) & 1;
      v60 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v60 )
      {
        v70 = *(_BYTE *)&Tree->0 & 1;
        if ( v70 )
          v60 ^= (unsigned __int64)v5;
        v71 = *(_QWORD *)(v60 + 8);
        if ( v70 && v71 )
          v71 ^= v60;
        v72 = 0LL;
        if ( (PRTL_BALANCED_NODE)v71 == v5 )
          v72 = 8LL;
        v73 = *(_QWORD *)(v60 + v72);
        if ( v70 && v73 )
          v73 ^= v60;
        if ( (PRTL_BALANCED_NODE)v73 != v5 )
          RtlpRbReportFatalError(v73, v5);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v110 = v10 ^ v60;
        else
          v74 = v10;
        *(_QWORD *)(v60 + v72) = v75;
        goto LABEL_20;
      }
      Root = (unsigned __int64)Tree->Root;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Root )
          goto LABEL_108;
        Root ^= (unsigned __int64)Tree;
      }
      if ( (PRTL_BALANCED_NODE)Root == v5 )
      {
        v62 = v10;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v116 = (unsigned __int64)Tree ^ v10;
        Tree->Root = v63;
        goto LABEL_20;
      }
LABEL_108:
      RtlpRbReportFatalError(Root, v5);
    }
    v7 ^= v10;
    goto LABEL_98;
  }
  v2 = v7;
LABEL_6:
  v8 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v9 = *(_BYTE *)&v4 & 1;
  if ( v9 && v8 )
    v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v8);
  v10 = (unsigned __int64)Node;
  if ( !v8 )
  {
    if ( v2 )
      *(_QWORD *)(v2 + 16) = 0LL;
    v64 = (unsigned __int64)Tree->Root;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !v64 )
        goto LABEL_117;
      v64 ^= (unsigned __int64)Tree;
    }
    if ( (PRTL_BALANCED_NODE)v64 == Node )
    {
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        v114 = -v2;
        Tree->Min = (_RTL_BALANCED_NODE *)(((unsigned __int64)Tree ^ v2) & -(__int64)(v2 != 0));
        *(_BYTE *)&Tree->0 |= 1u;
      }
      else
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v2;
      }
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        v115 = (unsigned __int8)Tree ^ v2;
        v2 = ((unsigned __int64)Tree ^ v2) & -(__int64)(v2 != 0);
      }
      Tree->Root = (_RTL_BALANCED_NODE *)v2;
      return;
    }
LABEL_117:
    RtlpRbReportFatalError(v64, Node);
  }
  v11 = v8->Children[1];
  if ( v9 && v66 )
    v68 = (unsigned __int64)v8 ^ v67;
  if ( v12 == Node )
  {
    v118 = 1;
    goto LABEL_19;
  }
  v13 = (unsigned __int64)v8->Children[0];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v8;
  if ( (PRTL_BALANCED_NODE)v13 != Node )
    RtlpRbReportFatalError(v13, Node);
  Min = Tree->Min;
  v118 = 0;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      goto LABEL_19;
    v65 = (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
  }
  else
  {
    v15 = Tree->Min;
  }
  if ( v16 == Node )
  {
    v17 = *(_BYTE *)&Tree->0 & 1;
    if ( v2 )
    {
      if ( !v18 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v2;
        goto LABEL_19;
      }
      v112 = v2;
    }
    else
    {
      if ( !v69 )
      {
        Tree->Min = v8;
        goto LABEL_19;
      }
      v112 = (signed __int64)v8;
    }
    v113 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v112);
    Tree->Min = v113;
    *(_BYTE *)&Tree->0 |= 1u;
  }
LABEL_19:
  v19 = Node->0;
LABEL_20:
  v20 = *(_BYTE *)&v19 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v2 )
    v21 = (_RTL_BALANCED_NODE *)(v2 ^ (unsigned __int64)v8);
  else
    v21 = (_RTL_BALANCED_NODE *)v2;
  v22 = v118;
  v8->Children[v118] = v21;
  if ( v2 )
  {
    v23 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v23 )
      v23 ^= v2;
    if ( v23 != v10 )
      RtlpRbReportFatalError(v23, v10);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( v8 )
        v8 = (_RTL_BALANCED_NODE *)(v2 ^ (unsigned __int64)v8);
    }
    *(_QWORD *)(v2 + 16) = v8;
    return;
  }
  if ( v20 )
    return;
  while ( 1 )
  {
    v24 = v8;
    v25 = (unsigned __int64)v8->Children[!v22];
    v26 = Tree->0;
    if ( (*(_BYTE *)&v26 & 1) != 0 && v25 )
      v25 ^= (unsigned __int64)v8;
    v27 = Tree->0;
    if ( (*(_BYTE *)(v25 + 16) & 1) != 0 )
    {
      v28 = (unsigned __int64)Tree->Root;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v28 )
        v28 ^= (unsigned __int64)Tree;
      v119 = v28;
      v29 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v30 = *(_BYTE *)&v26 & 1;
      if ( (*(_BYTE *)&v26 & 1) != 0 && v29 )
        v29 ^= v25;
      if ( (_RTL_BALANCED_NODE *)v29 != v8 )
        RtlpRbReportFatalError(v29, v8);
      v31 = (unsigned __int64)v8->Children[!v22];
      if ( (*(_BYTE *)&v26 & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)v8;
      if ( v31 != v25 )
        RtlpRbReportFatalError(v31, v25);
      v32 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&v26 & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_245;
        v32 ^= (unsigned __int64)v8;
      }
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8);
        if ( v30 && v33 )
          v33 ^= v32;
        if ( (_RTL_BALANCED_NODE *)v33 == v8 )
        {
          if ( v30 )
            v106 = v25 ^ v32;
          else
            v106 = v25;
          *(_QWORD *)(v32 + 8) = v106;
        }
        else
        {
          v34 = *(_QWORD *)v32;
          if ( v30 && v34 )
            v34 ^= v32;
          if ( (_RTL_BALANCED_NODE *)v34 != v8 )
            RtlpRbReportFatalError(v34, v8);
          if ( v30 )
            v35 = v25 ^ v32;
          else
            v35 = v25;
          *(_QWORD *)v32 = v35;
        }
        goto LABEL_49;
      }
LABEL_245:
      if ( (_RTL_BALANCED_NODE *)v28 != v8 )
        RtlpRbReportFatalError(v28, v8);
      v119 = v25;
LABEL_49:
      if ( v30 && v32 )
        v32 ^= v25;
      *(_QWORD *)(v25 + 16) = v32 | *(_DWORD *)(v25 + 16) & 3;
      v36 = *(_QWORD *)(v25 + 8LL * v22);
      if ( v30 )
      {
        if ( !v36 )
        {
LABEL_60:
          if ( v30 && v36 )
            v36 ^= (unsigned __int64)v8;
          v8->Children[!v22] = (_RTL_BALANCED_NODE *)v36;
          if ( v30 )
            v39 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v25);
          else
            v39 = v8;
          *(_QWORD *)(v25 + 8LL * v22) = v39;
          v40 = v25;
          if ( v30 )
            v40 = (unsigned __int64)v8 ^ v25;
          v8->ParentValue = v40 | *(_DWORD *)&v8->0 & 3;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v41 = (_RTL_BALANCED_NODE *)((v119 ^ (unsigned __int64)Tree) & ((unsigned __int128)-(__int128)v119 >> 64));
          else
            v41 = (_RTL_BALANCED_NODE *)v119;
          Tree->Root = v41;
          *(_BYTE *)(v25 + 16) &= ~1u;
          *(_BYTE *)&v8->0 |= 1u;
          v27 = Tree->0;
          v25 = (unsigned __int64)v8->Children[!v22];
          if ( (*(_BYTE *)&v27 & 1) != 0 && v25 )
            v25 ^= (unsigned __int64)v8;
          v26 = Tree->0;
          goto LABEL_69;
        }
        v36 ^= v25;
      }
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v30 && v37 )
          v37 ^= v36;
        if ( v37 != v25 )
          RtlpRbReportFatalError(v37, v25);
        if ( v30 )
          v38 = (unsigned __int64)v8 ^ v36;
        else
          v38 = (unsigned __int64)v8;
        *(_QWORD *)(v36 + 16) = v38 | *(_DWORD *)(v36 + 16) & 3;
      }
      goto LABEL_60;
    }
LABEL_69:
    v42 = *(_QWORD *)v25;
    v43 = *(_BYTE *)&v26 & 1;
    if ( *(_QWORD *)v25 )
    {
      if ( v43 )
        v42 ^= v25;
      if ( (*(_BYTE *)(v42 + 16) & 1) != 0 )
        break;
    }
    v44 = *(_QWORD *)(v25 + 8);
    if ( v44 )
    {
      if ( v43 )
        v44 ^= v25;
      if ( (*(_BYTE *)(v44 + 16) & 1) != 0 )
        break;
    }
    v45 = v8->0;
    if ( (*(_BYTE *)&v45 & 1) != 0 )
    {
      v107 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(*(_BYTE *)&v45 & 0xFE);
      v8->0 = v107;
      *(_BYTE *)(v25 + 16) |= 1u;
      return;
    }
    *(_BYTE *)(v25 + 16) |= 1u;
    v46 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v108 )
      v8 = (_RTL_BALANCED_NODE *)(v109 ^ (unsigned __int64)v8);
    else
      v8 = (_RTL_BALANCED_NODE *)(v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v8 )
      return;
    v47 = (unsigned __int64)v8->Children[1];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v47 )
      v47 ^= (unsigned __int64)v8;
    v22 = v47 == (_QWORD)v24;
    v118 = v22;
  }
  v76 = *(_QWORD *)(v25 + 8 * !v22);
  v77 = *(_BYTE *)&v27 & 1;
  if ( v77 )
  {
    if ( v76 )
    {
      v76 ^= v25;
      goto LABEL_163;
    }
LABEL_165:
    v78 = *(_QWORD *)(v25 + 8LL * v22);
    if ( v77 && v78 )
      v78 ^= v25;
    *(_BYTE *)(v78 + 16) &= ~1u;
    v79 = !v22;
    v80 = *(_QWORD *)(v78 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v81 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v80 )
      v80 ^= v78;
    if ( v80 != v25 )
      RtlpRbReportFatalError(v80, v25);
    v82 = *(_QWORD *)(v25 + 8 * !v79);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v82 )
      v82 ^= v25;
    if ( v82 != v78 )
      RtlpRbReportFatalError(v82, v78);
    v83 = (unsigned __int64)v8->Children[v79];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v83 )
      v83 ^= (unsigned __int64)v8;
    if ( v83 != v25 )
      RtlpRbReportFatalError(v83, v25);
    v84 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v84 )
      v84 ^= v25;
    if ( (_RTL_BALANCED_NODE *)v84 != v8 )
      RtlpRbReportFatalError(v84, v8);
    v85 = (_RTL_BALANCED_NODE *)v78;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v85 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v78);
    v8->Children[v79] = v85;
    if ( v81 && v8 )
      v86 = (unsigned __int64)v8 ^ v78;
    else
      v86 = (unsigned __int64)v8;
    *(_QWORD *)(v78 + 16) = v86 | *(_DWORD *)(v78 + 16) & 3;
    v87 = *(_QWORD *)(v78 + 8 * v79);
    if ( v81 )
    {
      if ( !v87 )
      {
LABEL_192:
        if ( v81 && v87 )
          v87 ^= v25;
        *(_QWORD *)(v25 + 8 * !v79) = v87;
        if ( v81 )
          v90 = v25 ^ v78;
        else
          v90 = v25;
        *(_QWORD *)(v78 + 8 * v79) = v90;
        v91 = v78;
        if ( v81 )
          v91 = v25 ^ v78;
        v22 = v118;
        v92 = v91 | *(_DWORD *)(v25 + 16) & 3;
        v76 = v25;
        *(_QWORD *)(v25 + 16) = v92;
        v25 = v78;
        goto LABEL_198;
      }
      v87 ^= v78;
    }
    if ( v87 )
    {
      v88 = *(_QWORD *)(v87 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v81 && v88 )
        v88 ^= v87;
      if ( v88 != v78 )
        RtlpRbReportFatalError(v88, v78);
      if ( v81 )
        v89 = v25 ^ v87;
      else
        v89 = v25;
      *(_QWORD *)(v87 + 16) = v89 | *(_DWORD *)(v87 + 16) & 3;
    }
    goto LABEL_192;
  }
LABEL_163:
  if ( !v76 || (*(_BYTE *)(v76 + 16) & 1) == 0 )
    goto LABEL_165;
LABEL_198:
  *(_BYTE *)(v25 + 16) ^= (*(_BYTE *)&v8->0 ^ *(_BYTE *)(v25 + 16)) & 1;
  *(_BYTE *)&v8->0 &= ~1u;
  *(_BYTE *)(v76 + 16) &= ~1u;
  v93 = (unsigned __int64)Tree->Root;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v93 )
    v93 ^= (unsigned __int64)Tree;
  v120 = v93;
  v94 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v95 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v94 )
    v94 ^= v25;
  if ( (_RTL_BALANCED_NODE *)v94 != v8 )
    RtlpRbReportFatalError(v94, v8);
  v96 = (unsigned __int64)v8->Children[!v22];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v96 )
    v96 ^= (unsigned __int64)v8;
  if ( v96 != v25 )
    RtlpRbReportFatalError(v96, v25);
  v97 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( v97 )
    {
      v97 ^= (unsigned __int64)v8;
      goto LABEL_206;
    }
  }
  else
  {
LABEL_206:
    if ( v97 )
    {
      v98 = *(_QWORD *)(v97 + 8);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v98 )
        v98 ^= v97;
      if ( (_RTL_BALANCED_NODE *)v98 == v8 )
      {
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v111 = v25 ^ v97;
        else
          v111 = v25;
        *(_QWORD *)(v97 + 8) = v111;
      }
      else
      {
        v99 = *(_QWORD *)v97;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v99 )
          v99 ^= v97;
        if ( (_RTL_BALANCED_NODE *)v99 != v8 )
          RtlpRbReportFatalError(v99, v8);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v100 = v25 ^ v97;
        else
          v100 = v25;
        *(_QWORD *)v97 = v100;
      }
      goto LABEL_215;
    }
  }
  if ( (_RTL_BALANCED_NODE *)v93 != v8 )
    RtlpRbReportFatalError(v93, v8);
  v120 = v25;
LABEL_215:
  if ( v95 && v97 )
    v97 ^= v25;
  *(_QWORD *)(v25 + 16) = v97 | *(_DWORD *)(v25 + 16) & 3;
  v101 = *(_QWORD *)(v25 + 8LL * v22);
  if ( v95 )
  {
    if ( v101 )
    {
      v101 ^= v25;
      goto LABEL_219;
    }
  }
  else
  {
LABEL_219:
    if ( v101 )
    {
      v102 = *(_QWORD *)(v101 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v95 && v102 )
        v102 ^= v101;
      if ( v102 != v25 )
        RtlpRbReportFatalError(v102, v25);
      if ( v95 )
        v103 = (unsigned __int64)v8 ^ v101;
      else
        v103 = (unsigned __int64)v8;
      *(_QWORD *)(v101 + 16) = v103 | *(_DWORD *)(v101 + 16) & 3;
    }
  }
  if ( v95 && v101 )
    v101 ^= (unsigned __int64)v8;
  v8->Children[!v22] = (_RTL_BALANCED_NODE *)v101;
  if ( v95 )
    v104 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v25);
  else
    v104 = v8;
  *(_QWORD *)(v25 + 8LL * v22) = v104;
  if ( v95 )
    v25 ^= (unsigned __int64)v8;
  v105 = v25 | *(_DWORD *)&v8->0 & 3;
  v8->ParentValue = v105;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    v117 = -(__int128)v120;
    Node = (PRTL_BALANCED_NODE)((v120 ^ (unsigned __int64)Tree) & *((_QWORD *)&v117 + 1));
  }
  else
  {
    Node = (PRTL_BALANCED_NODE)v120;
  }
  Tree->Root = Node;
}
