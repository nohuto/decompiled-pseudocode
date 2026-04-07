/*
 * XREFs of ??_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z @ 0x18009BFFC
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18003A504 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x18009BEE4 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18009C4D4 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CBaseObject **__fastcall CapturedWindowRepresentation::SecondaryWindow::`scalar deleting destructor'(
        CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 1);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
