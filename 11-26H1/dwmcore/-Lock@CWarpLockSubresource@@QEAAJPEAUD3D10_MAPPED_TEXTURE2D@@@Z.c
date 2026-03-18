/*
 * XREFs of ?Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z @ 0x1800E2C84
 * Callers:
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x1800E2940 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800E4134 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Lock(CWarpLockSubresource *this, struct D3D10_MAPPED_TEXTURE2D *a2)
{
  struct D3D10_MAPPED_TEXTURE2D *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 28) = *((_DWORD *)this + 9);
  *((_DWORD *)this + 29) = *((_DWORD *)this + 10);
  *((_QWORD *)this + 13) = 0LL;
  v3 = (struct D3D10_MAPPED_TEXTURE2D *)((char *)this + 88);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, char *))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         *((unsigned int *)this + 8),
         1LL,
         0,
         (char *)this + 88);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\WarpLockSubresource.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    result = 0LL;
    *a2 = *v3;
  }
  return result;
}
