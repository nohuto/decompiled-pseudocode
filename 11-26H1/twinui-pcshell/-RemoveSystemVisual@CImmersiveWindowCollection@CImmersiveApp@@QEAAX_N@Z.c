/*
 * XREFs of ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C3F8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18005DBAC (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005E4C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x18005E638 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1802FE150 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1802FE9F4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180300F30 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18004583C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE4C (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D120 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     WPP_SF_Sd @ 0x1802090C8 (WPP_SF_Sd.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  volatile int *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h]
  _QWORD *v15; // [rsp+58h] [rbp+20h]

  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Sd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      21,
      (unsigned int)&WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
      *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
      *(_DWORD *)(*((_QWORD *)this + 19) + 584LL));
  }
  if ( *((_DWORD *)this + 50) == 2 )
    *((_DWORD *)this + 50) = 0;
  if ( *((_QWORD *)this + 21) )
    (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 72LL))(**((_QWORD **)this + 20));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18), 0LL);
  CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
  CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
  v5 = *((_QWORD *)this + 30);
  if ( *(_BYTE *)(v5 + 128) != 1 )
  {
    *(_BYTE *)(v5 + 128) = 1;
    v14 = v5;
    v6 = *(_QWORD *)(v5 + 64);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_11;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v2);
LABEL_11:
    v13 = v5;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(&v13, v2, v3, v4);
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v8);
      v9[6] = v5;
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v9 + 6, v10, v11, v12);
      *v9 = off_18072F578;
      v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    }
    v15 = v9;
    if ( v9
      && (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v5 + 120) + 232LL))(*(_QWORD *)(v5 + 120), v9) >= 0 )
    {
      *(_BYTE *)(v5 + 129) = 1;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v5);
  }
}
