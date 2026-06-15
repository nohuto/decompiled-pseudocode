/*
 * XREFs of ??$?0$0CO@@StringReference@Internal@Windows@@QEAA@AEAY0CO@$$CBG@Z @ 0x1800AE124
 * Callers:
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x18002A560 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[46])
{
  if ( WindowsCreateStringReference(
         L"Windows.Media.Audio.SpatialAudioFormatSubtype",
         0x2Du,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
