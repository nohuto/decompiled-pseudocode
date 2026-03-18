/*
 * XREFs of ??1?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ @ 0x1800AB584
 * Callers:
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800AB5C0 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1802466E0 (--_ECCompositionGlyphRun@@MEAAPEAXI@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x18026B54C (--1CCompositionTextLine@@MEAA@XZ.c)
 *     ??1CRemoteTexture@@MEAA@XZ @ 0x18027F2A4 (--1CRemoteTexture@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CTextObjectGeneratedT<CTextObject,CResource>::~CTextObjectGeneratedT<CTextObject,CResource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::~CResource((CResource *)this);
}
