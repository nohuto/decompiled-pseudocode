/*
 * XREFs of ?IsAdjacentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAHPEAUIVirtualDesktop@@@Z @ 0x18056109C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopGestureWindow::IsAdjacentDesktopRemote(
        VirtualDesktopGestureWindow *this,
        int *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64 *); // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rdi
  __int64 v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v18[0] = 0LL;
  v21 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v18, (__int64)a3);
LABEL_7:
    v11 = v18[0];
    v12 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v18[0];
    v13 = v21;
    v21 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v12(v11, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v21);
    v15 = retaddr;
    if ( v14 < 0 )
    {
      v16 = 340LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        v15,
        (void *)v16,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_14;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 56LL))(v21, a2);
    v15 = retaddr;
    if ( v14 < 0 )
    {
      v16 = 342LL;
      goto LABEL_13;
    }
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  v20 = 0LL;
  v5 = *((_QWORD *)this + 4);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v7 = v6(v5, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
    LODWORD(v10) = v10(v9, v20, *((unsigned int *)this + 76), v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    if ( (int)v10 < 0 )
      goto LABEL_14;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
LABEL_15:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
  return v8;
}
