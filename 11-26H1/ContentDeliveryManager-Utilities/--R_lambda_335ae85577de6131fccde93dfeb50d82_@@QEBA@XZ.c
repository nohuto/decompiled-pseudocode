/*
 * XREFs of ??R_lambda_335ae85577de6131fccde93dfeb50d82_@@QEBA@XZ @ 0x18002B028
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180034A10 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 * Callees:
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x1800236CC (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800239E8 (--$ActivateInstance@V-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Wind.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024BA8 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall _lambda_335ae85577de6131fccde93dfeb50d82_::operator()(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  const unsigned __int16 *v4; // rdx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  int v7; // eax
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64 *); // r15
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v13; // r14
  unsigned __int64 v14; // rdi
  int v15; // eax
  HSTRING v16; // rbx
  int ActivationFactory; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  int v23; // [rsp+20h] [rbp-39h]
  __int64 v24; // [rsp+30h] [rbp-29h] BYREF
  __int64 v25; // [rsp+38h] [rbp-21h] BYREF
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+48h] [rbp-11h] BYREF
  __int64 v28; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-1h] BYREF
  HSTRING string; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !WindowsIsStringEmpty(**(HSTRING **)a1) )
  {
    v29 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
           (__int64)string,
           &v29);
    v2 = v3;
    if ( v3 >= 0 )
    {
      if ( !WindowsIsStringEmpty(**(HSTRING **)(a1 + 8)) )
      {
        v26 = 0LL;
        v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v29;
        v6 = **v29;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        v7 = v6(v5, &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49, &v26);
        v2 = v7;
        if ( v7 < 0
          || (v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 56LL))(v26, **(_QWORD **)(a1 + 8)),
              v2 = v7,
              v7 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14D,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v7,
            v23);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      v25 = 0LL;
      v8 = (__int64 *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[23])v4);
      v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
             *v8,
             (__int64)&v25);
      v2 = v9;
      if ( v9 >= 0 )
      {
        v24 = 0LL;
        v10 = v25;
        v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v25 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
        v13 = StringRawBuffer;
        v14 = -1LL;
        do
          ++v14;
        while ( StringRawBuffer[v14] );
        if ( v14 > 0xFFFFFFFF )
        {
          LODWORD(v14) = -1;
          RaiseException(0xC000000D, 1u, 0, 0LL);
        }
        WindowsCreateStringReference(v13, v14, &hstringHeader, &string);
        v15 = v11(v10, string, &v24);
        v2 = v15;
        if ( v15 >= 0 )
        {
          v28 = 0LL;
          if ( WindowsCreateStringReference(L"Windows.System.Launcher", 0x17u, &hstringHeader, &string) < 0 )
            RaiseException(0xC000000D, 1u, 0, 0LL);
          v16 = string;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
          ActivationFactory = RoGetActivationFactory(v16, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v28);
          v2 = ActivationFactory;
          if ( ActivationFactory >= 0 )
          {
            v27 = 0LL;
            v18 = v28;
            v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*(_QWORD *)v28 + 72LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
            v20 = v19(v18, v24, v29, &v27);
            v2 = v20;
            if ( v20 >= 0 )
            {
              v21 = v27;
              v27 = 0LL;
              ***(_QWORD ***)(a1 + 16) = v21;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
              v2 = 0;
              goto LABEL_30;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14D,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v20,
              v23);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14D,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)ActivationFactory,
              v23);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14D,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v15,
            v23);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14D,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v9,
          v23);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v3,
        v23);
    }
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    return v2;
  }
  v2 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14D,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)0x80070057LL,
    v23);
  return v2;
}
