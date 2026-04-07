/*
 * XREFs of ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800C6950
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C6774 (--1CGroupingStoryboard@@UEAA@XZ.c)
 */

CAppSwitch *__fastcall CAppSwitch::`scalar deleting destructor'(CAppSwitch *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CGroupingStoryboard::~CGroupingStoryboard(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
