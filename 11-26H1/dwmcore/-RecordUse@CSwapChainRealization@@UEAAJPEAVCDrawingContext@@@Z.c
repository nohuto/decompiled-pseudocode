/*
 * XREFs of ?RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AE070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801A5BAC (-NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ.c)
 *     ?NotifyFrameContainsMonitorSpecificContent@CDrawingContext@@QEAAXVDisplayId@@@Z @ 0x1801B6280 (-NotifyFrameContainsMonitorSpecificContent@CDrawingContext@@QEAAXVDisplayId@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetDisplayId@CSwapChainRealization@@UEBA?AVDisplayId@@XZ @ 0x1802AD7D0 (-GetDisplayId@CSwapChainRealization@@UEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::RecordUse(CSwapChainRealization *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  *(_QWORD *)v10 = 0LL;
  v5 = v4;
  wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(v10);
  v6 = (*(__int64 (__fastcall **)(CSwapChainRealization *, __int64, int *))(*(_QWORD *)this + 104LL))(this, v5, v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CSwapChainRealization::GetDisplayId((__int64)this, &v11);
    if ( ((v11 + 3) & 0xFFFFFFFD) != 0 )
      CDrawingContext::NotifyFrameContainsMonitorSpecificContent((__int64)a2, v11);
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
      CDrawingContext::NotifyFrameContainsProtectedContent(a2);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v10 + 8LL) + 24LL))(
           *(_QWORD *)v10 + 8LL,
           v12);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v8 + 8)) )
      *((_BYTE *)a2 + 7982) = 1;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v10);
  return v7;
}
