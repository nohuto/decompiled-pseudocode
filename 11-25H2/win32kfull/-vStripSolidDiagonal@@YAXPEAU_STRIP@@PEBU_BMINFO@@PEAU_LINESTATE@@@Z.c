/*
 * XREFs of ?vStripSolidDiagonal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401A9960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidDiagonal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  int v5; // r10d
  int *v6; // r11
  int v7; // ebp
  int v8; // r14d
  int v9; // r9d
  char *v10; // r15
  int v11; // ecx
  int v12; // r8d
  int v13; // r10d
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v9 = 4 * *((_DWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v11 = v9;
  do
  {
    v12 = *(_DWORD *)v3;
    while ( 1 )
    {
      *v6 = v7 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5) ^ *v6 & (v8 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5));
      if ( !--v12 )
        break;
      v13 = v5 + 1;
      v14 = v13;
      v5 = *((_DWORD *)a2 + 7) & v13;
      v6 = (int *)((char *)v6 + 4 * (v14 >> *((_DWORD *)a2 + 6)) + v11);
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v17 = v11;
    }
    else
    {
      v15 = v5 + 1;
      v16 = v15;
      v5 = *((_DWORD *)a2 + 7) & v15;
      v17 = 4 * (v16 >> *((_DWORD *)a2 + 6));
    }
    v6 = (int *)((char *)v6 + v17);
    v3 += 4;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
}
