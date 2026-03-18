/*
 * XREFs of sub_1409EF970 @ 0x1409EF970
 * Callers:
 *     sub_14088063C @ 0x14088063C (sub_14088063C.c)
 *     sub_1409EF5F0 @ 0x1409EF5F0 (sub_1409EF5F0.c)
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 *     sub_1409EFC8C @ 0x1409EFC8C (sub_1409EFC8C.c)
 *     sub_1409EFD84 @ 0x1409EFD84 (sub_1409EFD84.c)
 *     sub_1409EFE7C @ 0x1409EFE7C (sub_1409EFE7C.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B12C8C (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_140B39CA4 @ 0x140B39CA4 (sub_140B39CA4.c)
 */

signed __int64 __fastcall sub_1409EF970(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140B39CA4(a1);
  }
  return v1;
}
