/*
 * XREFs of ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C7AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804C741C (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::SetPosition(_DWORD *a1, Geometry::CRect *a2, unsigned int a3, __int64 a4)
{
  if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 < a1[16] - a1[14]
    || *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) < a1[17] - a1[15] )
  {
    GridLayout::Reset((GridLayout *)(a1 + 192));
  }
  CMultitaskingViewElementBase::SetPosition(a1, a2, a3, a4);
}
