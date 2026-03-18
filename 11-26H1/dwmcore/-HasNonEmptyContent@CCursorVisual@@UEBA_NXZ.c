/*
 * XREFs of ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1801228C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x180122B30 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasNonEmptyContent(CCursorVisual *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 87);
  v2 = 0;
  if ( v1 && *(_QWORD *)(v1 + 176) || CVisual::HasNonEmptyContent(this) )
    return 1;
  return v2;
}
