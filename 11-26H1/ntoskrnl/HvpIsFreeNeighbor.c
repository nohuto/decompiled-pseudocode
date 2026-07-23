/*
 * XREFs of HvpIsFreeNeighbor @ 0x140A92FF0
 * Callers:
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpDelistFreeCell @ 0x1408E3DC8 (HvpDelistFreeCell.c)
 */

char __fastcall HvpIsFreeNeighbor(ULONG_PTR a1, _DWORD *a2, int *a3, int **a4, int a5)
{
  int *v6; // rbx
  __int64 v8; // rax
  int *v9; // rax

  v6 = (int *)((char *)a3 + *a3);
  *a4 = 0LL;
  if ( (unsigned int)((_DWORD)v6 - (_DWORD)a2) >= a2[2] || *v6 <= 0 )
  {
    v6 = a2 + 8;
    while ( v6 < a3 )
    {
      v8 = *v6;
      if ( (int)v8 > 0 )
      {
        v9 = (int *)((char *)v6 + v8);
        if ( v9 == a3 )
          goto LABEL_10;
        v6 = v9;
      }
      else
      {
        v6 = (int *)((char *)v6 - v8);
      }
    }
    return 0;
  }
LABEL_10:
  *a4 = v6;
  if ( a5 != 1 && (int)HvpMarkCellDirty(a1, (int)v6 + a2[1] - (int)a2, 1) < 0 )
    return 0;
  HvpDelistFreeCell(a1, (unsigned int)((_DWORD)v6 + a2[1] + (a5 << 31) - (_DWORD)a2), a5);
  return 1;
}
