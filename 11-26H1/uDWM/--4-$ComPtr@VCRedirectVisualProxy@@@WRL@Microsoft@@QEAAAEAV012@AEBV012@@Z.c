/*
 * XREFs of ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BF78
 * Callers:
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C02C (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18009C1D0 (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(CBaseObject **a1, CBaseObject **a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rax
  CBaseObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      CBaseObject::AddRef(v3);
    v4 = *a1;
    *a1 = v3;
    v6 = v4;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v6);
  }
  return a1;
}
