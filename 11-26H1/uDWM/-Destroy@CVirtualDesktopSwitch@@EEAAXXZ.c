/*
 * XREFs of ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800C0A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800C4428 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::Destroy(CVirtualDesktopSwitch *this)
{
  CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(this);
  CStoryboard::Destroy(this);
}
