/*
 * XREFs of ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x18039CC64
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18039B280 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D1180 (-InternalRelease@-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18036960C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_18036960C.c)
 *     ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18039C0B0 (-_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppExperienceManager::_RegisterMessages(SearchAppExperienceManager *this)
{
  const struct _GUID *v2; // rdx
  const struct _GUID *v3; // r8
  int v4; // eax
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  UINT v8; // eax
  const char *v9; // r9
  __int64 v10; // rdx
  UINT v11; // eax
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  void *v16; // [rsp+70h] [rbp+30h] BYREF
  SearchAppExperienceManager *v17; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v4 = SearchAppExperienceManager::_ImmersiveShellQueryService(this, v2, v3, &v16);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    *(_QWORD *)&v13 = SearchAppExperienceManager::_OnMessageHandler;
    DWORD2(v13) = 0;
    v17 = this;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v15);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,SearchAppExperienceManager *,long (SearchAppExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v15,
           (__int64 *)&v17,
           &v13);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
             v16,
             0LL,
             (v15 + 8) & -(__int64)(v15 != 0),
             (char *)this + 440);
      LastError = v6;
      if ( v6 >= 0 )
      {
        v8 = RegisterWindowMessageW(L"SearchAppExperienceManager.ResetActivationTimeoutPolicyMessage");
        *((_DWORD *)this + 114) = v8;
        if ( v8 )
        {
          v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 v8,
                 (v15 + 8) & -(__int64)(v15 != 0),
                 (char *)this + 460);
          LastError = v6;
          if ( v6 < 0 )
          {
            v7 = 1143LL;
            goto LABEL_5;
          }
          v11 = RegisterWindowMessageW(L"SearchAppExperienceManager.DeferredSuspensionMessage");
          *((_DWORD *)this + 118) = v11;
          if ( v11 )
          {
            v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
                   v16,
                   v11,
                   (v15 + 8) & -(__int64)(v15 != 0),
                   (char *)this + 476);
            LastError = v6;
            if ( v6 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v15);
              LastError = 0;
              goto LABEL_19;
            }
            v7 = 1148LL;
            goto LABEL_5;
          }
          v10 = 1147LL;
        }
        else
        {
          v10 = 1142LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v10,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                      v9);
        goto LABEL_6;
      }
      v7 = 1138LL;
    }
    else
    {
      v7 = 1132LL;
    }
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(&v15);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x469,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return LastError;
}
