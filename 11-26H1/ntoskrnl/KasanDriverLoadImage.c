/*
 * XREFs of KasanDriverLoadImage @ 0x1404F5570
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 */

__int64 __fastcall KasanDriverLoadImage(__int64 a1)
{
  return KasanDriverLoadImageInternal(a1, 0LL);
}
