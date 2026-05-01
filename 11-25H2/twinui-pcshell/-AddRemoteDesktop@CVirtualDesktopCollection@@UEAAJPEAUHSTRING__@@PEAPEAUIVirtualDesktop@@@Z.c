/*
 * XREFs of ?AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052B550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18052B3EC (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopCollection::AddRemoteDesktop(
        CVirtualDesktopCollection *this,
        HSTRING a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, struct IVirtualDesktop **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall **v10)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // rdx
  struct IVirtualDesktop *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  struct IVirtualDesktop *v17; // [rsp+60h] [rbp+40h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v17 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v8 = v7(v6, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v16 = 0LL;
  v10 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v17;
  v16 = 0LL;
  v11 = (*v10)(v17, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v16);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 361LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    goto LABEL_17;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 1LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 363LL;
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v16 + 24LL))(v16, a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 364LL;
    goto LABEL_7;
  }
  v11 = CVirtualDesktopCollection::AddDesktopHelper(
          this,
          (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))v17);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 367LL;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v13 = v17;
    v17 = 0LL;
    *a3 = v13;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  v9 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  return v9;
}
