/*
 * XREFs of ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x180261184
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18018BC24 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::SetPixelSnappingEnabled(CVisual *this, char a2)
{
  if ( ((*((_BYTE *)this + 101) & 0x20) != 0) != a2 )
  {
    *((_BYTE *)this + 101) = (32 * a2) | *((_BYTE *)this + 101) & 0xDF;
    CVisual::OnInnerTransformChanged(this);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
}
