/*
 * XREFs of GreCreateSolidBrush @ 0x140034CE0
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL);
}
