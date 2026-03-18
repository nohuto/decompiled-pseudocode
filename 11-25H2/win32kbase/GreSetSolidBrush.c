/*
 * XREFs of GreSetSolidBrush @ 0x140070E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, unsigned int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
