/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180030650
 * Callers:
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800305F0 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18008821C (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180030680 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
