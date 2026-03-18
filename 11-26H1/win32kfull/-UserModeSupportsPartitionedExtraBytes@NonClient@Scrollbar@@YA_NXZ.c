/*
 * XREFs of ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1401D90DC
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1401D9058 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x140302274 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(Scrollbar::NonClient *this)
{
  return (unsigned __int8)RtlIsFunctionalityAvailable(5LL) != 0;
}
