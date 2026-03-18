/*
 * XREFs of ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180132FEC
 * Callers:
 *     ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801323EC (-EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801333D0 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4 (-EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180154A34 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::GetExistingInteropDevice(
        CDDisplayManager *this,
        struct _LUID a2,
        struct IDisplayDeviceInterop **a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 *v6; // rax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CDDisplayManager *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  v4 = qword_1803DE740;
  v5 = *(_QWORD *)(qword_1803DE740 + 8);
  if ( !*(_BYTE *)(v5 + 25) )
  {
    do
    {
      v6 = (__int64 *)(v5 + 16);
      if ( *(_QWORD *)(v5 + 32) >= *(unsigned __int64 *)&a2 )
      {
        v6 = (__int64 *)v5;
        v4 = v5;
      }
      v5 = *v6;
    }
    while ( !*(_BYTE *)(*v6 + 25) );
  }
  if ( *(_BYTE *)(v4 + 25) || *(unsigned __int64 *)&a2 < *(_QWORD *)(v4 + 32) )
    v4 = qword_1803DE740;
  if ( v4 == qword_1803DE740 )
    return 2291662854LL;
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    &v11,
    v4 + 40);
  v8 = (**(__int64 (__fastcall ***)(CDDisplayManager *, GUID *, struct IDisplayDeviceInterop **))v11)(
         v11,
         &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    return v9;
  }
}
