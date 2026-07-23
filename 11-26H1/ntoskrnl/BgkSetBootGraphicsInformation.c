/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140C55794
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x14071A7DC (BgSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgkSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  if ( byte_140E65F51 )
    return BgSetBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
