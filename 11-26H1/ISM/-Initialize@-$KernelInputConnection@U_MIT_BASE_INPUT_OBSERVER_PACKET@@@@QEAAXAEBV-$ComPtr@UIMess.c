/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x180077808
 * Callers:
 *     ??0?$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x1800886F4 (--0-$CBaseInputObserverServer@$0L@@@IEAA@W4InputObserverType@InputObservation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x180041230 (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004274C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AE528 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
        _QWORD *a1,
        wil::details **a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  __int64 v9; // rdx
  const char *v10; // r9
  _BYTE *v11; // rdx
  wil::details *v12; // rdi
  __int64 (__fastcall *v13)(wil::details *, const wchar_t *, _QWORD *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r8
  wil::details *v18; // rsi
  __int64 (__fastcall *v19)(wil::details *, _QWORD, _QWORD *, _QWORD); // rdi
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v25; // [rsp+20h] [rbp-A8h]
  int v26; // [rsp+20h] [rbp-A8h]
  _BYTE v27[56]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE *v28; // [rsp+78h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *((_DWORD *)a1 + 34) = a3;
  v28 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v8 )
    v28 = (_BYTE *)(**v8)(v8, v27);
  std::_Func_class<void,bool>::_Swap((__int64)v27, (__int64)(a1 + 8));
  if ( v28 )
  {
    v11 = v27;
    LOBYTE(v11) = v28 != v27;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v11);
    v28 = 0LL;
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v10);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v12 = *a2;
    v13 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v14 = v13(v12, L"Kernel\\MIT\\InputPort", a1);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v14,
        v25);
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v15);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v16,
        v25);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      *a2,
      v17);
    v18 = *a2;
    v19 = *(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      (wil::details *)a1[1],
      v20);
    v26 = (_DWORD)a1 + 16;
    v21 = v19(v18, KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v21 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v21,
        v26);
    v22 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v22 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v22,
        v26);
    v23 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v23 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v23,
        v26);
  }
  return std::_Func_class<void,>::~_Func_class<void,>(a4, v9);
}
