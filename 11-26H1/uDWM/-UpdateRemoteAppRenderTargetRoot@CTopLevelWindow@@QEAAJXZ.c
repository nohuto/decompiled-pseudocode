/*
 * XREFs of ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x180079370
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z @ 0x18005CB38 (-EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800E58A8 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  CTopLevelWindow *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 784);
  v3 = this;
  if ( *((_QWORD *)this + 98) )
  {
    v4 = *((_QWORD *)this + 87);
    if ( v4 )
    {
      if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 5 )
      {
        if ( *(_QWORD *)(v4 + 480) && IsWCOSContainer() )
          v3 = *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)v3 + 87) + 480LL) + 24LL);
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(
               *v2,
               *(_QWORD *)(*((_QWORD *)v3 + 2) + 32LL));
        v1 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1785u, 0LL);
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL)
                                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 6)
                                                                    + 32LL));
          v1 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1786u, 0LL);
        }
      }
    }
  }
  return v1;
}
