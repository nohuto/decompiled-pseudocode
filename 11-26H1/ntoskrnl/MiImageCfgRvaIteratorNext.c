/*
 * XREFs of MiImageCfgRvaIteratorNext @ 0x140A36230
 * Callers:
 *     MiImageCfgRvaIteratorFirst @ 0x140A36200 (MiImageCfgRvaIteratorFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageCfgRvaIteratorNext(_DWORD *a1, unsigned int **a2, int *a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int *v9; // rcx
  int v10; // ebp
  char v11; // r14
  unsigned int v12; // r8d
  char v13; // r8
  bool v14; // zf
  int v15; // eax
  int v16; // r8d
  bool v17; // bp

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v7 = 0;
  if ( !v3 )
    return 0LL;
  v8 = (unsigned int)a1[17];
  v9 = *a2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_14;
    v10 = a1[9];
    v11 = 0;
    v12 = a1[8];
    *a3 = 0;
    if ( *v9 <= v7 || *v9 >= v12 )
      break;
    v13 = 1;
    if ( v10 )
    {
      v13 = (v10 & 1) == 0;
      if ( (v10 & 2) != 0 )
        v13 |= 2u;
    }
    v7 = *v9;
    if ( (unsigned int)v8 <= 4 )
    {
      v17 = 0;
LABEL_9:
      *a3 = 1;
      v16 = 1;
      goto LABEL_10;
    }
    v11 = *((_BYTE *)v9 + 4);
    v14 = (unsigned __int8)(v13 & v11) == 0;
    v15 = (unsigned __int8)(v13 & v11);
    v16 = 0;
    v17 = !v14;
    if ( !v15 )
      goto LABEL_9;
LABEL_10:
    if ( (v11 & 2) != 0 )
      *a3 = v16 | 4;
    v9 = (unsigned int *)((char *)v9 + v8);
    --v3;
    if ( !v17 )
    {
      v4 = v7;
LABEL_14:
      *((_DWORD *)a2 + 2) = v3;
      *a2 = v9;
      return v4;
    }
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[56] = 14;
  return v4;
}
