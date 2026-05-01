/*
 * XREFs of ??$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z @ 0x1804D8748
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1804D9470 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementHelpers::SendUiaPropertyEvent<bool>(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 (__fastcall *v7)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  IRawElementProviderSimple *pProvider; // [rsp+28h] [rbp-39h] BYREF
  VARIANTARG pvarg; // [rsp+30h] [rbp-31h] BYREF
  VARIANTARG v14; // [rsp+48h] [rbp-19h] BYREF
  VARIANT newValue; // [rsp+68h] [rbp+7h] BYREF
  VARIANT oldValue; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( a3 == a4
    || !UiaClientsAreListening()
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    return 0LL;
  }
  pProvider = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
  v8 = v7(a1, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14.vt = 11;
    v14.iVal = -1;
    if ( !a3 )
      v14.iVal = 0;
    pvarg.vt = 11;
    pvarg.iVal = -1;
    if ( !a4 )
      pvarg.iVal = 0;
    newValue = pvarg;
    oldValue = v14;
    v10 = UiaRaiseAutomationPropertyChangedEvent(pProvider, 30058, &oldValue, &newValue);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
        (const char *)(unsigned int)v10);
    VariantClear(&pvarg);
    VariantClear(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
  return v9;
}
