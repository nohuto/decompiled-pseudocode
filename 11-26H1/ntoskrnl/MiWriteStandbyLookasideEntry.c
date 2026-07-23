/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x1402AD730
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 *     MiClearEntireStandbyLookasideList @ 0x1402AD660 (MiClearEntireStandbyLookasideList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // ebp
  int v13; // edx
  char *v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  __int64 v20; // r9
  int j; // eax
  __int64 v22; // r11
  __int64 v23; // r11
  __int64 k; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  int i; // r10d
  int v28; // r9d
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v34; // [rsp+B8h] [rbp+20h]

  v3 = *a1;
  *a1 = a3;
  if ( v3 == -1LL || v3 >= qword_140E34930 && v3 < qword_140E34930 + 2048 )
    goto LABEL_34;
  v6 = 48 * v3;
  v7 = *(_QWORD *)(48 * v3 - 0x21FFFFFFFFF0LL);
  v8 = -9LL;
  if ( (v7 & 0x400) == 0 )
    v8 = -268435457LL;
  v9 = v7 & v8;
  v10 = v6 - 0x220000000000LL;
  if ( v3 < qword_140E34930 || v3 >= qword_140E34930 + 2048 )
  {
    if ( byte_140E3BEA6 )
    {
      v11 = (unsigned __int64)(v6 / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v11) )
        v12 = *(unsigned __int8 *)(qword_140E3D240 + 2 * v11) - 1;
      else
        v12 = 9;
    }
    else
    {
      v12 = 9;
    }
  }
  else
  {
    v12 = 9;
  }
  v13 = dword_140E2D804;
  v33 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v14 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v3 < *(_QWORD *)v14)
    || dword_140E2D800 != dword_140E2D804 && v3 >= *((_QWORD *)v14 + 2) )
  {
    for ( i = 0; ; i = v28 + 1 )
    {
      while ( 1 )
      {
        if ( v13 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
        v28 = (i + v13) >> 1;
        v14 = (char *)qword_140E2D860 + 16 * v28;
        if ( v3 >= *(_QWORD *)v14 )
          break;
        if ( !v28 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2D860, 0LL);
        v13 = v28 - 1;
      }
      if ( v28 == dword_140E2D804 || v3 < *((_QWORD *)v14 + 2) )
        break;
    }
    dword_140E2D800 = (i + v13) >> 1;
  }
  v15 = *((unsigned int *)v14 + 2);
  v16 = *(_DWORD *)(v10 + 32);
  if ( (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_77;
  if ( (*(_DWORD *)(v10 + 32) & 0x8000000) == 0 )
  {
LABEL_14:
    v17 = HIBYTE(v16) & 7;
    goto LABEL_15;
  }
  if ( v10 < 0xFFFFDE0000000000uLL )
    goto LABEL_77;
  if ( v10 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
    goto LABEL_77;
  v29 = v6 / 48;
  if ( v6 / 48 >= qword_140E34930 && v29 < qword_140E34930 + 2048 )
    goto LABEL_77;
  if ( (v16 & 0x70000) == 0x60000 )
    goto LABEL_14;
  if ( byte_140E3BEA6 && (v30 = v29 >> 9, *(_BYTE *)(qword_140E3D240 + 2 * v30)) )
  {
    if ( *(_BYTE *)(qword_140E3D240 + 2 * v30) != 10 )
      goto LABEL_14;
    v17 = 5;
  }
  else
  {
LABEL_77:
    v17 = 5;
  }
LABEL_15:
  if ( qword_140E2D868 )
    v18 = *(_BYTE *)(MiSearchChannelTable(v3) + 12);
  else
    v18 = 0;
  v32 = v18;
  if ( v12 < 9 )
  {
    if ( v12 != 8 )
    {
      v34 = 0;
      goto LABEL_20;
    }
    v19 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v6 / 48) >> 9) + 1) & 0x7F;
  }
  else
  {
    v19 = 0;
  }
  v34 = v19;
LABEL_20:
  if ( a2 != 3 )
  {
    v20 = v33;
    for ( j = 0; j < 3; ++j )
    {
      if ( j )
      {
        if ( j == 1 )
        {
          v23 = v20 + ((unsigned __int64)v17 << 9) + 12224;
        }
        else
        {
          v22 = *(_QWORD *)(v33 + 16);
          if ( v12 < 9 )
          {
            v31 = 0;
            if ( v12 == 8 )
              v31 = v34;
            v23 = *(_QWORD *)(232LL * v12 + v22 + 56320 * v15 + 14816) + ((v17 + 8LL * v31) << 9);
          }
          else
          {
            v23 = ((v17 + 110 * v15 + 8LL * v18) << 9) + v22 + 5568;
          }
          v20 = v33;
        }
      }
      else
      {
        v23 = v20 + ((unsigned __int64)v17 << 9) + 8128;
      }
      if ( j != a2 )
      {
        for ( k = 0LL; (unsigned int)k < 0x40; k = (unsigned int)(k + 1) )
        {
          if ( v3 == *(_QWORD *)(v23 + 8 * k) )
            goto LABEL_34;
        }
      }
      v18 = v32;
    }
  }
  *(_QWORD *)(v6 - 0x21FFFFFFFFF0LL) = v9;
LABEL_34:
  if ( a3 != -1LL && (a3 < qword_140E34930 || a3 >= qword_140E34930 + 2048) )
  {
    v25 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
    v26 = 8LL;
    if ( (v25 & 0x400) == 0 )
      v26 = 0x10000000LL;
    *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL) = v25 | v26;
  }
}
