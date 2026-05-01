/*
 * XREFs of ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C3010
 * Callers:
 *     ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C76F0 (-SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804DE360 (-SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804C1434 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewElementBase::SetChildFocus(CMultitaskingViewElementBase *this, struct IUnknown *a2)
{
  __int64 *v4; // r15
  struct IUnknown *v5; // rdi
  struct IUnknown *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // esi
  struct IMultitaskingViewElement *v10; // r8
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct IUnknown *v13; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+40h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+48h] BYREF
  struct IUnknown *v16; // [rsp+88h] [rbp+50h] BYREF

  v4 = (__int64 *)((char *)this + 168);
  v5 = (struct IUnknown *)*((_QWORD *)this + 21);
  v16 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v15 = 0LL;
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
           (_QWORD *)this + 2,
           v7,
           &v14,
           &v15);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x214,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v13, (_QWORD *)(*((_QWORD *)this + 2) + 8 * v15));
      v6 = v13;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v4, &v13);
  if ( !ElementHelpers::IsSameElement(v5, v6, v10) )
  {
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[12].AddRef)(v5, 0LL);
    if ( v6 )
    {
      LOBYTE(v11) = 1;
      ((void (__fastcall *)(struct IUnknown *, __int64))v6->lpVtbl[12].AddRef)(v6, v11);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
}
