/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(MenuStateOwnerLockxxxUnlock *this)
{
  __int64 v1; // rcx
  int v3; // r8d

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 40))-- == 1 )
    {
      v3 = *(_DWORD *)(v1 + 8);
      if ( ((v3 & 4) == 0 || (**(_DWORD **)v1 & 0x8000) != 0) && (v3 & 0x1000000) != 0 )
        xxxMNEndMenuState(v1);
    }
  }
}
