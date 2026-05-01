/*
 * XREFs of ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1804C3D6C
 * Callers:
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804C3190 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAccessibleAncestor@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CC82C (-GetAccessibleAncestor@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@.c)
 *     ?GetFocusedDescendant@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CC924 (-GetFocusedDescendant@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@P.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CCA78 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewElementBase::_RaiseFocusEvent(CMultitaskingViewElementBase *this)
{
  char v2; // di
  _QWORD *RootElement; // rax
  bool v4; // si
  _QWORD *FocusedDescendant; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, GUID *, IRawElementProviderSimple **); // rdi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  IRawElementProviderSimple *pProvider; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF

  v2 = 0;
  LODWORD(pProvider) = 0;
  v4 = 0;
  if ( *((_BYTE *)this + 176) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this) )
    {
      if ( UiaClientsAreListening() )
      {
        RootElement = (_QWORD *)ElementHelpers::GetRootElement(&v14, this);
        v2 = 1;
        LODWORD(pProvider) = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*RootElement + 304LL))(*RootElement) )
          v4 = 1;
      }
    }
  }
  if ( (v2 & 1) != 0 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  if ( v4 )
  {
    FocusedDescendant = (_QWORD *)ElementHelpers::GetFocusedDescendant(&pProvider, this);
    ElementHelpers::GetAccessibleAncestor(&v14, *FocusedDescendant);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    v6 = v14;
    if ( v14 )
    {
      pProvider = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v14 + 376LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
      v8 = v7(v6, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1117LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        return v9;
      }
      v8 = UiaRaiseAutomationEvent(pProvider, 20005);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1118LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  return 0LL;
}
