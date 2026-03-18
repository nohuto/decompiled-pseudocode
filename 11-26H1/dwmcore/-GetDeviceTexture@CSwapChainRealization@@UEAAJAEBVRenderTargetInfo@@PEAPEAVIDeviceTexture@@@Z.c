/*
 * XREFs of ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0
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
 *     ?GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1AEC (-GetSecondaryDeviceTexture@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@.c)
 *     ?GetDeviceTexture@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B2754 (-GetDeviceTexture@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::GetDeviceTexture(
        CSwapChainRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CTextureCollection **v3; // r15
  int v7; // ebx
  __int64 v8; // rdx
  DWORD LowPart; // ebx
  _DWORD *v10; // rax
  CComposition *v11; // rcx
  _DWORD *v12; // rax
  bool v13; // dl
  unsigned __int8 (*v14)(void); // rax
  struct IDeviceTexture *v15; // rcx
  int Device; // eax
  __int64 v18; // rdx
  enum DXGI_FORMAT *v19; // rax
  int CompatibleTextureFormat; // eax
  int v21; // r8d
  int DeviceTexture; // eax
  __int64 v23; // rdx
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v25)(struct IBitmapResource *, __int64 *); // rbx
  int v26; // eax
  int v27; // eax
  CD3DDevice *v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+28h] [rbp-28h] BYREF
  struct CTranscodeBitmap *v30[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v3 = (CTextureCollection **)((char *)this - 8);
  *a3 = 0LL;
  v7 = CSwapChainRealization::EnsureTexture((CSwapChainRealization *)((char *)this - 8));
  if ( v7 >= 0 )
  {
    LowPart = a2[1].LowPart;
    v10 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, struct CTranscodeBitmap **))(*(_QWORD *)(*((_QWORD *)this + 32)
                                                                                               + 120LL)
                                                                                   + 96LL))(
                      *((_QWORD *)this + 32) + 120LL,
                      v30);
    if ( *v10 != -1 && *v10 != LowPart && LowPart != -3
      || (*((_BYTE *)this + 208) & 2) != 0 && *((_BYTE *)g_pComposition + 6458) )
    {
      goto LABEL_33;
    }
    v12 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, CD3DDevice **))(**((_QWORD **)this + 32) + 64LL))(
                      *((_QWORD *)this + 32),
                      &v28);
    v13 = a2->LowPart == *v12 && a2->HighPart == v12[1];
    v14 = *(unsigned __int8 (**)(void))(**((_QWORD **)this + 32) + 56LL);
    if ( v13 )
    {
      if ( !v14() || LOBYTE(a2[2].HighPart) )
      {
        v15 = (struct IDeviceTexture *)((*((_QWORD *)this + 32) + 120LL) & -(__int64)(*((_QWORD *)this + 32) != 0LL));
        *a3 = v15;
        (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v15 + 8LL))(v15);
        return 0LL;
      }
      goto LABEL_33;
    }
    if ( v14() )
    {
LABEL_33:
      v29 = 0LL;
      StockBlackBitmap = CComposition::GetStockBlackBitmap(v11);
      v25 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v29);
      v26 = v25(StockBlackBitmap, &v29);
      v7 = v26;
      if ( v26 >= 0 )
      {
        v28 = 0LL;
        v27 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct IDeviceTexture **))(*(_QWORD *)v29 + 104LL))(
                v29,
                a2,
                a3);
        v7 = v27;
        if ( v27 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
          v7 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xEB,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
            (const char *)(unsigned int)v27);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE8,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
          (const char *)(unsigned int)v26);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
      return (unsigned int)v7;
    }
    v7 = CSwapChainRealization::EnsureTextureCollection((CSwapChainRealization *)v3);
    if ( v7 < 0 )
    {
      v8 = 202LL;
      goto LABEL_3;
    }
    v28 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v28);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, &v28);
    v7 = Device;
    if ( Device < 0 )
    {
      v18 = 207LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
        (const char *)(unsigned int)Device);
      goto LABEL_32;
    }
    v19 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, struct CTranscodeBitmap **))(*(_QWORD *)(*((_QWORD *)this + 32) + 128LL)
                                                                                             + 24LL))(
                                *((_QWORD *)this + 32) + 128LL,
                                v30);
    CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(v28, *v19);
    if ( CompatibleTextureFormat == v21 )
    {
      Device = CTextureCollection::GetSecondaryDeviceTexture(v3[35], (const struct RenderTargetInfo *)a2, a3);
      v7 = Device;
      if ( Device < 0 )
      {
        v18 = 214LL;
        goto LABEL_31;
      }
LABEL_32:
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v28);
      return (unsigned int)v7;
    }
    v30[0] = 0LL;
    DeviceTexture = CSwapChainRealization::Transcode(
                      (CSwapChainRealization *)v3,
                      (const struct RenderTargetInfo *)a2,
                      v30);
    v7 = DeviceTexture;
    if ( DeviceTexture >= 0 )
    {
      DeviceTexture = CTranscodeBitmap::GetDeviceTexture(v30[0], (const struct RenderTargetInfo *)a2, a3);
      v7 = DeviceTexture;
      if ( DeviceTexture >= 0 )
        goto LABEL_26;
      v23 = 223LL;
    }
    else
    {
      v23 = 219LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
      (const char *)(unsigned int)DeviceTexture);
LABEL_26:
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(v30);
    goto LABEL_32;
  }
  v8 = 184LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
