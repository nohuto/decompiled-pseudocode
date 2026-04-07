/*
 * XREFs of ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800C6990
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C67F0 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 */

void **__fastcall CVirtualDesktopSwitch::`vector deleting destructor'(void **this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CVirtualDesktopSwitch::~CVirtualDesktopSwitch(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
