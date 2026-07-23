/*
 * XREFs of MiUnlinkSecondaryListStandbyPage @ 0x1402ACBC0
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MiUnlinkSecondaryListStandbyPage(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  ULONG_PTR v6; // r8
  __int64 v7; // r14
  unsigned __int64 v8; // r9
  int v9; // edx
  __int64 v10; // r15
  char *v11; // rbx
  __int64 v12; // rbx
  unsigned int v13; // ebp
  unsigned int v14; // ebp
  unsigned __int8 v15; // al
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  signed __int64 result; // rax
  unsigned __int64 v20; // r9
  volatile signed __int64 *v21; // rdi
  unsigned __int64 v22; // r11
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  signed __int64 v25; // r8
  volatile signed __int64 *v26; // r10
  unsigned __int64 v27; // rdx
  signed __int64 v28; // r8
  int i; // r10d
  int v30; // r11d
  unsigned __int8 v31; // r10
  volatile signed __int64 v32; // rcx
  signed __int64 v33; // rax
  signed __int64 v34; // rcx

  v4 = a2;
  v6 = (a1 + 0x220000000000LL) / 48;
  v7 = 48 * v6;
  v8 = 48 * v6 - 0x220000000000LL;
  v9 = dword_140E2D804;
  v10 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v11 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v6 < *(_QWORD *)v11)
    || dword_140E2D800 != dword_140E2D804 && v6 >= *((_QWORD *)v11 + 2) )
  {
    for ( i = 0; ; i = v30 + 1 )
    {
      while ( 1 )
      {
        if ( v9 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v6, 0LL, 0LL);
        v30 = (i + v9) >> 1;
        v11 = (char *)qword_140E2D860 + 16 * v30;
        if ( v6 >= *(_QWORD *)v11 )
          break;
        if ( !v30 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v6, (ULONG_PTR)v11, 0LL);
        v9 = v30 - 1;
      }
      if ( v30 == dword_140E2D804 || v6 < *((_QWORD *)v11 + 2) )
        break;
    }
    dword_140E2D800 = (i + v9) >> 1;
  }
  v12 = *((unsigned int *)v11 + 2);
  v13 = *(_DWORD *)(v8 + 32);
  if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_47;
  if ( (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 )
  {
LABEL_6:
    v14 = HIBYTE(v13) & 7;
    goto LABEL_7;
  }
  if ( v8 < 0xFFFFDE0000000000uLL
    || v8 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || v7 / 48 >= qword_140E34930 && v7 / 48 < qword_140E34930 + 2048 )
  {
LABEL_47:
    v14 = 5;
  }
  else
  {
    if ( (v13 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(48 * v6 - 0x220000000000LL) != 9 )
      goto LABEL_6;
    v14 = 5;
  }
LABEL_7:
  if ( qword_140E2D868 )
    v15 = *(_BYTE *)(MiSearchChannelTable(v6) + 12);
  else
    v15 = 0;
  v16 = *(_QWORD *)(v10 + 16);
  if ( (int)v4 < 9 )
  {
    if ( (_DWORD)v4 == 8 )
      v31 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v7 / 48) >> 9) + 1) & 0x7F;
    else
      v31 = 0;
    v17 = *(_QWORD *)(56320 * v12 + v16 + 232 * v4 + 14824) + 88 * (v14 + 8LL * v31);
  }
  else
  {
    v17 = v16 + 88 * (v14 + 8 * (v15 + 80 * v12)) + 4160;
  }
  v18 = (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0xF80000000000000uLL) >> 20);
  result = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL;
  v20 = result | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x1FFFFF) << 19);
  if ( v18 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v17 + 8) = v20;
  }
  else
  {
    v21 = (volatile signed __int64 *)(48 * v18 - 0x21FFFFFFFFE8LL);
    v22 = v20 << 40;
    if ( a3 )
    {
      *(_QWORD *)(48 * v18 - 0x21FFFFFFFFE8LL) = v22 ^ (*v21 ^ v22) & 0xF80000FFFFFFFFFFuLL;
    }
    else
    {
      v32 = *v21;
      v33 = _InterlockedCompareExchange64(v21, v22 ^ (*v21 ^ v22) & 0xF80000FFFFFFFFFFuLL, *v21);
      if ( v32 != v33 )
      {
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange64(v21, v22 ^ (v33 ^ v22) & 0xF80000FFFFFFFFFFuLL, v33);
        }
        while ( v34 != v33 );
      }
    }
    result = 0xFFFFDE0000000024uLL;
    *(_DWORD *)(48 * v18 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v18 - 0x21FFFFFFFFDCLL) & 0xFFE00000 | (v20 >> 19);
  }
  if ( v20 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)v17 = v18;
  }
  else
  {
    v23 = 6 * v20;
    *(_QWORD *)(8 * v23 - 0x220000000000LL) = *(_QWORD *)(8 * v23 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v18 << 40);
    *(_DWORD *)(8 * v23 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(8 * v23 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v18 >> 24) << 21);
    v24 = v18 >> 35;
    v25 = *(_QWORD *)(8 * v23 - 0x21FFFFFFFFD8LL);
    v26 = (volatile signed __int64 *)(8 * v23 - 0x21FFFFFFFFD8LL);
    result = _InterlockedCompareExchange64(v26, v25 & 0xF07FFFFFFFFFFFFFuLL | (v24 << 55), v25);
    if ( v25 != result )
    {
      v27 = v24 << 55;
      do
      {
        v28 = result;
        result = _InterlockedCompareExchange64(v26, v27 ^ result & 0xF07FFFFFFFFFFFFFuLL, result);
      }
      while ( v28 != result );
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(v17 + 16));
  if ( (_DWORD)v4 == 8 )
    _InterlockedDecrement64((volatile signed __int64 *)(v10 + 22080));
  return result;
}
