/*
 * XREFs of ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18034D148
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x18034D490 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802A9D60 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ??$As@UILauncherStatics@System@Windows@@@?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherStatics@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B9BFC (--$As@UILauncherStatics@System@Windows@@@-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802C06D0 (--$GetActivationFactory@V-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJP.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18030E1E8 (--$ActivateInstance@V-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Wind.c)
 *     ??$As@UILauncherOptions2@System@Windows@@@?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030E290 (--$As@UILauncherOptions2@System@Windows@@@-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall GamingOverlayExperienceManager::LaunchGameBar(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, __int64 *); // rdi
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID); // rdi
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  int v21; // eax
  __int64 v22; // rax
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-11h]
  const WCHAR *v26; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-1h] BYREF
  __int64 v28; // [rsp+60h] [rbp+7h] BYREF
  __int64 v29; // [rsp+68h] [rbp+Fh] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+17h] BYREF
  __int64 v31; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+80h] [rbp+27h] BYREF
  __int64 v33; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v26 = a2;
  if ( a3 )
    *a3 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v25,
         &v33);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1687LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_31;
  }
  v7 = v33;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v33 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v26, v9);
  v4 = v8(v7, v10[1].Reserved.Reserved1, &v32);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1688LL;
    goto LABEL_7;
  }
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.System.LauncherOptions",
    0x1Fu,
    0x1Eu);
  v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
          v25,
          (__int64 *)&v27);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 1693LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    goto LABEL_31;
  }
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v27)[7])(v27, 0LL);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 1694LL;
    goto LABEL_10;
  }
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v27)[9])(v27, 0LL);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 1695LL;
    goto LABEL_10;
  }
  v11 = Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>::As<Windows::System::ILauncherOptions2>(&v27, &v28);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 1696LL;
    goto LABEL_10;
  }
  v14 = v28;
  v15 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v28 + 56LL);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&c_GamingOverlayPfn,
          v13);
  v11 = v15(v14, v16[1].Reserved.Reserved1);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 1697LL;
    goto LABEL_10;
  }
  v30 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.System.Launcher", 0x18u, 0x17u);
  v17 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<IActivationFactory>>(v25, (__int64 *)&v30);
  v5 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A5,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v17);
LABEL_22:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    goto LABEL_11;
  }
  v31 = 0LL;
  v18 = Microsoft::WRL::ComPtr<IActivationFactory>::As<Windows::System::ILauncherStatics>(&v30, &v31);
  v5 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v18);
LABEL_25:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
    goto LABEL_22;
  }
  v29 = 0LL;
  v19 = v31;
  v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*(_QWORD *)v31 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  v21 = v20(v19, v32, v27, &v29);
  v5 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    goto LABEL_25;
  }
  if ( a3 )
  {
    v22 = v29;
    v29 = 0LL;
    *a3 = v22;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v5 = 0;
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  return v5;
}
