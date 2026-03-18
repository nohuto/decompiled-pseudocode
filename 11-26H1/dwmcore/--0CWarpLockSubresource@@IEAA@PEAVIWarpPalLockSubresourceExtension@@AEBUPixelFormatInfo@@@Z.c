/*
 * XREFs of ??0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@AEBUPixelFormatInfo@@@Z @ 0x1800E2B44
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::CWarpLockSubresource(
        CWarpLockSubresource *this,
        struct IWarpPalLockSubresourceExtension *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 v5; // rdx
  CWarpLockSubresource *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    (__int64)a2);
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 21) = *((_DWORD *)a3 + 2);
  result = this;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
