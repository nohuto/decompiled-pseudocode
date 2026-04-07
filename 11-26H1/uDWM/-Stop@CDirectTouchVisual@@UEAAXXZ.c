/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180005D70
 * Callers:
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180002DDC (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180005D1C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180006480 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
