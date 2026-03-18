/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x180122900
 * Callers:
 *     <none>
 * Callees:
 *     ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x180122960 (-HasSpriteContent@CWindowNode@@AEBA_NXZ.c)
 *     ?HasFlipExContent@CWindowNode@@AEBA_NXZ @ 0x180122A58 (-HasFlipExContent@CWindowNode@@AEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x180122B30 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180122BD0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasSingleD2DBitmapOrPrimitiveGroupInternal(CWindowNode *this)
{
  bool HasSpriteContent; // bl
  bool HasFlip; // al

  HasSpriteContent = CWindowNode::HasSpriteContent(this);
  HasFlip = CWindowNode::HasFlipExContent(this);
  if ( HasSpriteContent )
  {
    if ( !HasFlip )
      return !CVisual::HasNonEmptyContent(this);
    return 0;
  }
  else
  {
    if ( HasFlip )
      return !CVisual::HasNonEmptyContent(this);
    return CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(this);
  }
}
