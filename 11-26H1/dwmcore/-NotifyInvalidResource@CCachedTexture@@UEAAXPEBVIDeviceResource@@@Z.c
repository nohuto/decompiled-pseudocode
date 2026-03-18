/*
 * XREFs of ?NotifyInvalidResource@CCachedTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B1E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?ReleaseResources@CCachedTexture@@AEAAXXZ @ 0x1802B1F4C (-ReleaseResources@CCachedTexture@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedTexture::NotifyInvalidResource(CCachedTexture *this, const struct IDeviceResource *a2)
{
  void (__fastcall ***v4)(_QWORD, const struct IDeviceResource *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    &v5,
    (__int64)this - 16);
  v4 = (void (__fastcall ***)(_QWORD, const struct IDeviceResource *))*((_QWORD *)this + 13);
  if ( v4 )
    (**v4)(v4, a2);
  CCachedTexture::ReleaseResources((CCachedTexture *)((char *)this - 16));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
}
