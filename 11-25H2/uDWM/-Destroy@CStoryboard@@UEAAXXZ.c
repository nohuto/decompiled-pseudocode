/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x180087850
 * Callers:
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800C6C10 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800C6C50 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800C6C90 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
