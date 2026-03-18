/*
 * XREFs of ?HasContent@CCursorVisual@@UEBA_NXZ @ 0x18020BE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCursorVisual::HasContent(CCursorVisual *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 87) || *((_QWORD *)this + 31) )
    return 1;
  return result;
}
