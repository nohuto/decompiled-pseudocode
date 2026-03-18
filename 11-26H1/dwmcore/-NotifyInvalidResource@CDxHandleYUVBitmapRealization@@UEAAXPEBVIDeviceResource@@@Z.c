/*
 * XREFs of ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1800FB1AC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyInvalidResource(
        CDxHandleYUVBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleYUVBitmapRealization *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CDxHandleYUVBitmapRealization *)((char *)this - 16);
  v6 = (volatile signed __int32 *)((char *)this - 16);
  if ( this != (CDxHandleYUVBitmapRealization *)16 )
    CMILRefCountImpl::AddReference((CDxHandleYUVBitmapRealization *)((char *)v2 + 8));
  v3 = (*(__int64 (__fastcall **)(__int64, const struct IDeviceResource *))(*((_QWORD *)v2 + 41) + 32LL))(
         (__int64)v2 + 328,
         a2);
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = (__int64)(*((_QWORD *)v2 + 45) - *((_QWORD *)v2 + 44)) >> 3;
  while ( (_DWORD)v4 )
  {
    LODWORD(v4) = v4 - 1;
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)v2 + 44) + 8LL * (unsigned int)v4);
    (**v5)(v5, v3);
  }
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v2 + 16LL))(v2);
  CDxHandleYUVBitmapRealization::ReleaseTexture(v2);
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v6);
}
