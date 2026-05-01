/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C3F8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005E4C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x18005E638 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1802FE150 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180300F30 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_Sdq @ 0x18005C5EC (WPP_SF_Sdq.c)
 *     WPP_SF_SdL @ 0x18005D30C (WPP_SF_SdL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        int a2,
        int a3)
{
  char v4; // di
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-18h]

  v4 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_SdL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      a2,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
      *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
      *((_DWORD *)this + 51));
    if ( *((_QWORD *)this + 21) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 240LL))(**((_QWORD **)this + 20))
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 32LL))(**((_QWORD **)this + 20));
        v7 = *((_QWORD *)this + 19);
        LODWORD(v9) = *(_DWORD *)(v7 + 584);
        WPP_SF_Sdq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 0x1Du, v8, *(const wchar_t **)(v7 + 576), v9, v6);
      }
    }
  }
  if ( *((_DWORD *)this + 51)
    || !*((_QWORD *)this + 21)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 240LL))(**((_QWORD **)this + 20))
    || *(_DWORD *)(*((_QWORD *)this + 30) + 152LL) == 1 )
  {
    return 0;
  }
  return v4;
}
