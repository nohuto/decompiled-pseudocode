/*
 * XREFs of ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x18054F4C8
 * Callers:
 *     ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180262190 (-ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopForegroundPolicy::_FindDesktopForView(
        CVirtualDesktopForegroundPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int i; // esi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, struct IVirtualDesktop **); // rdi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  struct IVirtualDesktop *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  *a3 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v8 = v7(v6, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 196LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_14;
  }
  v17 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 199LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v17; ++i )
  {
    v18 = 0LL;
    v12 = v19;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v19 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    v14 = v13(v12, i, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v18);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      goto LABEL_14;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2,
           v18) )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      *a3 = v18;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      v9 = 0;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  }
  v9 = -2147023728;
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v9;
}
