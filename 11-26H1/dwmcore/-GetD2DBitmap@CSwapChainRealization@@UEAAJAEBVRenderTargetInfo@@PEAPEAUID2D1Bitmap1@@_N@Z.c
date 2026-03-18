/*
 * XREFs of ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180131048 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30 (-EnsureTexture@CSwapChainRealization@@IEAAJXZ.c)
 *     ?EnsureTextureCollection@CSwapChainRealization@@IEAAJXZ @ 0x1802AD054 (-EnsureTextureCollection@CSwapChainRealization@@IEAAJXZ.c)
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 *     ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC (-GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2694 (-GetD2DBitmap@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::GetD2DBitmap(
        CSwapChainRealization *this,
        struct _LUID *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  CTextureCollection **v4; // r15
  int v9; // ebx
  __int64 v10; // rdx
  DWORD LowPart; // ebx
  _DWORD *v12; // rax
  CComposition *v13; // rcx
  _DWORD *v14; // rax
  bool v15; // dl
  unsigned __int8 (*v16)(void); // rax
  __int64 v17; // r8
  int Device; // eax
  __int64 v19; // rdx
  enum DXGI_FORMAT *v20; // rax
  int CompatibleTextureFormat; // eax
  int v22; // r8d
  int D2DBitmap; // eax
  __int64 v24; // rdx
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v26)(struct IBitmapResource *, __int64 *); // rbx
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  CD3DDevice *v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  struct CTranscodeBitmap *v33[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v4 = (CTextureCollection **)((char *)this - 8);
  *a3 = 0LL;
  v9 = CSwapChainRealization::EnsureTexture((CSwapChainRealization *)((char *)this - 8));
  if ( v9 < 0 )
  {
    v10 = 248LL;
    goto LABEL_3;
  }
  LowPart = a2[1].LowPart;
  v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, struct CTranscodeBitmap **))(*(_QWORD *)(*((_QWORD *)this + 32)
                                                                                             + 120LL)
                                                                                 + 96LL))(
                    *((_QWORD *)this + 32) + 120LL,
                    v33);
  if ( *v12 != -1 && *v12 != LowPart && LowPart != -3
    || (*((_BYTE *)this + 208) & 2) != 0 && *((_BYTE *)g_pComposition + 6458) )
  {
LABEL_34:
    v32 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v13);
    v26 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v32);
    v27 = v26(StockBlackBitmap, &v32);
    v9 = v27;
    if ( v27 >= 0 )
    {
      LOBYTE(v28) = a4;
      v27 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v32 + 120LL))(
              v32,
              a2,
              a3,
              v28);
      v9 = v27;
      if ( v27 >= 0 )
      {
        v9 = 0;
        goto LABEL_40;
      }
      v29 = 303LL;
    }
    else
    {
      v29 = 298LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)(unsigned int)v27);
LABEL_40:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
    return (unsigned int)v9;
  }
  v14 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, CD3DDevice **))(**((_QWORD **)this + 32) + 64LL))(
                    *((_QWORD *)this + 32),
                    &v31);
  v15 = a2->LowPart == *v14 && a2->HighPart == v14[1];
  v16 = *(unsigned __int8 (**)(void))(**((_QWORD **)this + 32) + 56LL);
  if ( !v15 )
  {
    if ( v16() )
      goto LABEL_34;
    v9 = CSwapChainRealization::EnsureTextureCollection((CSwapChainRealization *)v4);
    if ( v9 < 0 )
    {
      v10 = 266LL;
      goto LABEL_3;
    }
    v31 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v31);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, &v31);
    v9 = Device;
    if ( Device < 0 )
    {
      v19 = 271LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
        (const char *)(unsigned int)Device);
      goto LABEL_33;
    }
    v20 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, struct CTranscodeBitmap **))(*(_QWORD *)(*((_QWORD *)this + 32) + 128LL)
                                                                                             + 24LL))(
                                *((_QWORD *)this + 32) + 128LL,
                                v33);
    CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(v31, *v20);
    if ( CompatibleTextureFormat == v22 )
    {
      Device = CTextureCollection::GetSecondaryD2DBitmap(v4[35], (const struct RenderTargetInfo *)a2, a3, a4);
      v9 = Device;
      if ( Device < 0 )
      {
        v19 = 279LL;
        goto LABEL_32;
      }
LABEL_33:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v31);
      return (unsigned int)v9;
    }
    v33[0] = 0LL;
    D2DBitmap = CSwapChainRealization::Transcode((CSwapChainRealization *)v4, (const struct RenderTargetInfo *)a2, v33);
    v9 = D2DBitmap;
    if ( D2DBitmap >= 0 )
    {
      D2DBitmap = CTranscodeBitmap::GetD2DBitmap(v33[0], (const struct RenderTargetInfo *)a2, a3, a4);
      v9 = D2DBitmap;
      if ( D2DBitmap >= 0 )
        goto LABEL_27;
      v24 = 289LL;
    }
    else
    {
      v24 = 284LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)(unsigned int)D2DBitmap);
LABEL_27:
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(v33);
    goto LABEL_33;
  }
  if ( v16() && !LOBYTE(a2[2].HighPart) )
    goto LABEL_34;
  LOBYTE(v17) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)(*((_QWORD *)this + 32) + 120LL)
                                                                           + 104LL))(
         *((_QWORD *)this + 32) + 120LL,
         a3,
         v17);
  if ( v9 >= 0 )
    return (unsigned int)v9;
  v10 = 259LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
