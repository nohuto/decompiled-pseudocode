/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C5D6C
 * Callers:
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C2D54 (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(int **a1, __int64 a2, int *a3)
{
  __int64 v6; // r11
  int v7; // r8d
  __int64 v8; // r9
  char v9; // al
  int v10; // ebp
  __int64 v11; // rbx
  __int16 v12; // r11
  unsigned __int16 v13; // dx
  __int64 *v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  __int16 v17; // ax
  unsigned int v18; // r8d
  __int16 v19; // ax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  char v22; // al
  int v24; // eax
  unsigned int v25; // r8d
  char *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r11d
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx

  v6 = *((_QWORD *)*a1 + 16);
  v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*a1 + 15) + 32LL) + 48LL);
  v8 = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 4;
    if ( (v7 & 4) != 0 )
    {
      v9 = 2;
    }
    else if ( v7 >= 0 || (v7 & 0x4000000) != 0 )
    {
      v9 = 3;
    }
  }
  *((_BYTE *)a3 + 4) = v9;
  a3[2] = **a1;
  a3[3] = *(_DWORD *)(v6 + 148);
  *((_WORD *)a3 + 3) = 0;
  *((_BYTE *)a3 + 5) = (((*a1)[3] & 0x40000000) != 0) + 1;
  v10 = *a3;
  if ( *a3 != 16 )
  {
    v11 = (__int64)(*a1 + 32);
    v12 = *(_WORD *)(*((_QWORD *)*a1 + 15) + 8LL);
    v13 = v12 - 1;
    if ( v12 != 1 )
    {
      v14 = (__int64 *)(*(_QWORD *)v11 + 224LL + 8LL * v13);
      do
      {
        v15 = *v14--;
        v16 = *(_DWORD *)(v15 + 12);
        v17 = v12 - 1;
        if ( (v16 & 0x100) == 0 )
          v17 = v12;
        v12 = v17;
        --v13;
      }
      while ( v13 );
    }
    v18 = (*a1)[3];
    v19 = (v18 >> 13) & 1 | 2;
    a3[4] = *(_DWORD *)(*(_QWORD *)v11 + 36LL);
    *((_WORD *)a3 + 10) = v12 - 1;
    if ( (v18 & 0x4000) == 0 )
      v19 = (v18 >> 13) & 1;
    *((_WORD *)a3 + 11) = v19;
    if ( v10 != 24 )
    {
      v20 = *(_DWORD **)(*((_QWORD *)*a1 + 15) + 32LL);
      if ( (v20[12] & 0x4000001) != 0
        && v20[1] > 0xCu
        && (v21 = (unsigned int)v20[51], (_DWORD)v21)
        && (!*(_DWORD *)((char *)v20 + v21 + 4)
         || (v24 = *(_DWORD *)((char *)v20 + v21), v24 != 134248052) && v24 != 134248035
          ? (v22 = 0)
          : (v22 = 1),
            v22) )
      {
        v25 = 0;
        v26 = (char *)v20 + (unsigned int)v20[51];
        a3[7] = *((_DWORD *)v26 + 1);
        if ( *((_DWORD *)v26 + 1) )
        {
          do
          {
            v27 = v25++;
            a3[v27 + 8] = *(_DWORD *)&v26[4 * v27 + 8];
          }
          while ( v25 < *((_DWORD *)v26 + 1) );
        }
        v28 = 0;
        v29 = *(_QWORD *)(*((_QWORD *)*a1 + 15) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)*a1 + 15) + 32LL) + 208LL);
        a3[25] = *(_DWORD *)(v29 + 4);
        if ( *(_DWORD *)(v29 + 4) )
        {
          do
          {
            v30 = v28++;
            v31 = 5 * v30;
            *(_OWORD *)&a3[2 * v31 + 26] = *(_OWORD *)(v29 + 40 * v30 + 8);
            *(_OWORD *)&a3[2 * v31 + 30] = *(_OWORD *)(v29 + 40 * v30 + 24);
            *(_QWORD *)&a3[2 * v31 + 34] = *(_QWORD *)(v29 + 40 * v30 + 40);
          }
          while ( v28 < *(_DWORD *)(v29 + 4) );
        }
        a3[186] = *((_DWORD *)v26 + 18);
        if ( *((_DWORD *)v26 + 1) )
        {
          do
          {
            a3[v8 + 187] = *(_DWORD *)&v26[4 * v8 + 76];
            v8 = (unsigned int)(v8 + 1);
          }
          while ( (unsigned int)v8 < *((_DWORD *)v26 + 1) );
        }
      }
      else
      {
        a3[7] = 0;
        a3[25] = 0;
        a3[186] = 0;
      }
    }
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a2, 1LL);
  return a2;
}
