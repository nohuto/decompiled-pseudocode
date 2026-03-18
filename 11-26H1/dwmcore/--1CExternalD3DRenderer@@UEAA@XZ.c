/*
 * XREFs of ??1CExternalD3DRenderer@@UEAA@XZ @ 0x180295998
 * Callers:
 *     ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x1802959C0 (--_ECExternalD3DRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CExternalD3DRenderer::~CExternalD3DRenderer(CExternalD3DRenderer *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  CD3DResource::~CD3DResource(this);
}
