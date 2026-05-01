/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AC00
 * Callers:
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180059820 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005A130 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005A8B4 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005A9B4 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C3F8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x18005DF80 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FF790 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x180301028 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AE68 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?HasNewAppViewDataInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AEA4 (-HasNewAppViewDataInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005AF04 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18005AF24 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18005B990 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // esi
  CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *v4; // rcx
  __int128 v5; // xmm0
  unsigned __int64 v6; // rdi
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  int v16; // [rsp+30h] [rbp-98h] BYREF
  int v17; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v19[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h]
  int v21; // [rsp+70h] [rbp-58h]
  _BYTE v22[16]; // [rsp+78h] [rbp-50h] BYREF
  int *v23; // [rsp+88h] [rbp-40h]
  __int64 v24; // [rsp+90h] [rbp-38h]
  unsigned int *v25; // [rsp+98h] [rbp-30h]
  __int64 v26; // [rsp+A0h] [rbp-28h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 168)
    && (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
     || CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewAppViewDataInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1))
    && CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
  {
    v1 = 1;
    if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(v4) )
      CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 240), (const struct tagRECT *)(a1 + 16));
    v5 = *(_OWORD *)(a1 + 72);
    v6 = 0LL;
    v7 = *(_OWORD *)(a1 + 88);
    v21 = *(_DWORD *)(a1 + 112);
    v19[0] = v5;
    v20 = *(_QWORD *)(a1 + 104);
    for ( v19[1] = v7; v6 < *(_QWORD *)(a1 + 168); ++v6 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
      (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v8 + 64LL))(v8, a1 + 16, v19);
      if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
        && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        v24 = 4LL;
        v23 = &v16;
        McGenEventWrite_EventWriteTransfer(
          &MICROSOFT_TWINUI_PUBLISHER_Context,
          &WindowLayoutChange_Start,
          v10,
          2LL,
          v22);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
          v12 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            McTemplateU0qq_EventWriteTransfer(
              (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
              &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
              0LL,
              v12);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v18 = v12;
              v23 = &v17;
              v17 = 0;
              v25 = &v18;
              v24 = 4LL;
              v26 = 4LL;
              McGenEventWrite_EventWriteTransfer(
                &MICROSOFT_TWINUI_PUBLISHER_Context,
                &PerfTrack_ModernApp_ResizeResponsive_Start,
                v13,
                3LL,
                v22);
            }
          }
        }
      }
    }
    v14 = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 72);
    v15 = *(_QWORD *)(a1 + 104);
    *(_OWORD *)(a1 + 48) = v14;
    *(_QWORD *)(a1 + 64) = v15;
    CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
  }
  return v1;
}
