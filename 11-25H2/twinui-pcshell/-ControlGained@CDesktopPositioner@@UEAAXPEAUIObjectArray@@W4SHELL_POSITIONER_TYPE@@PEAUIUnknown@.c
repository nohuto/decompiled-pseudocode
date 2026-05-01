/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804EE240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_ @ 0x1804ED374 (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--_lambda_ebca2bf7fa70890e87a68e152d07e31f_.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator() @ 0x1804EDCA4 (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--operator().c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804F2130 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void CDesktopPositioner::ControlGained(__int64 a1, __int64 a2, int a3, ...)
{
  int v4; // eax
  int v5; // eax
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *, unsigned int *); // rdi
  int v9; // eax
  const struct _GUID *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  __int64 **v19; // rax
  __int64 v20; // rbx
  int (__fastcall *v21)(__int64, __int64, __int64 *); // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-49h] BYREF
  void *v26; // [rsp+58h] [rbp-41h] BYREF
  __int64 v27; // [rsp+60h] [rbp-39h] BYREF
  __int64 v28; // [rsp+68h] [rbp-31h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h] BYREF
  __int64 v30; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v31[13]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+57h]
  unsigned int i; // [rsp+F8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+100h] [rbp+67h] BYREF
  int v35; // [rsp+108h] [rbp+6Fh] BYREF
  int (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+110h] [rbp+77h] BYREF
  va_list va; // [rsp+110h] [rbp+77h]
  va_list va1; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, int (__fastcall ***)(_QWORD, GUID *, __int64 *));
  v35 = a3;
  v34 = a2;
  v24 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 192) + 32LL))(
         *(_QWORD *)(a1 + 192),
         1LL,
         &v24);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E2,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 40LL))(v24, 3LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E3,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5);
  v30 = 0LL;
  v29 = 0LL;
  if ( v36 )
  {
    v6 = **v36;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    if ( v6(v36, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v29) >= 0 )
    {
      v28 = 0LL;
      i = 0;
      v7 = v29;
      v8 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v29 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      v9 = v8(v7, &v28, &i);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2FC,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_22:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        goto LABEL_23;
      }
      if ( i )
        goto LABEL_22;
      v26 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      v11 = DesktopOperation_CreateInstance(v10, &v26);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 768LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          v12,
          (void *)v13,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        goto LABEL_22;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v26 + 24LL))(v26, v28);
      v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v26 + 40LL))(v26);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 771LL;
        goto LABEL_14;
      }
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
      v14 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v26)(
              v26,
              &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
              &v27);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v17 = v27;
        v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        v14 = v18(v17, &v30);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
LABEL_20:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
          goto LABEL_21;
        }
        v16 = 776LL;
      }
      else
      {
        v16 = 774LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v15,
        (void *)v16,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_20;
    }
  }
LABEL_23:
  v25 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v25);
  for ( i = 0; i < v25; ++i )
  {
    v19 = (__int64 **)lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_(
                        v31,
                        (__int64)&v34,
                        (__int64)&i,
                        a1 - 144,
                        (__int64)&v35,
                        (__int64)&v30,
                        (__int64)va);
    lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator()(v19);
  }
  v20 = *(_QWORD *)(a1 + 192);
  v21 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 32LL);
  v22 = v24;
  v24 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21(v20, 2LL, &v24) >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 40LL))(v24, 0LL);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x338,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v23);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
}
