/*
 * XREFs of ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180269E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052C3E8 (-_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtual.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopForegroundPolicy::ForegroundViewChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IApplicationView *a4)
{
  __int64 v8; // r15
  unsigned int v9; // edi
  int (__fastcall *v11)(__int64, struct IUnknown **); // rbx
  __int64 (__fastcall *v12)(struct IVirtualDesktopManagerPrivate *, __int64 *); // rbx
  int v13; // eax
  int DesktopForView; // ebx
  __int64 (__fastcall **v15)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  struct IVirtualDesktop *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  struct IUnknown *v22[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+90h] [rbp+30h] BYREF

  v8 = *((_QWORD *)this + 5);
  v9 = 0;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL);
    return 2147549448LL;
  }
  v22[0] = 0LL;
  v11 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v22);
  if ( v11(v8, v22) < 0 || SHIsSameObject((struct IUnknown *)a4, v22[0]) )
  {
    v19 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64 *))(*(_QWORD *)a2 + 368LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    v13 = v12(a2, &v19);
    DesktopForView = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v13);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      v9 = DesktopForView;
      goto LABEL_24;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a4,
           v19) )
    {
      goto LABEL_8;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    DesktopForView = CVirtualDesktopForegroundPolicy::_FindDesktopForView(this, a4, &v20);
    if ( DesktopForView < 0 )
    {
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      goto LABEL_23;
    }
    v21 = 0LL;
    v15 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v20;
    v21 = 0LL;
    DesktopForView = (*v15)(v20, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v21);
    if ( DesktopForView >= 0 )
    {
      v24 = 0;
      DesktopForView = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v24);
      if ( DesktopForView >= 0 )
      {
        if ( v24 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
LABEL_8:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
          goto LABEL_24;
        }
        v18 = 3;
        v17 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64, struct IVirtualDesktop *, int *))(*(_QWORD *)a2 + 424LL))(
                a2,
                v19,
                v20,
                &v18);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBB,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
            (const char *)(unsigned int)v17);
        DesktopForView = (*(__int64 (__fastcall **)(struct IVirtualDesktopSwitchAnimator *, struct IVirtualDesktop *, bool))(*(_QWORD *)a3 + 24LL))(
                           a3,
                           v20,
                           v18 != 3);
        if ( DesktopForView >= 0 )
          goto LABEL_21;
        v16 = 188LL;
      }
      else
      {
        v16 = 181LL;
      }
    }
    else
    {
      v16 = 179LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)DesktopForView);
LABEL_21:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    goto LABEL_22;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v22);
  return v9;
}
