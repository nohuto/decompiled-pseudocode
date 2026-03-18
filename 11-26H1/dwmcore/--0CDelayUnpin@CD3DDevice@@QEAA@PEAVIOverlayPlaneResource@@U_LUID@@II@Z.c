/*
 * XREFs of ??0CDelayUnpin@CD3DDevice@@QEAA@PEAVIOverlayPlaneResource@@U_LUID@@II@Z @ 0x180215B74
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z @ 0x18029764C (-DelayUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@U_LUID@@II@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     McTemplateU0xqqxqx_EventWriteTransfer @ 0x1802999C0 (McTemplateU0xqqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID *__fastcall CD3DDevice::CDelayUnpin::CDelayUnpin(
        struct _LUID *this,
        struct IOverlayPlaneResource *a2,
        struct _LUID a3,
        DWORD a4,
        unsigned int a5)
{
  char v8; // r14
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  char v10; // si
  char v11; // r15
  _DWORD *v12; // rax
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  struct _LUID v16; // [rsp+90h] [rbp+18h]

  v16 = a3;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    this,
    (__int64)a2);
  v8 = a5;
  this[2].HighPart = a5;
  this[1] = a3;
  this[2].LowPart = a4;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*this;
    v10 = 0;
    v15 = 0LL;
    v11 = -1;
    if ( (**v9)(v9, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v15) >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 248LL))(v15);
    }
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v12 = (_DWORD *)(*(__int64 (__fastcall **)(struct _LUID, _BYTE *))(**(_QWORD **)this + 24LL))(*this, v14);
      McTemplateU0xqqxqx_EventWriteTransfer(
        *v12,
        (unsigned int)&ResourcePendingUnPin,
        a3.LowPart,
        a4,
        v8,
        *v12,
        v11,
        v10);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  }
  return this;
}
