/*
 * XREFs of MiReplaceStandbyLookaside @ 0x1402DDCB0
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402DE320 (MiFindSuitableLookasideReplacement.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReplaceStandbyLookaside(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, int a4)
{
  __int64 v4; // r13
  int v5; // r11d
  signed __int64 v6; // rdi
  ULONG_PTR v9; // r14
  ULONG_PTR result; // rax
  int v11; // edx
  __int64 v12; // r10
  char *v13; // rbx
  __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned int v16; // ebp
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r15
  int v19; // edi
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 *v23; // rcx
  ULONG_PTR v24; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rbp
  int v29; // r10d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int j; // r11d
  int v33; // r9d
  __int64 v34; // rcx
  int i; // r8d
  int v36; // r9d
  unsigned __int8 v37; // cl
  _QWORD *v38; // rax
  unsigned __int8 v39; // [rsp+30h] [rbp-88h]
  unsigned int v40; // [rsp+34h] [rbp-84h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  unsigned __int8 v42; // [rsp+C0h] [rbp+8h]

  v4 = a3;
  v5 = a4;
  v6 = 48 * BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( BugCheckParameter2 < qword_140E34930 || BugCheckParameter2 >= qword_140E34930 + 2048 )
  {
    result = *(_QWORD *)(v6 - 0x21FFFFFFFFF0LL);
    if ( (result & 0x400) != 0 )
    {
      if ( (result & 8) == 0 )
        return result;
    }
    else if ( (result & 0x10000000) == 0 )
    {
      return result;
    }
  }
  v11 = dword_140E2D804;
  v12 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  v41 = v12;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v13 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v13)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v13 + 2) )
  {
    for ( i = 0; ; i = v36 + 1 )
    {
      while ( 1 )
      {
        if ( v11 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v36 = (i + v11) >> 1;
        v13 = (char *)qword_140E2D860 + 16 * v36;
        if ( BugCheckParameter2 >= *(_QWORD *)v13 )
          break;
        if ( !v36 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D860, 0LL);
        v11 = v36 - 1;
      }
      if ( v36 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v13 + 2) )
        break;
    }
    dword_140E2D800 = (i + v11) >> 1;
  }
  v14 = *((unsigned int *)v13 + 2);
  v15 = *(_DWORD *)(v9 + 32);
  if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_90;
  if ( (*(_DWORD *)(v9 + 32) & 0x8000000) == 0 )
    goto LABEL_11;
  if ( v9 < 0xFFFFDE0000000000uLL
    || v9 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || v6 / 48 >= qword_140E34930 && v6 / 48 < qword_140E34930 + 2048 )
  {
LABEL_90:
    v16 = 5;
    goto LABEL_12;
  }
  if ( (v15 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v9) == 9 )
  {
    v16 = 5;
    goto LABEL_12;
  }
LABEL_11:
  v16 = HIBYTE(v15) & 7;
LABEL_12:
  v40 = v16;
  if ( qword_140E2D868 )
  {
    v38 = MiSearchChannelTable(BugCheckParameter2);
    v5 = a4;
    v12 = v41;
    v17 = *((_BYTE *)v38 + 12);
  }
  else
  {
    v17 = 0;
  }
  v39 = v17;
  if ( (int)v4 < 9 )
  {
    if ( (_DWORD)v4 == 8 )
      v18 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v6 / 48) >> 9) + 1) & 0x7F;
    else
      v18 = 0;
  }
  else
  {
    v18 = 0;
  }
  v42 = v18;
  v19 = 0;
  while ( 2 )
  {
    if ( !v19 )
    {
      v20 = ((unsigned __int64)v16 << 9) + 8128;
      goto LABEL_21;
    }
    if ( v19 == 1 )
    {
      v20 = ((unsigned __int64)v16 << 9) + 12224;
      goto LABEL_21;
    }
    v12 = *(_QWORD *)(v12 + 16);
    if ( (int)v4 >= 9 )
    {
      v20 = ((v16 + 110 * v14 + 8LL * v17) << 9) + 5568;
LABEL_21:
      v21 = v12 + v20;
      goto LABEL_22;
    }
    v37 = 0;
    if ( (_DWORD)v4 == 8 )
      v37 = v18;
    v21 = *(_QWORD *)(232 * v4 + v12 + 56320 * v14 + 14816) + ((v16 + 8LL * v37) << 9);
LABEL_22:
    v22 = 0LL;
    v23 = (__int64 *)v21;
    while ( 1 )
    {
      result = *v23;
      if ( *v23 == BugCheckParameter2 )
        break;
      v22 = (unsigned int)(v22 + 1);
      ++v23;
      result = (unsigned int)v22;
      if ( (unsigned int)v22 >= 0x40 )
      {
        if ( (_DWORD)v22 == 64 )
          goto LABEL_26;
        break;
      }
    }
    if ( a2 != -1LL || (result = MiFindSuitableLookasideReplacement(v19, v21, v22, v9, v5), !(_DWORD)result) )
    {
      v24 = *(_QWORD *)(v21 + 8 * v22);
      *(_QWORD *)(v21 + 8 * v22) = a2;
      if ( v24 != -1LL )
      {
        if ( v24 < qword_140E34930 || (result = qword_140E34930 + 2048, v24 >= qword_140E34930 + 2048) )
        {
          v25 = 6 * v24;
          v26 = *(_QWORD *)(48 * v24 - 0x21FFFFFFFFF0LL);
          v27 = -9LL;
          if ( (v26 & 0x400) == 0 )
            v27 = -268435457LL;
          v28 = v26 & v27;
          v29 = dword_140E2D804;
          if ( dword_140E2D800 > (unsigned int)dword_140E2D804
            || v24 < *((_QWORD *)qword_140E2D860 + 2 * dword_140E2D800)
            || dword_140E2D800 != dword_140E2D804 && v24 >= *((_QWORD *)qword_140E2D860 + 2 * dword_140E2D800 + 2) )
          {
            for ( j = 0; ; j = v33 + 1 )
            {
              while ( 1 )
              {
                if ( v29 < j )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v24, 0LL, 0LL);
                v33 = (j + v29) >> 1;
                v34 = 16LL * v33;
                if ( v24 >= *(_QWORD *)((char *)qword_140E2D860 + v34) )
                  break;
                if ( !v33 )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v24, (ULONG_PTR)qword_140E2D860 + v34, 0LL);
                v29 = v33 - 1;
              }
              if ( v33 == dword_140E2D804 || v24 < *(_QWORD *)((char *)qword_140E2D860 + v34 + 16) )
                break;
            }
            dword_140E2D800 = (j + v29) >> 1;
          }
          if ( qword_140E2D868 )
            MiSearchChannelTable(v24);
          result = 0xFFFFDE0000000010uLL;
          *(_QWORD *)(8 * v25 - 0x21FFFFFFFFF0LL) = v28;
        }
      }
      if ( a2 != -1LL )
      {
        if ( a2 < qword_140E34930 || (result = qword_140E34930 + 2048, a2 >= qword_140E34930 + 2048) )
        {
          v30 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF0LL);
          v31 = 8LL;
          if ( (v30 & 0x400) == 0 )
            v31 = 0x10000000LL;
          result = 0xFFFFDE0000000010uLL;
          *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF0LL) = v30 | v31;
        }
      }
    }
LABEL_26:
    if ( ++v19 < 3 )
    {
      v16 = v40;
      v5 = a4;
      v12 = v41;
      v17 = v39;
      v18 = v42;
      continue;
    }
    return result;
  }
}
