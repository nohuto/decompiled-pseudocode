/*
 * XREFs of ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800F5410
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B0A90 (-SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetColorSpace(CRenderTargetBitmap *this, unsigned int a2)
{
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 != *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 24LL))(
                           *((_QWORD *)this + 5) + 8LL,
                           v4)
                       + 8) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 144LL))(
      *((_QWORD *)this + 5) + 16LL,
      a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 80));
  }
}
