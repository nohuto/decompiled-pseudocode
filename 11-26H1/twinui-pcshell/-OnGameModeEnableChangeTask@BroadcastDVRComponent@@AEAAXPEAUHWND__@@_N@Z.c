/*
 * XREFs of ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x180313404
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run @ 0x180314240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180034F30 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x1801C364C (-CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180314E90 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x180315368 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::OnGameModeEnableChangeTask(
        BroadcastDVRComponent *this,
        HWND hWnd,
        unsigned __int8 a3)
{
  int v3; // r12d
  struct IApplicationView *v6; // rbx
  struct BroadcastDVRActiveAppInfo *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  const char *v10; // r9
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // r8d
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-49h]
  void *v17; // [rsp+40h] [rbp-29h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-21h] BYREF
  HWND v19; // [rsp+50h] [rbp-19h] BYREF
  struct BroadcastDVRActiveAppInfo *v20; // [rsp+58h] [rbp-11h] BYREF
  std::_Ref_count_base *v21; // [rsp+60h] [rbp-9h]
  __int16 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+6Bh] [rbp+2h]
  int v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  HSTRING v27; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 dwProcessId; // [rsp+D0h] [rbp+67h] BYREF
  struct IApplicationView *v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a3;
  v6 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v30 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v20, (_QWORD *)this + 39);
  v7 = v20;
  if ( v20 && *((_BYTE *)v20 + 16) && (*(HWND *)v20 == hWnd || *((HWND *)v20 + 1) == hWnd) )
  {
LABEL_10:
    *((_DWORD *)v7 + 6) = 2 * v3 + 1;
    if ( (_BYTE)v3 )
    {
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      LOBYTE(dwProcessId) = 0;
      v17 = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(
        (__int64)this,
        (_QWORD **)v6,
        (__int64)&v22,
        (char *)&dwProcessId,
        &v19,
        &v18,
        &v17);
      v9 = GameConfigInfo::CopyTo((GameConfigInfo *)&v22, (struct BroadcastDVRActiveAppInfo *)((char *)v7 + 16));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAE8,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v9);
      BroadcastDVRComponent::EvaluateAppForGameMode((Windows::Internal::String **)this, v6, (HWND *)v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v17);
      Windows::Internal::String::~String(&v27);
      goto LABEL_24;
    }
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
    if ( !(_DWORD)dwProcessId )
      goto LABEL_24;
    v17 = 0LL;
    v18 = OpenProcess(0x1000u, 0, dwProcessId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      &v17,
      &v18);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
    v11 = v17;
    if ( !v17 )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB05,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v10);
      goto LABEL_23;
    }
    v12 = RmGameModeDisableForRegisteredProcess(v17);
    v14 = retaddr;
    if ( v12 >= 0 )
    {
      v12 = RmGameModeUnregisterProcess(v11);
      v14 = retaddr;
      if ( v12 >= 0 )
      {
        *((_DWORD *)this + 114) = 0;
        std::vector<Windows::Internal::String>::clear((char *)this + 352);
        goto LABEL_23;
      }
      v15 = 2811LL;
    }
    else
    {
      v15 = 2807LL;
    }
    wil::details::in1diag3::_Log_NtStatus(v14, (void *)v15, v13, (const char *)(unsigned int)v12, v16);
LABEL_23:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
    goto LABEL_24;
  }
  v8 = **((_QWORD **)this + 33);
  dwProcessId = v8;
  while ( v8 != *((_QWORD *)this + 33) )
  {
    std::shared_ptr<FlyoutView>::operator=(&v20, (_QWORD *)(v8 + 40));
    v7 = v20;
    if ( *(HWND *)v20 == hWnd )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v30, (_QWORD *)(v8 + 32));
      v6 = v30;
      goto LABEL_10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&dwProcessId);
    v8 = dwProcessId;
  }
LABEL_24:
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
}
