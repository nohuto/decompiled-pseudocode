/*
 * XREFs of ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C0490
 * Callers:
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800C0730 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopSwitch::~CVirtualDesktopSwitch(void **this)
{
  CBitmapSourceArray::~CBitmapSourceArray(this + 20);
  CBitmapSourceArray::~CBitmapSourceArray(this + 16);
  CStoryboard::~CStoryboard((CStoryboard *)this);
}
