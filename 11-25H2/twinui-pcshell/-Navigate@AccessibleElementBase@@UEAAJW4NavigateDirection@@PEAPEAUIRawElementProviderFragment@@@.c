/*
 * XREFs of ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1804BF950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804C0120 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::Navigate(
        AccessibleElementBase *this,
        enum NavigateDirection a2,
        struct IRawElementProviderFragment **a3)
{
  AccessibleElementBase *v5; // rbx
  int Element; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  __int64 v10; // r9
  char *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  struct IMultitaskingViewElement *v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  v5 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  Element = AccessibleElementBase::_GetElement(v5, &v16);
  if ( Element >= 0 )
  {
    v15 = 0LL;
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              goto LABEL_16;
            v10 = 8LL;
          }
          else
          {
            v10 = 7LL;
          }
        }
        else
        {
          v10 = 6LL;
        }
      }
      else
      {
        v10 = 5LL;
      }
      v11 = (char *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *, _QWORD, __int64, int))(*(_QWORD *)v16 + 272LL))(
                      v16,
                      &v17,
                      0LL,
                      v10,
                      1);
    }
    else
    {
      v11 = (char *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v16 + 24LL))(
                      v16,
                      &v17);
    }
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v15, v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    if ( v15 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderFragment **))(*(_QWORD *)v15 + 376LL))(
              v15,
              &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
              a3);
      Element = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11B,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        goto LABEL_17;
      }
    }
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Element = 0;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return (unsigned int)Element;
}
