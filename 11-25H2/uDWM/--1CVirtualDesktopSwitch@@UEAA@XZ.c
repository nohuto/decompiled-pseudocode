/*
 * XREFs of ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C67F0
 * Callers:
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800C6990 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CVirtualDesktopSwitch::~CVirtualDesktopSwitch(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 16);
  CStoryboard::~CStoryboard(this);
}
