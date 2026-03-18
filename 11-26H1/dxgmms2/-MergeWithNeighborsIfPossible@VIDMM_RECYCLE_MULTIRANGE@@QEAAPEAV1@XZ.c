/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400EEF40
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F0480 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EDD50 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EDEF0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400EFC60 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400EFE10 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EFE4C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2134 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400F4640 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(int *Entry)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  _QWORD *v3; // r14
  __int64 v4; // rax
  _QWORD *v6; // r13
  int v7; // r15d
  _QWORD *v8; // rcx
  __int64 v9; // r8
  int *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  ULONGLONG v27; // rcx
  CCHAR v28; // al
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  char v32; // cl
  int v33; // edx
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rsi
  struct _RTL_BALANCED_NODE *v40; // rdi
  struct _RTL_BALANCED_NODE *v41; // rax
  int v42; // edx
  struct _RTL_BALANCED_NODE *v43; // rax
  struct _RTL_BALANCED_NODE *v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdi
  int v60; // eax
  __int64 v61; // rax
  ULONGLONG v62; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rcx
  struct VIDMM_RECYCLE_RANGE *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD v74[2]; // [rsp+30h] [rbp-58h] BYREF
  char v75; // [rsp+40h] [rbp-48h]
  _QWORD *v76; // [rsp+50h] [rbp-38h]
  __int64 v77; // [rsp+60h] [rbp-28h]
  __int64 v78; // [rsp+90h] [rbp+8h]
  __int64 v79; // [rsp+90h] [rbp+8h]
  __int64 v80; // [rsp+98h] [rbp+10h]
  __int64 v81; // [rsp+98h] [rbp+10h]
  __int64 v82; // [rsp+A0h] [rbp+18h]

  v4 = *((_QWORD *)Entry + 8);
  v6 = (_QWORD *)*((_QWORD *)Entry + 10);
  v7 = Entry[42];
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 128);
  if ( v9 != *(_QWORD *)(v4 + 72) + 72LL )
    v8 = (_QWORD *)(v9 - 120);
  v10 = 0LL;
  if ( v8 )
  {
    if ( v7 == 1 )
    {
      v10 = (int *)v8[18];
    }
    else if ( v7 )
    {
      if ( v7 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_127;
      }
      v10 = (int *)v8[19];
    }
    else
    {
      v10 = (int *)v8[17];
    }
  }
  v11 = *((_QWORD *)Entry + 9);
  v1 = 0LL;
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 != *(_QWORD *)(v11 + 72) + 72LL )
  {
    v13 = (_QWORD *)(v12 - 120);
    if ( v12 != 120 )
    {
      switch ( v7 )
      {
        case 1:
          v1 = (_QWORD *)v13[18];
          goto LABEL_14;
        case 0:
          v1 = (_QWORD *)v13[17];
          goto LABEL_14;
        case 2:
          v1 = (_QWORD *)v13[19];
          goto LABEL_14;
      }
LABEL_127:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, v1, v1);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_128;
    }
  }
LABEL_14:
  v77 = v2;
  v76 = v3;
  if ( v10 )
  {
    if ( !v1 )
    {
      v1 = Entry;
      goto LABEL_24;
    }
    v2 = Entry[22];
    v3 = (_QWORD *)v6[4];
    v81 = *((_QWORD *)v10 + 8);
    v82 = v1[9];
    WdLogSingleEntry2(4LL, v10, v2);
    WdLogGlobalForLineNumber = 8517;
    if ( (_DWORD)v2 == 2 )
    {
      v45 = v3 + 8;
    }
    else
    {
      if ( (_DWORD)v2 )
      {
        if ( (_DWORD)v2 == 1 )
        {
          v45 = v3 + 7;
          goto LABEL_89;
        }
LABEL_128:
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v2, 0LL);
        WdLogGlobalForLineNumber = 213;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v2, 0LL);
        WdLogGlobalForLineNumber = 213;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v2, 0LL);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_129;
      }
      v45 = v3 + 6;
    }
LABEL_89:
    RtlAvlRemoveNode(v45, v10);
    v10[22] = 3;
    v46 = *(_QWORD *)(*((_QWORD *)Entry + 10) + 32LL);
    WdLogSingleEntry2(4LL, Entry, v2);
    WdLogGlobalForLineNumber = 8517;
    if ( (_DWORD)v2 == 2 )
    {
      v47 = v46 + 64;
    }
    else if ( (_DWORD)v2 )
    {
      v47 = v46 + 56;
    }
    else
    {
      v47 = v46 + 48;
    }
    RtlAvlRemoveNode(v47, Entry);
    v48 = *((_QWORD *)Entry + 10);
    Entry[22] = 3;
    v49 = *(_QWORD *)(v48 + 32);
    WdLogSingleEntry2(4LL, v1, v2);
    WdLogGlobalForLineNumber = 8517;
    if ( (_DWORD)v2 == 2 )
    {
      v50 = v49 + 64;
    }
    else if ( (_DWORD)v2 )
    {
      v50 = v49 + 56;
    }
    else
    {
      v50 = v49 + 48;
    }
    RtlAvlRemoveNode(v50, v1);
    v51 = v1[5];
    *((_DWORD *)v1 + 22) = 3;
    v52 = *((_QWORD *)v10 + 4);
    v79 = v51;
    v53 = *(_QWORD *)(v6[4] + 8LL);
    VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v10);
    v54 = *(unsigned int *)(v53 + 1620);
    if ( (unsigned int)v54 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v53 + 1320), v10);
    }
    else
    {
      *(_QWORD *)(v53 + 8 * v54 + 1656) = v10;
      ++*(_DWORD *)(v53 + 1620);
    }
    --*(_DWORD *)(v53 + 1688);
    v55 = *(_QWORD *)(v6[4] + 8LL);
    VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)Entry);
    v56 = *(unsigned int *)(v55 + 1620);
    if ( (unsigned int)v56 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v55 + 1320), Entry);
    }
    else
    {
      *(_QWORD *)(v55 + 8 * v56 + 1656) = Entry;
      ++*(_DWORD *)(v55 + 1620);
    }
    --*(_DWORD *)(v55 + 1688);
    v57 = *(_QWORD *)(v6[4] + 8LL);
    VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v1);
    v58 = *(unsigned int *)(v57 + 1620);
    if ( (unsigned int)v58 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v57 + 1320), v1);
    }
    else
    {
      *(_QWORD *)(v57 + 8 * v58 + 1656) = v1;
      ++*(_DWORD *)(v57 + 1620);
    }
    --*(_DWORD *)(v57 + 1688);
    v59 = *(_QWORD *)(v6[4] + 8LL);
    v60 = *(_DWORD *)(v59 + 1620);
    if ( v60 )
    {
      v61 = (unsigned int)(v60 - 1);
      v1 = *(_QWORD **)(v59 + 8 * v61 + 1656);
      *(_QWORD *)(v59 + 8 * v61 + 1656) = 0LL;
      --*(_DWORD *)(v59 + 1620);
    }
    else
    {
      v1 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v59 + 1320));
    }
    if ( v1 )
    {
      ++*(_DWORD *)(v59 + 1688);
      WdLogSingleEntry1(4LL, v1);
      v1[4] = v52;
      v1[5] = v79;
      *((_DWORD *)v1 + 6) = 1;
      v1[8] = 0LL;
      v1[9] = 0LL;
      v1[10] = v6;
      v1[6] = v52;
      *((_DWORD *)v1 + 42) = v7;
      ++v6[1];
      v62 = v1[4];
      WdLogGlobalForLineNumber = 2287;
      LeastSignificantBit = RtlFindLeastSignificantBit(v62);
      v64 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
      v1[7] = v64;
      v1[11] = 3LL;
      *((_BYTE *)v1 + 96) = 0;
      v1[13] = 0LL;
      v1[14] = 0LL;
      v1[18] = 0LL;
      *((_WORD *)v1 + 60) = 0;
      v1[16] = 0LL;
      v1[17] = 0LL;
      v1[19] = 0LL;
      v1[20] = 0LL;
      v65 = v1[10];
      *((_BYTE *)v1 + 172) = 0;
      v66 = *(_QWORD *)(v65 + 152);
      if ( v66 )
      {
        v71 = *(_QWORD *)(v66 + 24);
        v72 = 144LL * *(_QWORD *)(v66 + 32);
        *(_DWORD *)(v72 + v71) = 0;
        *(_QWORD *)(v72 + v71 + 8) = v1;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v72 + v71 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v65 + 152) + 32LL);
        v73 = *(_QWORD *)(v65 + 152);
        if ( *(_QWORD *)(v73 + 32) == *(_QWORD *)(v73 + 48) )
        {
          *(_QWORD *)(v73 + 32) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v65 + 152) + 40LL) = 1;
        }
      }
    }
    v1[8] = v81;
    v1[9] = v82;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v1);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v6[4], (unsigned int)v2, v1);
    if ( *v6 != 1LL )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v1;
    goto LABEL_110;
  }
  if ( !v1 )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)Entry;
  v10 = Entry;
LABEL_24:
  v2 = Entry[22];
  v3 = (_QWORD *)v6[4];
  WdLogSingleEntry2(4LL, v10, v2);
  WdLogGlobalForLineNumber = 8517;
  if ( (_DWORD)v2 == 2 )
  {
    v15 = v3 + 8;
    goto LABEL_29;
  }
  if ( !(_DWORD)v2 )
  {
    v15 = v3 + 6;
    goto LABEL_29;
  }
  if ( (_DWORD)v2 != 1 )
  {
LABEL_129:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v2, 0LL);
    WdLogGlobalForLineNumber = 213;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v2, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_130;
  }
  v15 = v3 + 7;
LABEL_29:
  RtlAvlRemoveNode(v15, v10);
  v10[22] = 3;
  v16 = *(_QWORD *)(*((_QWORD *)Entry + 10) + 32LL);
  WdLogSingleEntry2(4LL, v1, v2);
  WdLogGlobalForLineNumber = 8517;
  if ( (_DWORD)v2 == 2 )
  {
    v17 = v16 + 64;
  }
  else if ( (_DWORD)v2 )
  {
    v17 = v16 + 56;
  }
  else
  {
    v17 = v16 + 48;
  }
  RtlAvlRemoveNode(v17, v1);
  v18 = v1[9];
  *((_DWORD *)v1 + 22) = 3;
  v19 = (_QWORD *)*((_QWORD *)v10 + 8);
  v78 = *((_QWORD *)v10 + 4);
  v80 = v1[5];
  v20 = *(_QWORD *)(v6[4] + 8LL);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v10);
  v21 = *(unsigned int *)(v20 + 1620);
  if ( (unsigned int)v21 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v20 + 1320), v10);
  }
  else
  {
    *(_QWORD *)(v20 + 8 * v21 + 1656) = v10;
    ++*(_DWORD *)(v20 + 1620);
  }
  --*(_DWORD *)(v20 + 1688);
  v22 = *(_QWORD *)(v6[4] + 8LL);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v1);
  v23 = *(unsigned int *)(v22 + 1620);
  if ( (unsigned int)v23 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v22 + 1320), v1);
  }
  else
  {
    *(_QWORD *)(v22 + 8 * v23 + 1656) = v1;
    ++*(_DWORD *)(v22 + 1620);
  }
  --*(_DWORD *)(v22 + 1688);
  v24 = *(_QWORD *)(v6[4] + 8LL);
  v25 = *(_DWORD *)(v24 + 1620);
  if ( v25 )
  {
    v26 = (unsigned int)(v25 - 1);
    v3 = 0LL;
    v1 = *(_QWORD **)(v24 + 8 * v26 + 1656);
    *(_QWORD *)(v24 + 8 * v26 + 1656) = 0LL;
    --*(_DWORD *)(v24 + 1620);
  }
  else
  {
    v1 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v24 + 1320));
    v3 = 0LL;
  }
  if ( v1 )
  {
    ++*(_DWORD *)(v24 + 1688);
    WdLogSingleEntry1(4LL, v1);
    v1[4] = v78;
    v1[5] = v80;
    v1[6] = v78;
    *((_DWORD *)v1 + 6) = 1;
    v1[8] = 0LL;
    v1[9] = 0LL;
    v1[10] = v6;
    *((_DWORD *)v1 + 42) = v7;
    ++v6[1];
    v27 = v1[4];
    WdLogGlobalForLineNumber = 2287;
    v28 = RtlFindLeastSignificantBit(v27);
    v29 = v28 < 0 ? 0LL : 1LL << v28;
    v1[7] = v29;
    v1[11] = 3LL;
    *((_BYTE *)v1 + 96) = 0;
    v1[13] = 0LL;
    v1[14] = 0LL;
    v1[18] = 0LL;
    *((_WORD *)v1 + 60) = 0;
    v1[16] = 0LL;
    v1[17] = 0LL;
    v1[19] = 0LL;
    v1[20] = 0LL;
    v30 = v1[10];
    *((_BYTE *)v1 + 172) = 0;
    v31 = *(_QWORD *)(v30 + 152);
    if ( v31 )
    {
      v68 = *(_QWORD *)(v31 + 24);
      v69 = 144LL * *(_QWORD *)(v31 + 32);
      *(_DWORD *)(v69 + v68) = 0;
      *(_QWORD *)(v69 + v68 + 8) = v1;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v69 + v68 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v30 + 152) + 32LL);
      v70 = *(_QWORD *)(v30 + 152);
      if ( *(_QWORD *)(v70 + 32) == *(_QWORD *)(v70 + 48) )
      {
        *(_QWORD *)(v70 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v30 + 152) + 40LL) = 1;
      }
    }
  }
  v1[8] = v19;
  v32 = 0;
  v1[9] = v18;
  while ( !v32 )
  {
    v33 = *((_DWORD *)v1 + 42);
    if ( v33 )
    {
      v42 = v33 - 1;
      if ( v42 )
      {
        if ( v42 != 1 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, v3, v3);
          WdLogGlobalForLineNumber = 213;
          goto LABEL_132;
        }
        v19[19] = v1;
      }
      else
      {
        v19[18] = v1;
      }
    }
    else
    {
      v19[17] = v1;
    }
    if ( v19 == (_QWORD *)v1[9] )
    {
      v32 = 1;
    }
    else
    {
      v34 = v19[15];
      if ( v34 == v19[9] + 72LL )
        v19 = v3;
      else
LABEL_130:
        v19 = (_QWORD *)(v34 - 120);
    }
  }
  v35 = (_QWORD *)v6[4];
  WdLogSingleEntry2(4LL, v1, v2);
  v37 = v1[5] - v1[4];
  v38 = v1[7];
  WdLogGlobalForLineNumber = 8467;
  v74[0] = v37;
  v74[1] = v38;
  v75 = 0;
  switch ( (_DWORD)v2 )
  {
    case 2:
      v39 = v35 + 8;
      LOBYTE(v36) = 0;
      v40 = (struct _RTL_BALANCED_NODE *)v35[8];
      if ( v40 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v74, v40) < 0 )
          {
            v41 = v40->Children[0];
            if ( !v40->Children[0] )
              goto LABEL_83;
          }
          else
          {
            v41 = v40->Children[1];
            if ( !v41 )
              goto LABEL_68;
          }
          v40 = v41;
        }
      }
      break;
    case 0:
      v39 = v35 + 6;
      LOBYTE(v36) = 0;
      v40 = (struct _RTL_BALANCED_NODE *)v35[6];
      if ( !v40 )
        break;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v74, v40) < 0 )
        {
          v44 = v40->Children[0];
          if ( !v40->Children[0] )
          {
LABEL_83:
            LOBYTE(v36) = 0;
            goto LABEL_69;
          }
        }
        else
        {
          v44 = v40->Children[1];
          if ( !v44 )
          {
LABEL_68:
            LOBYTE(v36) = 1;
            goto LABEL_69;
          }
        }
        v40 = v44;
      }
    case 1:
      v39 = v35 + 7;
      LOBYTE(v36) = 0;
      v40 = (struct _RTL_BALANCED_NODE *)v35[7];
      if ( v40 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v74, v40) < 0 )
          {
            v43 = v40->Children[0];
            if ( !v40->Children[0] )
              goto LABEL_83;
          }
          else
          {
            v43 = v40->Children[1];
            if ( !v43 )
              goto LABEL_68;
          }
          v40 = v43;
        }
      }
      break;
    default:
LABEL_132:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v2, v3);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x1400EFC55LL);
  }
LABEL_69:
  RtlAvlInsertNodeEx(v39, v40, v36, v1);
  *((_DWORD *)v1 + 22) = v2;
  if ( *v6 != 1LL )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v1;
LABEL_110:
  if ( !v7 )
  {
    v67 = (struct VIDMM_RECYCLE_RANGE *)v1[8];
    if ( !*((_DWORD *)v67 + 16) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v6[4], 2, (__int64)v1);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        *(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL),
        (struct VIDMM_RECYCLE_MULTIRANGE *)v1);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL), v67);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v1;
}
