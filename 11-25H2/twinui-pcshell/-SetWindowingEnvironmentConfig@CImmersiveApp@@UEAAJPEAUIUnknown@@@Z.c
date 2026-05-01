/*
 * XREFs of ?SetWindowingEnvironmentConfig@CImmersiveApp@@UEAAJPEAUIUnknown@@@Z @ 0x180304820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfig(CImmersiveApp *this, struct IUnknown *a2)
{
  unsigned int v4; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(char *, __int64, __int64 *); // rdi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+38h] BYREF

  if ( a2 )
  {
    v13 = 0LL;
    CIAMGlobals::AcquireExclusive((__int64)this, &v14);
    v12 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
           a2,
           &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
           &v12);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v8 = *(__int64 (__fastcall **)(char *, __int64, __int64 *))(*((_QWORD *)this + 3) + 632LL);
      v9 = v13;
      v13 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v6 = v8((char *)this + 24, v12, &v13);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v7 = 2269LL;
    }
    else
    {
      v7 = 2268LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    return v4;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D2,
    (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)0x80070057LL);
  return v4;
}
