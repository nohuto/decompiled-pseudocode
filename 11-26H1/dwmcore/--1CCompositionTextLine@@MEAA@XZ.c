/*
 * XREFs of ??1CCompositionTextLine@@MEAA@XZ @ 0x18026B54C
 * Callers:
 *     ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x180246730 (--_GCCompositionTextLine@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CCompositionTextLine::~CCompositionTextLine(struct CResource **this)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)(this + 14);
  *this = (struct CResource *)&CCompositionTextLine::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(this);
}
