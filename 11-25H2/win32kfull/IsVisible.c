/*
 * XREFs of IsVisible @ 0x140053FD8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x140157D00 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxEnableWndSBArrows @ 0x1401E8CE0 (xxxEnableWndSBArrows.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     RestoreSpb @ 0x1402B0E30 (RestoreSpb.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1402F3980 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 i; // rdx
  __int64 v2; // rax
  char v3; // r8

  for ( i = a1; i; i = *(_QWORD *)(i + 104) )
  {
    v2 = *(_QWORD *)(i + 40);
    v3 = *(_BYTE *)(v2 + 31);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && i != a1 )
      return 0LL;
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  return 1LL;
}
