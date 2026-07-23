/*
 * XREFs of sub_1409EC140 @ 0x1409EC140
 * Callers:
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 *     sub_1409EC45C @ 0x1409EC45C (sub_1409EC45C.c)
 *     sub_1409EC554 @ 0x1409EC554 (sub_1409EC554.c)
 *     sub_1409EC64C @ 0x1409EC64C (sub_1409EC64C.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B14A0C (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     sub_140B3BEB4 @ 0x140B3BEB4 (sub_140B3BEB4.c)
 */

signed __int64 __fastcall sub_1409EC140(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140B3BEB4(a1);
  }
  return v1;
}
