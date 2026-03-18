/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140C4F008
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140715A80 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140E65D3C )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
