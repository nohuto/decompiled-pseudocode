/*
 * XREFs of ?SetParent@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804B15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::SetParent(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  if ( *((_QWORD *)this + 11) )
  {
    v3 = 0LL;
    v11 = 0LL;
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
    {
      v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v12);
      if ( v9 != v5 )
      {
        v3 = *v5;
        *v5 = 0LL;
      }
      v9[0] = 0LL;
      v11 = v3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 192LL))(*((_QWORD *)this + 11), v3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      return v7;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  return 0LL;
}
