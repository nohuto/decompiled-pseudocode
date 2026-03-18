/*
 * XREFs of ??1CColorKeyBitmapRealization@@UEAA@XZ @ 0x1801A3E7C
 * Callers:
 *     ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x1801A3E40 (--_ECColorKeyBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CColorKeyBitmapRealization::~CColorKeyBitmapRealization(CColorKeyBitmapRealization *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
