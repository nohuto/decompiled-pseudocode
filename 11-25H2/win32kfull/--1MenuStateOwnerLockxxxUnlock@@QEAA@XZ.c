/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNEndMenuStateInternal @ 0x14015D8C0 (xxxMNEndMenuStateInternal.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
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
