/*
 * XREFs of ??1FxString@@UEAA@XZ @ 0x140052278
 * Callers:
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x140052240 (--_GFxString@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxString::~FxString(FxString *this)
{
  wchar_t *Buffer; // rcx

  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  FxObject::~FxObject(this);
}
