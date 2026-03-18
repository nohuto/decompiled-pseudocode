/*
 * XREFs of ?IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ @ 0x1801E7E40
 * Callers:
 *     <none>
 * Callees:
 *     ?HasVisibleCursor@CWindowNode@@UEBA_NXZ @ 0x1801E7E10 (-HasVisibleCursor@CWindowNode@@UEBA_NXZ.c)
 */

char __fastcall CWindowNode::IsLegacyInvertedCursor(CWindowNode *this)
{
  bool HasVisibleCursor; // al
  char v3; // dl

  HasVisibleCursor = CWindowNode::HasVisibleCursor(this);
  v3 = 0;
  if ( HasVisibleCursor && (*((_DWORD *)this + 24) & 0x4000000) != 0 )
    return *((_DWORD *)this + 50) == 2;
  return v3;
}
