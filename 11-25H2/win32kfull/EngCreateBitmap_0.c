/*
 * XREFs of EngCreateBitmap_0 @ 0x140270610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HBITMAP __stdcall EngCreateBitmap_0(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  return EngCreateBitmap(sizl, lWidth, iFormat, fl, pvBits);
}
