/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140C4F794
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140715AEC (BgSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgkSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  if ( byte_140E65D3C )
    return BgSetBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
