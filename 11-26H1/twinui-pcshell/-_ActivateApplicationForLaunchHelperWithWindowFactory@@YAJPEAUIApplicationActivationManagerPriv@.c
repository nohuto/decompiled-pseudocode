/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180171BE4
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1806804B0 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x180073070 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800737A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ??$?0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z @ 0x180171F64 (--$-0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180172894 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x180680134 (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        char *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int64 v10; // rbx
  const WCHAR *v11; // r12
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  void (*v18)(void); // rax
  __int64 *v20; // rax
  HRESULT Site; // eax
  const unsigned __int16 *v22; // rdx
  __int64 v23; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v25; // rbx
  __int64 v26; // rcx
  HRESULT v27; // eax
  __int64 v28; // rdx
  __int64 v29; // [rsp+40h] [rbp-B9h] BYREF
  IUnknown *v30; // [rsp+48h] [rbp-B1h] BYREF
  IUnknown *punkSite; // [rsp+50h] [rbp-A9h] BYREF
  void *v32; // [rsp+58h] [rbp-A1h] BYREF
  PCWSTR sourceString[3]; // [rsp+60h] [rbp-99h] BYREF
  __int64 v34; // [rsp+78h] [rbp-81h] BYREF
  unsigned __int16 *v35; // [rsp+80h] [rbp-79h]
  _DWORD *v36; // [rsp+88h] [rbp-71h]
  __int64 v37; // [rsp+90h] [rbp-69h]
  _QWORD v38[3]; // [rsp+98h] [rbp-61h] BYREF
  HSTRING v39; // [rsp+B0h] [rbp-49h] BYREF
  HSTRING_HEADER v40; // [rsp+B8h] [rbp-41h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v37 = a7;
  v35 = a2;
  v10 = -1LL;
  v34 = a6;
  v36 = a8;
  *a8 = 0;
  v11 = (const WCHAR *)a4;
  sourceString[0] = 0LL;
  sourceString[1] = (PCWSTR)-1LL;
  sourceString[2] = (PCWSTR)-1LL;
  v29 = 0LL;
  v12 = -1LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)sourceString) >= 0 )
    v11 = sourceString[0];
  do
    ++v12;
  while ( v11[v12] );
  if ( v12 > 0xFFFFFFFF )
  {
    LODWORD(v12) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v11, v12, &hstringHeader, &string);
  v32 = string;
  if ( !a3 )
    a3 = &pvData;
  do
    ++v10;
  while ( a3[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    LODWORD(v10) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(a3, v10, &v40, &v39);
  v30 = (IUnknown *)v39;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
  v38[0] = &v30;
  v38[1] = &v32;
  v15 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
          v14,
          v13,
          &v29,
          (__int64)v38);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)v15);
    v17 = v29;
    if ( !v29 )
      goto LABEL_15;
    v29 = 0LL;
    v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
    goto LABEL_14;
  }
  punkSite = 0LL;
  v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punkSite);
  Site = IUnknown_GetSite(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)v20);
  v16 = Site;
  if ( Site < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)Site);
LABEL_28:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punkSite);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)sourceString);
    return v16;
  }
  if ( !a6 )
    goto LABEL_20;
  v32 = punkSite;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v30);
  v27 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
          &v30,
          &v34,
          &v32);
  v16 = v27;
  if ( v27 < 0 )
  {
    v28 = 54LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v30);
    IUnknown_SetSite(a1, punkSite);
    goto LABEL_28;
  }
  v27 = IUnknown_SetSite(a1, v30);
  v16 = v27;
  if ( v27 < 0 )
  {
    v28 = 55LL;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v30);
LABEL_20:
  v23 = v29;
  QueryInterface = a1->lpVtbl[1].QueryInterface;
  v25 = *(_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[15])v22);
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&v39, v35);
  v16 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, __int64, __int64, int, _DWORD *))QueryInterface)(
          a1,
          v39,
          v37,
          v25,
          v23,
          a5,
          v36);
  IUnknown_SetSite(a1, punkSite);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punkSite);
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    v18 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
LABEL_14:
    v18();
  }
LABEL_15:
  if ( sourceString[0] )
    CoTaskMemFree((LPVOID)sourceString[0]);
  return v16;
}
