/*
 * XREFs of ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801DCA28
 * Callers:
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x18021B8C8 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     McTemplateU0xf_EventWriteTransfer @ 0x18025D444 (McTemplateU0xf_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::CreateWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        struct ID3D12Fence **a3)
{
  double v3; // xmm0_8
  __int64 *v5; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct ID3D12Fence *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  struct ID3D12Fence *v30; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HANDLE hObject; // [rsp+80h] [rbp+30h] BYREF
  __int64 v33; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v34; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((double *)a2 + 2) * 10000000.0;
  v5 = (__int64 *)*((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 4);
  v9 = *v5;
  v29 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v9 + 72))(
          v5,
          v8,
          (unsigned int)(int)v3,
          &v29);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 440LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)v12);
LABEL_17:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
    return v11;
  }
  if ( !v29 )
  {
    v11 = -2147024882;
    v13 = 443LL;
    v12 = 2147942414LL;
    goto LABEL_5;
  }
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v33 = 0LL;
  v15 = (**v14)(v14, &GUID_64338358_366a_471b_bd56_dd8ef48e439b, &v33);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v15);
LABEL_16:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
    goto LABEL_17;
  }
  v16 = v33;
  hObject = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v33 + 24LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v18 = v17(v16, v29, 0LL, 0x10000000LL, 0LL, &hObject);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v18);
LABEL_15:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    goto LABEL_16;
  }
  v19 = (__int64 *)*((_QWORD *)this + 2);
  v20 = *v19;
  v34 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))(v20 + 56))(
          v19,
          &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
          &v34);
  v11 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v21);
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    goto LABEL_15;
  }
  v22 = *v34;
  v30 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64 *, HANDLE, GUID *, struct ID3D12Fence **))(v22 + 256))(
          v34,
          hObject,
          &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
          &v30);
  v11 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v23);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
    goto LABEL_14;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xf_EventWriteTransfer(v25, v24, *(_QWORD *)a2);
  v27 = v30;
  v28 = (__int64)v34;
  v30 = 0LL;
  *a3 = v27;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return 0LL;
}
