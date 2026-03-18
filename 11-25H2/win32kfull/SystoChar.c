/*
 * XREFs of SystoChar @ 0x14016EA68
 * Callers:
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystoChar(unsigned int a1, int a2)
{
  if ( a1 - 260 <= 3 && (a2 & 0x20000000) == 0 )
    a1 -= 4;
  return a1;
}
