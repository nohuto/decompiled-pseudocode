/*
 * XREFs of ??1CSpriteVisualProxy@@UEAA@XZ @ 0x18005CA0C
 * Callers:
 *     ??_GCSpriteVisualProxy@@UEAAPEAXI@Z @ 0x18005C9C0 (--_GCSpriteVisualProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSpriteVisualProxy::~CSpriteVisualProxy(CSpriteVisualProxy *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  CVisualProxy::~CVisualProxy(this);
}
