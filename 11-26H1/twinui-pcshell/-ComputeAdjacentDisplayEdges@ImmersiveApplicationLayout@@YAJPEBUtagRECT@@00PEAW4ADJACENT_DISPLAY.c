/*
 * XREFs of ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1801C5DDC
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18051FB40 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges(
        ImmersiveApplicationLayout *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  bool v5; // r8
  LONG v6; // eax
  bool v7; // al

  a4->left = 0;
  v5 = a3->left <= *(_DWORD *)this && *(_DWORD *)this <= a2->left;
  v6 = *((_DWORD *)this + 2);
  v7 = a2->right <= v6 && v6 <= a3->right;
  if ( v5 )
  {
    if ( v7 )
      a4->left = 3;
    else
      a4->left = 1;
  }
  else if ( v7 )
  {
    a4->left = 2;
  }
  return 0LL;
}
