/*
 * XREFs of ??_GSnapFlyoutHost@@UEAAPEAXI@Z @ 0x18059E380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18059DC84 (--1SnapFlyoutHost@@UEAA@XZ.c)
 */

SnapFlyoutHost *__fastcall SnapFlyoutHost::`scalar deleting destructor'(SnapFlyoutHost *this, char a2)
{
  SnapFlyoutHost::~SnapFlyoutHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
