/*
 * XREFs of ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180027230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180036B00 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AFF0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RpcCheckDataFlowAccess(
        CProcess *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int *a4)
{
  int v6; // edi
  __int64 v7; // r14
  unsigned int v9; // ebx
  HRESULT v10; // eax
  void *v11; // rdx
  unsigned int v12; // r8d
  _QWORD *v13; // rax
  int ActivationFactory; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  HRESULT v17; // eax
  IUnknown *v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  int dwAuthnLevel; // [rsp+20h] [rbp-59h]
  int v22; // [rsp+40h] [rbp-39h] BYREF
  int v23[2]; // [rsp+48h] [rbp-31h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-21h]
  unsigned int v26; // [rsp+5Ch] [rbp-1Dh]
  ULONG (__stdcall *Release)(IUnknown *); // [rsp+60h] [rbp-19h]
  HSTRING string; // [rsp+68h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v25 = a3;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 != eCapture )
    {
      v9 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABA,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)0x80070057LL);
      return v9;
    }
    v7 = 1LL;
  }
  else
  {
    v7 = 0LL;
    *((_DWORD *)this + 54) = 0;
  }
  if ( *((_DWORD *)this + v7 + 54) == -2147023728 )
  {
    v10 = CoInitializeEx(0LL, 0);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(retaddr, v11, v12, (const char *)(unsigned int)v10, dwAuthnLevel);
    pProxy = 0LL;
    v13 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[51])v11);
    ActivationFactory = RoGetActivationFactory(*v13, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
    v9 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v15 = RpcImpersonateClient(0LL);
      if ( v15 )
      {
        v9 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0xACF,
               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               (const char *)v15);
      }
      else
      {
        v16 = -1LL;
        v17 = CoSetProxyBlanket(
                pProxy,
                0xFFFFFFFF,
                0xFFFFFFFF,
                (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
                0,
                3u,
                (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
                0x40u);
        v9 = v17;
        if ( v17 >= 0 )
        {
          v18 = pProxy;
          Release = pProxy->lpVtbl[2].Release;
          *(_QWORD *)v23 = 0LL;
          v26 = *((_DWORD *)this + 40);
          do
            ++v16;
          while ( c_szCapabilityMicrophone[v16] );
          if ( v16 > 0xFFFFFFFF )
          {
            LODWORD(v16) = -1;
            RaiseException(0xC000000D, 1u, 0, 0LL);
          }
          WindowsCreateStringReference(c_szCapabilityMicrophone, v16, &hstringHeader, &string);
          v19 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, _QWORD, _QWORD, int *))Release)(
                  v18,
                  string,
                  v26,
                  v25,
                  v23);
          v9 = v19;
          if ( v19 >= 0 )
          {
            v22 = 3;
            v19 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 152LL))(*(_QWORD *)v23, &v22);
            v9 = v19;
            if ( v19 >= 0 )
            {
              *((_DWORD *)this + v7 + 54) = v22 != 3 ? 0x887C0076 : 0;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
              RpcRevertToSelf();
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
              CoUninitialize();
              goto LABEL_4;
            }
            v20 = 2786LL;
          }
          else
          {
            v20 = 2783LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
            (const char *)(unsigned int)v19);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAD9,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
            (const char *)(unsigned int)v17);
        }
        RpcRevertToSelf();
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xACD,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    CoUninitialize();
    return v9;
  }
LABEL_4:
  if ( a4 )
  {
    LOBYTE(v6) = *((_DWORD *)this + v7 + 54) == 0;
    *a4 = v6;
  }
  return 0LL;
}
