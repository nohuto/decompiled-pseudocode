/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180089470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180089E4C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180089E7C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180137CCC (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1801D33E4 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?SendConsolidatedToAllCloakedApplicationWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1801EC8B8 (-SendConsolidatedToAllCloakedApplicationWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAAXX.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  bool v6; // zf
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  struct IApplicationPresentationLayer *v11; // rdx
  CImmersiveApp::CloakType *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-60h] BYREF
  int v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 i; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+70h] [rbp-10h]

  v16 = 0LL;
  v18 = 0LL;
  *a3 = 0;
  v6 = (*(_BYTE *)(a1 + 456) & 1) == 0;
  v15 = 12;
  v17 = 6;
  *(_BYTE *)(a1 + 608) = 1;
  if ( !v6 )
  {
    v11 = *(struct IApplicationPresentationLayer **)(a1 + 320);
    v12 = (CImmersiveApp::CloakType *)(a1 + 504);
    *(_DWORD *)v12 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v12, v11);
    CImmersiveApp::_HideApplication(a1 - 112, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::SendConsolidatedToAllCloakedApplicationWindows((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
    *a3 = 1;
  }
  v14 = 0;
  v7 = *(_QWORD *)(a1 + 600);
  if ( v7 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v14) >= 0 )
  {
    v8 = 0;
    v20 = 0LL;
    for ( i = 0LL; v8 < v14; ++v8 )
    {
      v9 = *(_QWORD *)(a1 + 600);
      v22 = 0;
      v21 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v9 + 32LL))(v9, v8, &v21) >= 0 )
      {
        if ( v22 != 5 )
          goto LABEL_16;
        v13 = v21 - *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1;
        if ( (_QWORD)v21 == *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1 )
          v13 = *((_QWORD *)&v21 + 1) - *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4;
        if ( v13 )
LABEL_16:
          (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)(a1 + 600) + 48LL))(
            *(_QWORD *)(a1 + 600),
            &v21,
            &i);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 600));
  }
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)&v15,
    (*a3 != 0) + 1LL);
  if ( a2 == 1 )
    CImmersiveApp::_ScheduleApplicationNotification(a1 - 112, 16LL);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 288LL))(*(_QWORD *)(a1 + 320));
}
