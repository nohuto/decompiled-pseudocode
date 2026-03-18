/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x14016BBEC
 * Callers:
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140080F3C (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 */

_DWORD *__fastcall RFONTOBJ::GetRealizationInfo(int **a1, _DWORD *a2, int *a3)
{
  __int64 v6; // r11
  int v7; // r8d
  __int64 v8; // r9
  char v9; // al
  int v10; // ebp
  __int64 v11; // rbx
  __int16 v12; // r11
  unsigned __int16 v13; // dx
  unsigned int v14; // r8d
  __int16 v15; // ax
  _DWORD *v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 *v21; // rsi
  __int64 v22; // rax
  int v23; // ecx
  __int16 v24; // ax
  unsigned int i; // r8d
  __int64 v26; // rcx
  unsigned int v27; // r11d
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx

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
      v21 = (__int64 *)(*(_QWORD *)v11 + 224LL + 8LL * v13);
      do
      {
        v22 = *v21--;
        v23 = *(_DWORD *)(v22 + 12);
        v24 = v12 - 1;
        if ( (v23 & 0x100) == 0 )
          v24 = v12;
        v12 = v24;
        --v13;
      }
      while ( v13 );
    }
    v14 = (*a1)[3];
    v15 = (v14 >> 13) & 1 | 2;
    a3[4] = *(_DWORD *)(*(_QWORD *)v11 + 36LL);
    *((_WORD *)a3 + 10) = v12 - 1;
    if ( (v14 & 0x4000) == 0 )
      v15 = (v14 >> 13) & 1;
    *((_WORD *)a3 + 11) = v15;
    if ( v10 != 24 )
    {
      v16 = *(_DWORD **)(*((_QWORD *)*a1 + 15) + 32LL);
      if ( (v16[12] & 0x4000001) != 0
        && v16[1] > 0xCu
        && (v17 = (unsigned int)v16[51], (_DWORD)v17)
        && (v18 = (_DWORD *)((char *)v16 + v17), (v19 = v18[1]) != 0)
        && (*v18 == 134248052 || *v18 == 134248035) )
      {
        a3[7] = v19;
        for ( i = 0; i < v18[1]; a3[v26 + 8] = v18[v26 + 2] )
          v26 = i++;
        v27 = 0;
        v28 = *(_QWORD *)(*((_QWORD *)*a1 + 15) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)*a1 + 15) + 32LL) + 208LL);
        a3[25] = *(_DWORD *)(v28 + 4);
        if ( *(_DWORD *)(v28 + 4) )
        {
          do
          {
            v29 = v27++;
            v30 = 5 * v29;
            *(_OWORD *)&a3[2 * v30 + 26] = *(_OWORD *)(v28 + 40 * v29 + 8);
            *(_OWORD *)&a3[2 * v30 + 30] = *(_OWORD *)(v28 + 40 * v29 + 24);
            *(_QWORD *)&a3[2 * v30 + 34] = *(_QWORD *)(v28 + 40 * v29 + 40);
          }
          while ( v27 < *(_DWORD *)(v28 + 4) );
        }
        a3[186] = v18[18];
        if ( v18[1] )
        {
          do
          {
            a3[v8 + 187] = v18[v8 + 19];
            v8 = (unsigned int)(v8 + 1);
          }
          while ( (unsigned int)v8 < v18[1] );
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
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a2, 1);
  return a2;
}
