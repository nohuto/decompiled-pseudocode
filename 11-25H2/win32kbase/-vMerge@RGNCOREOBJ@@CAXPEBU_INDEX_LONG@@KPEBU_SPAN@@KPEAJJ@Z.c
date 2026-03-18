/*
 * XREFs of ?vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z @ 0x1401D2630
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNCOREOBJ::vMerge(
        const struct _INDEX_LONG *a1,
        int a2,
        const struct _SPAN *a3,
        unsigned int a4,
        int *a5,
        int a6)
{
  int *v6; // r11
  int v7; // ebx
  const struct _SPAN *v8; // rdi
  int *v9; // r10
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v6 = (int *)a1;
  v7 = 2 * (a6 / 2);
  v8 = (const struct _SPAN *)((char *)a3 + 8 * a4);
  v9 = (int *)((char *)a1 + 4 * (a2 & 0xFFFFFFFE));
  if ( a1 < (const struct _INDEX_LONG *)v9 )
  {
    do
    {
      if ( a3 >= v8 )
        goto LABEL_9;
      if ( v7 < 0 )
        break;
      if ( *v6 >= *(_DWORD *)a3 )
      {
        *a5 = *(_DWORD *)a3;
        v12 = *((_DWORD *)a3 + 1);
        a3 = (const struct _SPAN *)((char *)a3 + 8);
      }
      else
      {
        *a5 = *v6;
        v12 = v6[1];
        v6 += 2;
      }
      a5[1] = v12;
      v7 -= 2;
      a5 += 2;
    }
    while ( v6 < v9 );
    while ( v6 < v9 )
    {
LABEL_9:
      if ( v7 < 2 )
        break;
      v13 = *v6++;
      *a5++ = v13;
      --v7;
    }
  }
  while ( a3 < v8 && v7 >= 2 )
  {
    *a5 = *(_DWORD *)a3;
    v14 = *((_DWORD *)a3 + 1);
    a3 = (const struct _SPAN *)((char *)a3 + 8);
    a5[1] = v14;
    a5 += 2;
    v7 -= 2;
  }
}
