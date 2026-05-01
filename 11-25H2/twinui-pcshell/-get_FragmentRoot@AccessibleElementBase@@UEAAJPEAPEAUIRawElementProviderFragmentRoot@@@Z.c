/*
 * XREFs of ?get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1804C0790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804C0120 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::get_FragmentRoot(
        AccessibleElementBase *this,
        struct IRawElementProviderFragmentRoot **a2)
{
  AccessibleElementBase *v3; // rdi
  int Element; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  struct IMultitaskingViewElement *v16; // [rsp+48h] [rbp+28h] BYREF
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  Element = AccessibleElementBase::_GetElement(v3, &v16);
  if ( Element < 0 )
    goto LABEL_11;
  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v16 + 24LL))(
                    v16,
                    &v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  if ( v5 )
  {
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
    v8 = *(_QWORD *)v7;
    v9 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v7 + 376LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Element = v9(v8, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, &v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    if ( Element >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, struct IRawElementProviderFragmentRoot **))(*(_QWORD *)v15 + 64LL))(
              v15,
              a2);
      Element = v12;
      if ( v12 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        goto LABEL_11;
      }
      v10 = (unsigned int)v12;
      v11 = 228LL;
    }
    else
    {
      v10 = (unsigned int)Element;
      v11 = 227LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  v6 = (**(__int64 (__fastcall ***)(AccessibleElementBase *, GUID *, struct IRawElementProviderFragmentRoot **))v3)(
         v3,
         &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58,
         a2);
  Element = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return (unsigned int)Element;
}
