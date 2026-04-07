/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x18003D6C0
 * Callers:
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800C09C0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800C0A00 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800C0A40 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
