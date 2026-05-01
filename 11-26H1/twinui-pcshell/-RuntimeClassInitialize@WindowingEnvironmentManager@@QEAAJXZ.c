/*
 * XREFs of ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800CFC94
 * Callers:
 *     ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800CF888 (--$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1800D011C (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800D7A10 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentManager::RuntimeClassInitialize(RTL_SRWLOCK *this)
{
  int v2; // eax
  CCriticalFailureHandler *v3; // rcx
  PVOID Ptr; // rcx
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  int ActivationFactory; // eax
  CCriticalFailureHandler *v9; // rcx
  PVOID v10; // rcx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  int v14; // eax
  CCriticalFailureHandler *v15; // rcx
  PVOID v16; // rcx
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  CCriticalFailureHandler *v21; // rcx
  int v22; // eax
  CCriticalFailureHandler *v23; // rcx
  const char *v24; // r9
  __int64 result; // rax
  unsigned __int64 *v26; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v27; // [rsp+28h] [rbp-50h]
  int v28; // [rsp+30h] [rbp-48h] BYREF
  RTL_SRWLOCK *v29; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)&this[9],
           &GUID_9c4a7f24_303d_47a7_994e_503f26217d06);
    v28 = v2;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, &v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v2 = v28;
    }
    if ( v2 < 0 )
    {
      if ( v2 != -2147024882 && v2 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v3,
          &v28,
          L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          0xEu,
          v26,
          v27);
        v2 = v28;
      }
      if ( v2 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xE,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v2,
          (int)v26);
    }
    Ptr = this[23].Ptr;
    this[23].Ptr = 0LL;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    string = 0LL;
    v5 = WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModel",
           0x50u,
           &hstringHeader,
           &string);
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_23ebdea9_9eed_48c0_8dae_a9affe06eada, &this[23]);
    v28 = ActivationFactory;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, &v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      ActivationFactory = v28;
    }
    if ( ActivationFactory < 0 )
    {
      if ( ActivationFactory != -2147024882 && ActivationFactory != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          &v28,
          L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          0x12u,
          v26,
          v27);
        ActivationFactory = v28;
      }
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x12,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)ActivationFactory,
          (int)v26);
    }
    v10 = this[24].Ptr;
    this[24].Ptr = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
    string = 0LL;
    v11 = WindowsCreateStringReference(
            L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModelBatch",
            0x55u,
            &hstringHeader,
            &string);
    if ( v11 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
      __debugbreak();
    }
    v14 = RoGetActivationFactory(string, &GUID_4eb73a4e_44ee_4f8d_910e_1b9662698b21, &this[24]);
    v28 = v14;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, &v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v14 = v28;
    }
    if ( v14 < 0 )
    {
      if ( v14 != -2147024882 && v14 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v15,
          &v28,
          L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          0x15u,
          v26,
          v27);
        v14 = v28;
      }
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x15,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14,
          (int)v26);
    }
    v16 = this[25].Ptr;
    this[25].Ptr = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
    string = 0LL;
    v17 = WindowsCreateStringReference(
            L"Windows.Internal.ApplicationModel.WindowingEnvironment.DisplayRegionModel",
            0x49u,
            &hstringHeader,
            &string);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
      __debugbreak();
    }
    v20 = RoGetActivationFactory(string, &GUID_c3eca212_6c7b_43a3_be47_ca8388a8643e, &this[25]);
    v28 = v20;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v21, &v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v20 = v28;
    }
    if ( v20 < 0 )
    {
      if ( v20 != -2147024882 && v20 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v21,
          &v28,
          L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          0x18u,
          v26,
          v27);
        v20 = v28;
      }
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x18,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v20,
          (int)v26);
    }
    AcquireSRWLockExclusive(this + 20);
    v29 = this + 20;
    v22 = WindowingEnvironmentManager::ResetWindowingEnvironments((WindowingEnvironmentManager *)this);
    v28 = v22;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v23, &v28);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v22 = v28;
    }
    if ( v22 < 0 )
    {
      if ( v22 != -2147024882 && v22 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v23,
          &v28,
          L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          0x1Cu,
          v26,
          v27);
        v22 = v28;
      }
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v22,
          (int)v26);
    }
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v24);
  }
  return result;
}
