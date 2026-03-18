/*
 * XREFs of ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18014A9D8
 * Callers:
 *     ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ @ 0x18014A110 (-ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014A970 (-NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x180252C70 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x18014AA6C (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTarget::SetRootVisual(CRenderTarget *this, struct CVisual *a2)
{
  struct CVisualTree *v2; // rbx
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisualTree *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v8, 1);
    v6 = VisualTree;
    if ( VisualTree < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\rendertarget.cpp",
        (const char *)(unsigned int)VisualTree);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v8);
      return v6;
    }
    v2 = v8;
  }
  CRenderTarget::SetVisualTree(this, v2);
  if ( v2 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
