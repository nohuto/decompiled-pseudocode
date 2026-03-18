/*
 * XREFs of ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1402B5210
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401EFA94 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402B50C0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B5328 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectsOverlap(int *a1, int *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // r10d
  BOOL v5; // r9d
  int v6; // edi
  int v7; // esi
  BOOL v8; // eax
  BOOL v9; // r10d
  int v10; // r9d
  BOOL v11; // eax
  int v13; // eax

  v3 = *a2;
  v4 = a1[2];
  v5 = v4 > *a2 && *a1 < a2[2];
  v6 = a2[1];
  v7 = a1[3];
  v8 = v7 > v6 && a1[1] < a2[3];
  if ( !v5 || !v8 )
    return 0LL;
  v9 = *a1 >= v3 && v4 <= a2[2];
  v10 = a1[1];
  v11 = v10 >= v6 && v7 <= a2[3];
  if ( v9 )
  {
    if ( v11 )
      return 1LL;
    if ( v6 > v10 && a2[3] < v7 )
      return 3LL;
    if ( a3 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      v13 = a2[1];
      if ( a1[1] < v13 )
        *(_DWORD *)(a3 + 12) = v13;
      else
        *(_DWORD *)(a3 + 4) = a2[3];
    }
  }
  else
  {
    if ( !v11 || v3 > *a1 && a2[2] < a1[2] )
      return 3LL;
    if ( a3 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      if ( *a1 < *a2 )
        *(_DWORD *)(a3 + 8) = *a2;
      else
        *(_DWORD *)a3 = a2[2];
    }
  }
  return 2LL;
}
