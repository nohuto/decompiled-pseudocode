/*
 * XREFs of ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1801D080C
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1804FDB40 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges(
        ImmersiveApplicationLayout *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  bool v4; // r10
  LONG v5; // eax
  bool v6; // al

  a4->left = 0;
  v4 = a3->left <= *(_DWORD *)this && *(_DWORD *)this <= a2->left;
  v5 = *((_DWORD *)this + 2);
  v6 = a2->right <= v5 && v5 <= a3->right;
  if ( v4 )
  {
    if ( v6 )
      a4->left = 3;
    else
      a4->left = 1;
  }
  else if ( v6 )
  {
    a4->left = 2;
  }
  return 0LL;
}
