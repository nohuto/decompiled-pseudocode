/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140C55008
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14071A770 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140E65F51 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
