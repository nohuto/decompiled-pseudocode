/*
 * XREFs of KasanDriverLoadImage @ 0x1404FC030
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x140523630 (KasanDriverLoadImageInternal.c)
 */

__int64 __fastcall KasanDriverLoadImage(__int64 a1)
{
  return KasanDriverLoadImageInternal(a1, 0LL);
}
