/*
 * XREFs of ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9A8
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026E7C0 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F2B34 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(Scrollbar::NonClient *this)
{
  return (unsigned __int8)RtlIsFunctionalityAvailable(5LL) != 0;
}
