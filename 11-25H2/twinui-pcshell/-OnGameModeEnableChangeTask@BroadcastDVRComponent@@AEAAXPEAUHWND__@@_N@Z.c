/*
 * XREFs of ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x18031725C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run @ 0x180318080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B0C98 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x1801CC9B8 (-CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180318C50 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803190C8 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::OnGameModeEnableChangeTask(
        BroadcastDVRComponent *this,
        HWND hWnd,
        unsigned __int8 a3)
{
  int v3; // r15d
  struct IApplicationView *v6; // rbx
  struct BroadcastDVRActiveAppInfo *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  int v10; // eax
  const char *v11; // r9
  void *v12; // rbx
  int v13; // eax
  unsigned int v14; // r8d
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-39h]
  void *v18; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-11h] BYREF
  HWND v20; // [rsp+50h] [rbp-9h] BYREF
  struct BroadcastDVRActiveAppInfo *v21; // [rsp+58h] [rbp-1h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp+7h]
  __int16 v23; // [rsp+68h] [rbp+Fh] BYREF
  int v24; // [rsp+6Bh] [rbp+12h]
  int v25; // [rsp+70h] [rbp+17h]
  __int64 v26; // [rsp+78h] [rbp+1Fh]
  __int64 v27; // [rsp+80h] [rbp+27h]
  HSTRING v28; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 dwProcessId; // [rsp+C0h] [rbp+67h] BYREF
  struct IApplicationView *v31; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a3;
  v6 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v31 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v21, (_QWORD *)this + 39);
  v7 = v21;
  if ( v21 && *((_BYTE *)v21 + 16) && (*(HWND *)v21 == hWnd || *((HWND *)v21 + 1) == hWnd) )
  {
LABEL_10:
    *((_DWORD *)v7 + 6) = 2 * v3 + 1;
    if ( (_BYTE)v3 )
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      LOBYTE(dwProcessId) = 0;
      v18 = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(
        (__int64)this,
        (_QWORD **)v6,
        (__int64)&v23,
        (char *)&dwProcessId,
        &v20,
        &v19,
        &v18);
      v10 = GameConfigInfo::CopyTo((GameConfigInfo *)&v23, (struct BroadcastDVRActiveAppInfo *)((char *)v7 + 16));
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAE8,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v10);
      BroadcastDVRComponent::EvaluateAppForGameMode((HSTRING **)this, v6, (HWND *)v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
      Windows::Internal::String::~String(&v28);
      goto LABEL_24;
    }
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
    if ( !(_DWORD)dwProcessId )
      goto LABEL_24;
    v18 = 0LL;
    v19 = OpenProcess(0x1000u, 0, dwProcessId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      &v18,
      &v19);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
    v12 = v18;
    if ( !v18 )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB05,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v11);
      goto LABEL_23;
    }
    v13 = RmGameModeDisableForRegisteredProcess(v18);
    v15 = retaddr;
    if ( v13 >= 0 )
    {
      v13 = RmGameModeUnregisterProcess(v12);
      v15 = retaddr;
      if ( v13 >= 0 )
      {
        *((_DWORD *)this + 114) = 0;
        std::vector<Windows::Internal::String>::clear((char *)this + 352);
        goto LABEL_23;
      }
      v16 = 2811LL;
    }
    else
    {
      v16 = 2807LL;
    }
    wil::details::in1diag3::_Log_NtStatus(v15, (void *)v16, v14, (const char *)(unsigned int)v13, v17);
LABEL_23:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
    goto LABEL_24;
  }
  v8 = **((_QWORD **)this + 33);
  dwProcessId = v8;
  while ( v8 != *((_QWORD *)this + 33) )
  {
    v9 = (_QWORD *)(v8 + 32);
    std::shared_ptr<FlyoutView>::operator=(&v21, (_QWORD *)(v8 + 40));
    v7 = v21;
    if ( *(HWND *)v21 == hWnd )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v31, v9);
      v6 = v31;
      goto LABEL_10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&dwProcessId);
    v8 = dwProcessId;
  }
LABEL_24:
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
}
