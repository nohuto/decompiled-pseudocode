/*
 * XREFs of ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x18029AC3C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::InitializeVBlankWaitEventHandle(CDDisplaySwapChain *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, char *); // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+38h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+40h] BYREF

  v14 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 53))(
    *((_QWORD *)this + 53),
    &GUID_a2b1e0a8_cde9_57d6_9b3e_c0e06ac291ad,
    &v14);
  v2 = *v14;
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v2 + 48))(v14, &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v13 = 0LL;
  v5 = (**v15)(v15, &GUID_0b3a56e8_12a4_4dd9_b7d6_b6ab8f5a2d29, &v13);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 980LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
    goto LABEL_11;
  }
  v7 = v13;
  v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 48LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 68,
    0LL);
  v5 = v8(v7, (char *)this + 544);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 982LL;
    goto LABEL_5;
  }
  v9 = *((_QWORD *)this + 67);
  v10 = v14;
  v14 = 0LL;
  *((_QWORD *)this + 67) = v10;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  v4 = 0;
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v4;
}
