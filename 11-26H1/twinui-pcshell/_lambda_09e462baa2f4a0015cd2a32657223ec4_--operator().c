/*
 * XREFs of _lambda_09e462baa2f4a0015cd2a32657223ec4_::operator() @ 0x1802DDBE4
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E6F30 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_0432630cb06de32104bbb9571e820edc___ @ 0x1802DC50C (ShellPositionerHelpers--PerformCallbackOnView__lambda_0432630cb06de32104bbb9571e820edc___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_09e462baa2f4a0015cd2a32657223ec4_::operator()(__int64 a1, bool *a2)
{
  PVOID Ptr; // rdi
  __int64 (__fastcall *v5)(PVOID, _QWORD, __int64 *); // rbx
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  IUnknown **v11; // rax
  __int128 v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 1;
  v16 = 0LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v5 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 56LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v16);
  v6 = v5(Ptr, **(_QWORD **)a1, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 1;
    *(_QWORD *)&v13 = &v15;
    *((_QWORD *)&v13 + 1) = &v16;
    v10 = v16;
    v11 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(*(_QWORD *)(a1 + 8) + 48LL, &v17);
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_0432630cb06de32104bbb9571e820edc___(*v11, v10, &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( v7 >= 0 )
    {
      *a2 = v15 != 0;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 7157LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 7143LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v8);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  return (unsigned int)v7;
}
