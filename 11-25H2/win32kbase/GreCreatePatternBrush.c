/*
 * XREFs of GreCreatePatternBrush @ 0x140159A50
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HSURF a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
