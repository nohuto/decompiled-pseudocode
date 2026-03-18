/*
 * XREFs of ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x1801E7E10
 * Callers:
 *     ?IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ @ 0x1801E7E40 (-IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ.c)
 * Callees:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800E03D0 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasVisibleCursor(CWindowNode *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 746) )
    return CWindowNode::HasNonEmptyContent(this) != 0;
  return v1;
}
