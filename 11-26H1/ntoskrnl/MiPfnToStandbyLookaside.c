/*
 * XREFs of MiPfnToStandbyLookaside @ 0x1402ADD70
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnToStandbyLookaside(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3, __int64 *a4)
{
  signed __int64 v4; // rsi
  ULONG_PTR v8; // r9
  unsigned __int64 v9; // rdx
  int v10; // edi
  int v11; // r8d
  char *v12; // rax
  unsigned int v13; // r8d
  int v14; // r8d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r9
  int i; // edx
  int v21; // ebp
  __int64 v22; // rcx
  unsigned __int8 v23; // r11
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx

  v4 = 48 * BugCheckParameter2;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( a2 )
  {
    v10 = *a2;
  }
  else if ( BugCheckParameter2 < qword_140E34930 || BugCheckParameter2 >= qword_140E34930 + 2048 )
  {
    if ( byte_140E3BEA6 )
    {
      v9 = (unsigned __int64)(v4 / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v9) )
        v10 = *(unsigned __int8 *)(qword_140E3D240 + 2 * v9) - 1;
      else
        v10 = 9;
    }
    else
    {
      v10 = 9;
    }
  }
  else
  {
    v10 = 9;
  }
  a4[1] = v8;
  *a4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v11 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v12 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v12)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v12 + 2) )
  {
    for ( i = 0; ; i = v21 + 1 )
    {
      while ( 1 )
      {
        if ( v11 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v21 = (i + v11) >> 1;
        v22 = 16LL * v21;
        v12 = (char *)qword_140E2D860 + v22;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D860 + v22) )
          break;
        if ( !v21 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D860 + v22, 0LL);
        v11 = v21 - 1;
      }
      if ( v21 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2D800 = (i + v11) >> 1;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 2);
  if ( a3 )
  {
    v14 = 5;
  }
  else
  {
    v13 = *(_DWORD *)(v8 + 32);
    if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_47;
    if ( (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 )
    {
LABEL_12:
      v14 = HIBYTE(v13) & 7;
      goto LABEL_13;
    }
    if ( v8 < 0xFFFFDE0000000000uLL )
      goto LABEL_47;
    if ( v8 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
      goto LABEL_47;
    v24 = v4 / 48;
    if ( v4 / 48 >= qword_140E34930 && v24 < qword_140E34930 + 2048 )
      goto LABEL_47;
    if ( (v13 & 0x70000) == 0x60000 )
      goto LABEL_12;
    if ( byte_140E3BEA6 && (v25 = v24 >> 9, *(_BYTE *)(qword_140E3D240 + 2 * v25)) )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v25) != 10 )
        goto LABEL_12;
      v14 = 5;
    }
    else
    {
LABEL_47:
      v14 = 5;
    }
  }
LABEL_13:
  *((_DWORD *)a4 + 7) = v14;
  if ( qword_140E2D868 )
    LOBYTE(result) = *((_BYTE *)MiSearchChannelTable(BugCheckParameter2) + 12);
  else
    LOBYTE(result) = 0;
  v16 = *a4;
  v17 = *((unsigned int *)a4 + 6);
  v18 = *((unsigned int *)a4 + 7);
  *((_BYTE *)a4 + 32) = result;
  *((_DWORD *)a4 + 9) = v10;
  v19 = *(_QWORD *)(v16 + 16);
  if ( v10 < 9 )
  {
    if ( v10 == 8 )
      v23 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v4 / 48) >> 9) + 1) & 0x7F;
    else
      v23 = 0;
    *((_BYTE *)a4 + 40) = v23;
    result = *(_QWORD *)(56320 * v17 + v19 + 232LL * v10 + 14824) + 88 * (v18 + 8LL * v23);
    a4[2] = result;
  }
  else
  {
    result = (unsigned __int8)result;
    a4[2] = v19 + 88 * (v18 + 8 * ((unsigned __int8)result + 80 * v17)) + 4160;
  }
  return result;
}
