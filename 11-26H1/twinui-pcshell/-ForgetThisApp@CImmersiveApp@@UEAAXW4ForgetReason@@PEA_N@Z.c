/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1800AD230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800618BC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180064C80 (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?SendConsolidatedToAllCloakedApplicationWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800AD7B4 (-SendConsolidatedToAllCloakedApplicationWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAAXX.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800AD834 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  CImmersiveApp *v3; // rsi
  bool v4; // zf
  _QWORD *v8; // r14
  __int64 *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  LPCWSTR *v14; // rcx
  struct IApplicationPresentationLayer *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  int v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 i; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+70h] [rbp-10h]

  *a3 = 0;
  v3 = (CImmersiveApp *)(a1 - 112);
  v4 = (*(_BYTE *)(a1 + 456) & 1) == 0;
  *(_BYTE *)(a1 - 112 + 720) = 1;
  v18 = 12;
  v19 = 0LL;
  v20 = 6;
  v21 = 0LL;
  if ( v4 )
  {
    v8 = (_QWORD *)(a1 + 320);
  }
  else
  {
    v14 = (LPCWSTR *)(a1 + 504);
    v8 = (_QWORD *)(a1 + 320);
    v15 = *(struct IApplicationPresentationLayer **)(a1 + 320);
    *(_DWORD *)v14 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v14, v15);
    CImmersiveApp::_HideApplication(v3, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::SendConsolidatedToAllCloakedApplicationWindows((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
    *a3 = 1;
  }
  v9 = (__int64 *)(a1 + 600);
  v17 = 0;
  v10 = *(_QWORD *)(a1 + 600);
  if ( v10 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(v10, &v17) >= 0 )
  {
    v11 = 0;
    v23 = 0LL;
    for ( i = 0LL; v11 < v17; ++v11 )
    {
      v12 = *v9;
      v25 = 0;
      v24 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v12 + 32LL))(v12, v11, &v24) >= 0 )
      {
        if ( v25 != 5 )
          goto LABEL_17;
        v16 = v24 - *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1;
        if ( (_QWORD)v24 == *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1 )
          v16 = *((_QWORD *)&v24 + 1) - *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4;
        if ( v16 )
LABEL_17:
          (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)*v9 + 48LL))(*v9, &v24, &i);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  }
  CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)&v18, (*a3 != 0) + 1LL);
  if ( a2 == 1 )
    CImmersiveApp::_ScheduleApplicationNotification(v3, 16, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 288LL))(*v8);
}
