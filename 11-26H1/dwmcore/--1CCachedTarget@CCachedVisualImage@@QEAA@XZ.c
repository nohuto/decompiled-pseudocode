/*
 * XREFs of ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x18009B878
 * Callers:
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x18009B658 (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18009B848 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::~CCachedTarget(CCachedVisualImage::CCachedTarget *this)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 80LL))(
    *((_QWORD *)this + 1),
    (*(_QWORD *)this + 88LL) & -(__int64)(*(_QWORD *)this != 0LL));
  (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 240LL))(
    *(_QWORD *)this,
    this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
