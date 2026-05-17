/*
 * XREFs of RtlRbRemoveNode @ 0x18006B8B0
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x180050650 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18006AF00 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsChunkFree @ 0x18006B040 (RtlpHpVsChunkFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18006D348 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x18008C3AC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x18008C8E4 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800ECD3C (RtlpHpVsFreeChunkRemove.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D7A0 (EtwpRemoveGuidEntryFromTable.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     RtlRemovePointerMapping @ 0x180145DE0 (RtlRemovePointerMapping.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x1801417C8 (RtlpRbReportFatalError.c)
 */

char __fastcall RtlRbRemoveNode(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // rbx
  char v5; // cl
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char v9; // cl
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // r8
  char v14; // r8
  unsigned __int64 v15; // rcx
  BOOL v16; // r13d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rbx
  char v20; // al
  char v21; // dl
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // r15d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  char v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rcx
  char v56; // dl
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  char v61; // dl
  unsigned __int64 v62; // r14
  _BOOL8 v63; // r13
  unsigned __int64 v64; // rcx
  int v65; // r12d
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  __int64 v71; // r15
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  char v78; // r15
  unsigned __int64 v79; // rax
  int v80; // r15d
  unsigned __int64 v81; // r9
  unsigned __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  __int64 v86; // r14
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned int v94; // [rsp+78h] [rbp+50h]
  unsigned __int64 v95; // [rsp+80h] [rbp+58h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  v3 = **((_QWORD **)&v2 + 1);
  v5 = *(_BYTE *)(a1 + 8);
  v6 = *((_QWORD *)&v2 + 1);
  v95 = 0LL;
  LOBYTE(v2) = v5 & 1;
  if ( (v5 & 1) != 0 && v3 )
    v3 ^= *((_QWORD *)&v2 + 1);
  v7 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL);
  if ( (v5 & 1) != 0 && v7 )
    v7 ^= *((_QWORD *)&v2 + 1);
  if ( v3 )
  {
    if ( !v7 )
      goto LABEL_6;
    v41 = *(_QWORD *)v7;
    v94 = 1;
    v10 = v7;
    v8 = v7;
    if ( *(_QWORD *)v7 )
    {
      v94 = 0;
      do
      {
        v8 = v10;
        if ( (v5 & 1) != 0 && v41 )
          v10 ^= v41;
        else
          v10 = v41;
        v41 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    v42 = v3;
    if ( (v5 & 1) != 0 )
      v42 = v10 ^ v3;
    *(_QWORD *)v10 = v42;
    v43 = *(_QWORD *)(v3 + 16);
    v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v44 )
      v44 ^= v3;
    if ( v44 != v6 )
      RtlpRbReportFatalError(v44, v6, v3);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v45 = v10 ^ v3;
    else
      v45 = v10;
    *(_QWORD *)(v3 + 16) = v45 | v43 & 3;
    v46 = *(_QWORD *)(v7 + 16);
    v47 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v47 )
      v47 ^= v7;
    if ( v47 != v6 )
      RtlpRbReportFatalError(v47, v6, v7);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v48 = v10 ^ v7;
    else
      v48 = v10;
    *(_QWORD *)(v7 + 16) = v48 | v46 & 3;
    v3 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v3 )
    {
      v3 ^= v10;
    }
    else if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    {
LABEL_98:
      v49 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v10 + 8) = v7;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v49 )
        v49 ^= v10;
      if ( v49 != v8 && (v49 || v8 != v10) )
        RtlpRbReportFatalError(v49, v8, v10);
      v50 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v13 = *(_BYTE *)(v10 + 16);
      v51 = *(_BYTE *)(a1 + 8) & 1;
      if ( v51 && v50 )
      {
        v50 ^= v6;
      }
      else if ( !v51 )
      {
        goto LABEL_105;
      }
      if ( v50 )
        v50 ^= v10;
LABEL_105:
      v52 = v50 | *(_DWORD *)(v10 + 16) & 3;
      *(_QWORD *)(v10 + 16) = v52;
      *(_BYTE *)(v10 + 16) ^= (*(_BYTE *)(v6 + 16) ^ v52) & 1;
      v53 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v53 )
      {
        v56 = *(_BYTE *)(a1 + 8) & 1;
        if ( v56 )
          v53 ^= v6;
        v57 = *(_QWORD *)(v53 + 8);
        if ( v56 && v57 )
          v57 ^= v53;
        v58 = 0LL;
        if ( v57 == v6 )
          v58 = 8LL;
        v59 = *(_QWORD *)(v53 + v58);
        if ( v56 && v59 )
          v59 ^= v53;
        if ( v59 != v6 )
          RtlpRbReportFatalError(v59, v6, v53);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          *(_QWORD *)&v2 = v10 ^ v53;
        else
          *(_QWORD *)&v2 = v10;
        *(_QWORD *)(v53 + v58) = v2;
        goto LABEL_20;
      }
      v54 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !v54 )
          goto LABEL_108;
        v54 ^= a1;
      }
      if ( v54 == v6 )
      {
        *(_QWORD *)&v2 = v10;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          *(_QWORD *)&v2 = a1 ^ v10;
        *(_QWORD *)a1 = v2;
        goto LABEL_20;
      }
LABEL_108:
      RtlpRbReportFatalError(v54, v6, a1);
    }
    v7 ^= v10;
    goto LABEL_98;
  }
  v3 = v7;
LABEL_6:
  v8 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 16LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = v5 & 1;
  if ( v9 && v8 )
    v8 ^= *((_QWORD *)&v2 + 1);
  v10 = *((_QWORD *)&v2 + 1);
  if ( !v8 )
  {
    if ( v3 )
      *(_QWORD *)(v3 + 16) = 0LL;
    v55 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_117;
      v55 ^= a1;
    }
    if ( v55 == *((_QWORD *)&v2 + 1) )
    {
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        *(_QWORD *)&v2 = -v3;
        *(_QWORD *)(a1 + 8) = (a1 ^ v3) & -(__int64)(v3 != 0);
        *(_BYTE *)(a1 + 8) |= 1u;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v3;
      }
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        LOBYTE(v2) = a1 ^ v3;
        v3 = (a1 ^ v3) & -(__int64)(v3 != 0);
      }
      *(_QWORD *)a1 = v3;
      return v2;
    }
LABEL_117:
    RtlpRbReportFatalError(v55, *((_QWORD *)&v2 + 1), a1);
  }
  *(_QWORD *)&v2 = *(_QWORD *)(v8 + 8);
  if ( v9 && (_QWORD)v2 )
    *(_QWORD *)&v2 = v8 ^ v2;
  if ( (_QWORD)v2 == *((_QWORD *)&v2 + 1) )
  {
    v94 = 1;
    goto LABEL_19;
  }
  v11 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v11 )
    v11 ^= v8;
  if ( v11 != *((_QWORD *)&v2 + 1) )
    RtlpRbReportFatalError(v11, *((_QWORD *)&v2 + 1), v8);
  v12 = *(_QWORD *)(a1 + 8);
  v94 = 0;
  if ( (v12 & 1) != 0 )
  {
    if ( v12 == 1 )
      goto LABEL_19;
    *(_QWORD *)&v2 = v12 ^ (a1 | 1);
  }
  else
  {
    *(_QWORD *)&v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (_QWORD)v2 == *((_QWORD *)&v2 + 1) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 8) & 1;
    if ( v3 )
    {
      if ( !(_BYTE)v2 )
      {
        *(_QWORD *)(a1 + 8) = v3;
        goto LABEL_19;
      }
      v92 = v3;
    }
    else
    {
      if ( !(_BYTE)v2 )
      {
        *(_QWORD *)(a1 + 8) = v8;
        goto LABEL_19;
      }
      v92 = v8;
    }
    *(_QWORD *)&v2 = a1 ^ v92;
    *(_QWORD *)(a1 + 8) = v2;
    *(_BYTE *)(a1 + 8) |= 1u;
  }
LABEL_19:
  v13 = *(_BYTE *)(*((_QWORD *)&v2 + 1) + 16LL);
LABEL_20:
  v14 = v13 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v3 )
    v15 = v3 ^ v8;
  else
    v15 = v3;
  v16 = v94;
  *(_QWORD *)(v8 + 8LL * v94) = v15;
  if ( v3 )
  {
    v17 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v17 )
      v17 ^= v3;
    if ( v17 != v10 )
      RtlpRbReportFatalError(v17, v10, v3);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v8 )
      v8 ^= v3;
    *(_QWORD *)(v3 + 16) = v8;
    return v2;
  }
  if ( v14 )
    return v2;
  while ( 1 )
  {
    v18 = v8;
    v19 = *(_QWORD *)(v8 + 8 * !v16);
    v20 = *(_BYTE *)(a1 + 8);
    if ( (v20 & 1) != 0 && v19 )
      v19 ^= v8;
    v21 = *(_BYTE *)(a1 + 8);
    if ( (*(_BYTE *)(v19 + 16) & 1) != 0 )
    {
      v22 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v22 )
        v22 ^= a1;
      v95 = v22;
      v23 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v24 = v20 & 1;
      if ( (v20 & 1) != 0 && v23 )
        v23 ^= v19;
      if ( v23 != v8 )
        RtlpRbReportFatalError(v23, v8, v19);
      v25 = *(_QWORD *)(v8 + 8 * !v16);
      if ( (v20 & 1) != 0 && v25 )
        v25 ^= v8;
      if ( v25 != v19 )
        RtlpRbReportFatalError(v25, v19, v8);
      v26 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v20 & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_245;
        v26 ^= v8;
      }
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8);
        if ( v24 && v27 )
          v27 ^= v26;
        if ( v27 == v8 )
        {
          if ( v24 )
            v90 = v19 ^ v26;
          else
            v90 = v19;
          *(_QWORD *)(v26 + 8) = v90;
        }
        else
        {
          v28 = *(_QWORD *)v26;
          if ( v24 && v28 )
            v28 ^= v26;
          if ( v28 != v8 )
            RtlpRbReportFatalError(v28, v8, v26);
          if ( v24 )
            v29 = v19 ^ v26;
          else
            v29 = v19;
          *(_QWORD *)v26 = v29;
        }
        goto LABEL_49;
      }
LABEL_245:
      if ( v22 != v8 )
        RtlpRbReportFatalError(v22, v8, &v95);
      v95 = v19;
LABEL_49:
      if ( v24 && v26 )
        v26 ^= v19;
      *(_QWORD *)(v19 + 16) = v26 | *(_DWORD *)(v19 + 16) & 3;
      v30 = *(_QWORD *)(v19 + 8LL * v16);
      if ( v24 )
      {
        if ( !v30 )
        {
LABEL_60:
          if ( v24 && v30 )
            v30 ^= v8;
          *(_QWORD *)(v8 + 8 * !v16) = v30;
          if ( v24 )
            v33 = v8 ^ v19;
          else
            v33 = v8;
          *(_QWORD *)(v19 + 8LL * v16) = v33;
          v34 = v19;
          if ( v24 )
            v34 = v8 ^ v19;
          *(_QWORD *)(v8 + 16) = v34 | *(_DWORD *)(v8 + 16) & 3;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            v35 = (v95 ^ a1) & ((unsigned __int128)-(__int128)v95 >> 64);
          else
            v35 = v95;
          *(_QWORD *)a1 = v35;
          *(_BYTE *)(v19 + 16) &= ~1u;
          *(_BYTE *)(v8 + 16) |= 1u;
          v21 = *(_BYTE *)(a1 + 8);
          v19 = *(_QWORD *)(v8 + 8 * !v16);
          if ( (v21 & 1) != 0 && v19 )
            v19 ^= v8;
          v20 = *(_BYTE *)(a1 + 8);
          goto LABEL_69;
        }
        v30 ^= v19;
      }
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v24 && v31 )
          v31 ^= v30;
        if ( v31 != v19 )
          RtlpRbReportFatalError(v31, v19, v30);
        if ( v24 )
          v32 = v8 ^ v30;
        else
          v32 = v8;
        *(_QWORD *)(v30 + 16) = v32 | *(_DWORD *)(v30 + 16) & 3;
      }
      goto LABEL_60;
    }
LABEL_69:
    v36 = *(_QWORD *)v19;
    v37 = v20 & 1;
    if ( *(_QWORD *)v19 )
    {
      if ( v37 )
        v36 ^= v19;
      if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
        break;
    }
    v38 = *(_QWORD *)(v19 + 8);
    if ( v38 )
    {
      if ( v37 )
        v38 ^= v19;
      if ( (*(_BYTE *)(v38 + 16) & 1) != 0 )
        break;
    }
    v39 = *(_BYTE *)(v8 + 16);
    if ( (v39 & 1) != 0 )
    {
      LOBYTE(v2) = v39 & 0xFE;
      *(_BYTE *)(v8 + 16) = v2;
      *(_BYTE *)(v19 + 16) |= 1u;
      return v2;
    }
    *(_BYTE *)(v19 + 16) |= 1u;
    *(_QWORD *)&v2 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && (_QWORD)v2 )
      v8 ^= v2;
    else
      v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v8 )
      return v2;
    v40 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v40 )
      v40 ^= v8;
    v16 = v40 == v18;
    v94 = v16;
  }
  v60 = *(_QWORD *)(v19 + 8 * !v16);
  v61 = v21 & 1;
  if ( v61 )
  {
    if ( v60 )
    {
      v60 ^= v19;
      goto LABEL_163;
    }
LABEL_165:
    v62 = *(_QWORD *)(v19 + 8LL * v16);
    if ( v61 && v62 )
      v62 ^= v19;
    *(_BYTE *)(v62 + 16) &= ~1u;
    v63 = !v16;
    v64 = *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v65 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v64 )
      v64 ^= v62;
    if ( v64 != v19 )
      RtlpRbReportFatalError(v64, v19, v62);
    v66 = *(_QWORD *)(v19 + 8 * !v63);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v66 )
      v66 ^= v19;
    if ( v66 != v62 )
      RtlpRbReportFatalError(v66, v62, v19);
    v67 = *(_QWORD *)(v8 + 8 * v63);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v67 )
      v67 ^= v8;
    if ( v67 != v19 )
      RtlpRbReportFatalError(v67, v19, v8);
    v68 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v68 )
      v68 ^= v19;
    if ( v68 != v8 )
      RtlpRbReportFatalError(v68, v8, v19);
    v69 = v62;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v69 = v8 ^ v62;
    *(_QWORD *)(v8 + 8 * v63) = v69;
    if ( v65 && v8 )
      v70 = v8 ^ v62;
    else
      v70 = v8;
    *(_QWORD *)(v62 + 16) = v70 | *(_DWORD *)(v62 + 16) & 3;
    v71 = *(_QWORD *)(v62 + 8 * v63);
    if ( v65 )
    {
      if ( !v71 )
      {
LABEL_192:
        if ( v65 && v71 )
          v71 ^= v19;
        *(_QWORD *)(v19 + 8 * !v63) = v71;
        if ( v65 )
          v74 = v19 ^ v62;
        else
          v74 = v19;
        *(_QWORD *)(v62 + 8 * v63) = v74;
        v75 = v62;
        if ( v65 )
          v75 = v19 ^ v62;
        v16 = v94;
        v76 = v75 | *(_DWORD *)(v19 + 16) & 3;
        v60 = v19;
        *(_QWORD *)(v19 + 16) = v76;
        v19 = v62;
        goto LABEL_198;
      }
      v71 ^= v62;
    }
    if ( v71 )
    {
      v72 = *(_QWORD *)(v71 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v65 && v72 )
        v72 ^= v71;
      if ( v72 != v62 )
        RtlpRbReportFatalError(v72, v62, v71);
      if ( v65 )
        v73 = v19 ^ v71;
      else
        v73 = v19;
      *(_QWORD *)(v71 + 16) = v73 | *(_DWORD *)(v71 + 16) & 3;
    }
    goto LABEL_192;
  }
LABEL_163:
  if ( !v60 || (*(_BYTE *)(v60 + 16) & 1) == 0 )
    goto LABEL_165;
LABEL_198:
  *(_BYTE *)(v19 + 16) ^= (*(_BYTE *)(v8 + 16) ^ *(_BYTE *)(v19 + 16)) & 1;
  *(_BYTE *)(v8 + 16) &= ~1u;
  *(_BYTE *)(v60 + 16) &= ~1u;
  v77 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v77 )
    v77 ^= a1;
  v78 = *(_BYTE *)(a1 + 8);
  v95 = v77;
  v79 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v80 = v78 & 1;
  if ( v80 && v79 )
    v79 ^= v19;
  if ( v79 != v8 )
    RtlpRbReportFatalError(v79, v8, v19);
  v81 = *(_QWORD *)(v8 + 8 * !v16);
  if ( v80 && v81 )
    v81 ^= v8;
  if ( v81 != v19 )
    RtlpRbReportFatalError(v81, v19, v8);
  v82 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v80 )
  {
    if ( v82 )
    {
      v82 ^= v8;
      goto LABEL_206;
    }
  }
  else
  {
LABEL_206:
    if ( v82 )
    {
      v83 = *(_QWORD *)(v82 + 8);
      if ( v80 && v83 )
        v83 ^= v82;
      if ( v83 == v8 )
      {
        if ( v80 )
          v91 = v19 ^ v82;
        else
          v91 = v19;
        *(_QWORD *)(v82 + 8) = v91;
      }
      else
      {
        v84 = *(_QWORD *)v82;
        if ( v80 && v84 )
          v84 ^= v82;
        if ( v84 != v8 )
          RtlpRbReportFatalError(v84, v8, v82);
        if ( v80 )
          v85 = v19 ^ v82;
        else
          v85 = v19;
        *(_QWORD *)v82 = v85;
      }
      goto LABEL_215;
    }
  }
  if ( v77 != v8 )
    RtlpRbReportFatalError(v77, v8, &v95);
  v95 = v19;
LABEL_215:
  if ( v80 && v82 )
    v82 ^= v19;
  *(_QWORD *)(v19 + 16) = v82 | *(_DWORD *)(v19 + 16) & 3;
  v86 = *(_QWORD *)(v19 + 8LL * v16);
  if ( v80 )
  {
    if ( v86 )
    {
      v86 ^= v19;
      goto LABEL_219;
    }
  }
  else
  {
LABEL_219:
    if ( v86 )
    {
      v87 = *(_QWORD *)(v86 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v80 && v87 )
        v87 ^= v86;
      if ( v87 != v19 )
        RtlpRbReportFatalError(v87, v19, v86);
      if ( v80 )
        v88 = v8 ^ v86;
      else
        v88 = v8;
      *(_QWORD *)(v86 + 16) = v88 | *(_DWORD *)(v86 + 16) & 3;
    }
  }
  if ( v80 && v86 )
    v86 ^= v8;
  *(_QWORD *)(v8 + 8 * !v16) = v86;
  if ( v80 )
    v89 = v8 ^ v19;
  else
    v89 = v8;
  *(_QWORD *)(v19 + 8LL * v16) = v89;
  if ( v80 )
    v19 ^= v8;
  *(_QWORD *)&v2 = v19 | *(_DWORD *)(v8 + 16) & 3;
  *(_QWORD *)(v8 + 16) = v2;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v2 = -(__int128)v95;
    *((_QWORD *)&v2 + 1) &= v95 ^ a1;
  }
  else
  {
    *((_QWORD *)&v2 + 1) = v95;
  }
  *(_QWORD *)a1 = *((_QWORD *)&v2 + 1);
  return v2;
}
