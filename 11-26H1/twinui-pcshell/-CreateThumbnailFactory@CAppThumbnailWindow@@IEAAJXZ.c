/*
 * XREFs of ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A4ECC
 * Callers:
 *     ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A6218 (-Initialize@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailFactory(CAppThumbnailWindow *this)
{
  __int64 *v2; // rdi
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, _QWORD, __int64, __int64 *); // rbp
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return 0LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_SwitchThumbnailDeviceManager, 0LL, 1u, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64 *)&ppv);
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 184LL))(ppv, 2LL);
    v7 = ppv;
    v8 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 56LL);
    v9 = *v2;
    *v2 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v8(v7, *((_QWORD *)this + 20), 0xFFFFFFFFLL, v2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_11;
    }
    v6 = 276LL;
  }
  else
  {
    v6 = 268LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v4);
LABEL_11:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v5;
}
