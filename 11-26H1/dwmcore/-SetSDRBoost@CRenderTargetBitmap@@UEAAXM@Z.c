/*
 * XREFs of ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180013950
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z @ 0x1802B0B10 (-SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetSDRBoost(CRenderTargetBitmap *this, float a2)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 120LL))(
                          *((_QWORD *)this + 5) + 16LL,
                          v3)
                      + 16) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 160LL))(*((_QWORD *)this + 5) + 16LL);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 80));
  }
}
