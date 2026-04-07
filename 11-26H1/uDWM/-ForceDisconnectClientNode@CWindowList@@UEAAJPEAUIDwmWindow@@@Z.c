/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180033460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001AE6C (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  CDesktopManager *v7; // rcx
  int updated; // eax
  int v9; // r8d
  struct CWindowData *v11[2]; // [rsp+38h] [rbp-30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v11[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v11);
  v5 = v11[0];
  if ( v11[0] )
  {
    CWindowData::ForceDisconnectClientNode(v11[0]);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v5 + 17));
    updated = CDesktopManager::UpdateSceneImpl(v7, RootVisualForDesktop);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1A51u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&CommitChannel_Disconnect,
          v9,
          1,
          (__int64)v11);
      CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
