/*
 * XREFs of ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804C0238
 * Callers:
 *     ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x1804C0138 (-_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804C06C0 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804C0120 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::_GetParentGrid(AccessibleElementBase *this, struct ISwitchItemGrid **a2)
{
  int Element; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall ****v6)(_QWORD, GUID *, struct ISwitchItemGrid **); // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct ISwitchItemGrid **); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, struct ISwitchItemGrid **); // rbx
  struct ISwitchItemGrid *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct ISwitchItemGrid *v12; // [rsp+48h] [rbp+28h] BYREF
  struct IMultitaskingViewElement *v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Element = AccessibleElementBase::_GetElement(this, &v13);
  if ( Element >= 0 )
  {
    v5 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v13 + 24LL))(
                      v13,
                      &v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    if ( v5 )
    {
      v12 = 0LL;
      v6 = (__int64 (__fastcall ****)(_QWORD, GUID *, struct ISwitchItemGrid **))(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v13 + 24LL))(
                                                                                   v13,
                                                                                   &v14);
      v7 = *v6;
      v8 = ***v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      Element = v8(v7, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      if ( Element >= 0 )
      {
        v9 = v12;
        v12 = 0LL;
        *a2 = v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        Element = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EE,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)Element);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      }
    }
    else
    {
      Element = -2147220991;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EA,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x80040201LL);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)Element;
}
