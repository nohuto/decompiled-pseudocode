/*
 * XREFs of ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180312814
 * Callers:
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x180171630 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ?NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ @ 0x180312AC8 (-NotifyGameBarToUpdateKGL@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180172894 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z @ 0x18030E190 (--$-0$0BI@@StringReference@Internal@Windows@@QEAA@AEAY0BI@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18030E1E8 (--$ActivateInstance@V-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Wind.c)
 *     ??$As@UILauncherOptions2@System@Windows@@@?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030E290 (--$As@UILauncherOptions2@System@Windows@@@-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Micros.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18030F074 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::LaunchGameOverlayWithUri(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  int v7; // eax
  const unsigned __int16 *v8; // rdx
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  HSTRING v12; // rbx
  int ActivationFactory; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v21; // eax
  int v22; // edx
  __int64 v23; // r8
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  int v25; // eax
  _BYTE v27[8]; // [rsp+30h] [rbp-19h] BYREF
  int (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-11h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-9h] BYREF
  __int64 v30; // [rsp+48h] [rbp-1h] BYREF
  __int64 v31; // [rsp+50h] [rbp+7h] BYREF
  __int64 v32[2]; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+68h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v32[1] = (__int64)a3;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v32[0] = 0LL;
  v28 = 0LL;
  v27[0] = 0;
  v5 = *a3;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  v7 = v6(v5, *a2, &v31);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 3402LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)v10);
    goto LABEL_25;
  }
  v12 = *Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[24])v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  ActivationFactory = RoGetActivationFactory(v12, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v30);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = (unsigned int)ActivationFactory;
    v11 = 3404LL;
    goto LABEL_24;
  }
  if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
          (__int64)string,
          (__int64 *)&v29);
  v9 = v14;
  if ( v14 < 0 )
  {
    v10 = (unsigned int)v14;
    v11 = 3406LL;
    goto LABEL_24;
  }
  v15 = Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>::As<Windows::System::ILauncherOptions2>(&v29, v32);
  v9 = v15;
  if ( v15 < 0 )
  {
    v10 = (unsigned int)v15;
    v11 = 3407LL;
    goto LABEL_24;
  }
  v16 = v32[0];
  v17 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v32[0] + 56LL);
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&string, c_wzGameBarPfn);
  v18 = v17(v16, string);
  v9 = v18;
  if ( v18 < 0 )
  {
    v10 = (unsigned int)v18;
    v11 = 3408LL;
    goto LABEL_24;
  }
  v19 = v30;
  v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v30 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  v21 = v20(v19, v31, v29, &v28);
  v9 = v21;
  if ( v21 < 0 )
  {
    v10 = (unsigned int)v21;
    v11 = 3410LL;
    goto LABEL_24;
  }
  v24 = v28;
  v9 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(
         v28,
         v22,
         v23);
  if ( v9 < 0
    || (v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v24)[8])(v24, v27),
        v9 < 0) )
  {
    v11 = 3412LL;
    goto LABEL_23;
  }
  v25 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*v28)[8])(v28, v27);
  v9 = v25;
  if ( v25 < 0 )
  {
    v10 = (unsigned int)v25;
    v11 = 3414LL;
    goto LABEL_24;
  }
  if ( !v27[0] )
  {
    v9 = -2147467259;
    v11 = 3416LL;
LABEL_23:
    v10 = (unsigned int)v9;
    goto LABEL_24;
  }
  v9 = 0;
LABEL_25:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
  return (unsigned int)v9;
}
