/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z @ 0x180224A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(__int64 a1, LONG *a2, LONG *a3)
{
  return CCompressedSourceBitmap::GetSize((struct _RTL_CRITICAL_SECTION *)(a1 - 32), a2, a3);
}
