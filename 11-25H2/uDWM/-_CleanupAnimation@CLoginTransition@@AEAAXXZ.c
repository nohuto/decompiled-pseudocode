/*
 * XREFs of ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180022B18
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002246C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180022AEC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015874 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800158D0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044FEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18007D7AC (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

void __fastcall CLoginTransition::_CleanupAnimation(CLoginTransition *this)
{
  CAnimationEngine *v2; // rax
  int v3; // r8d
  CAnimationEngine *v4; // rdi
  CContainerVisual *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = CDesktopManager::AcquireAnimationEngine();
  v4 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v4, *((_DWORD *)this + 16));
    CAnimationEngine::Release(v4);
  }
  if ( *((_QWORD *)this + 1) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 4), &stru_1800FDDB8);
  if ( *((_QWORD *)this + 2) )
    CVisual::SetOffset(*((struct tagPOINT **)this + 5), &stru_1800FDDB8);
  v5 = (CContainerVisual *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    CContainerVisual::RemoveChild(
      v5,
      (struct CVisualProxy **)((*((_QWORD *)this + 1) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                              + 1) >> 64)));
    CContainerVisual::RemoveChild(
      *((CContainerVisual **)this + 6),
      (struct CVisualProxy **)((*((_QWORD *)this + 2) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                              + 2) >> 64)));
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                         *((_QWORD *)this + 10));
    CContainerVisual::RemoveChild(RenderTargetRootVisualForDesktop, *((struct CVisualProxy ***)this + 6));
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release((CBaseObject *)(v6 + 8));
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    CBaseObject::Release((CBaseObject *)(v7 + 8));
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoginTransition_Stop,
      v3,
      1,
      (__int64)v12);
}
