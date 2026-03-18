/*
 * XREFs of ?vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z @ 0x1401FB71C
 * Callers:
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
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
  const struct _INDEX_LONG *v6; // r11
  int v7; // ebx
  const struct _SPAN *v8; // r9
  const struct _INDEX_LONG *v9; // r10
  const struct _SPAN *v12; // rsi
  const struct _INDEX_LONG *v13; // rdi
  int v14; // edx
  int v15; // eax
  int v16; // eax
  const struct _SPAN *v17; // rdx
  int v18; // eax

  v6 = a1;
  v7 = 2 * (a6 / 2);
  v8 = (const struct _SPAN *)((char *)a3 + 8 * a4);
  v9 = (const struct _INDEX_LONG *)((char *)a1 + 4 * (a2 & 0xFFFFFFFE));
  if ( a1 < v9 )
  {
    do
    {
      v12 = a3;
      v13 = v6;
      if ( a3 >= v8 )
        goto LABEL_11;
      if ( v7 < 0 )
        break;
      v14 = *(_DWORD *)a3;
      v15 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 >= *(_DWORD *)a3 )
      {
        a3 = (const struct _SPAN *)((char *)a3 + 8);
        v13 = v12;
      }
      else
      {
        v6 = (const struct _INDEX_LONG *)((char *)v6 + 8);
      }
      if ( v15 >= v14 )
        v15 = v14;
      v7 -= 2;
      *a5 = v15;
      a5[1] = *((_DWORD *)v13 + 1);
      a5 += 2;
    }
    while ( v6 < v9 );
    while ( v6 < v9 )
    {
LABEL_11:
      if ( v7 < 2 )
        break;
      v16 = *(_DWORD *)v6;
      v6 = (const struct _INDEX_LONG *)((char *)v6 + 4);
      *a5++ = v16;
      --v7;
    }
  }
  while ( a3 < v8 )
  {
    v17 = a3;
    if ( v7 < 2 )
      break;
    v18 = *(_DWORD *)a3;
    a3 = (const struct _SPAN *)((char *)a3 + 8);
    *a5 = v18;
    a5[1] = *((_DWORD *)v17 + 1);
    a5 += 2;
    v7 -= 2;
  }
}
