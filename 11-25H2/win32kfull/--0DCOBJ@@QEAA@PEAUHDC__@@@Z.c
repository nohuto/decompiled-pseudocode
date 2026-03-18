/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4
 * Callers:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 *     GreGetCharSet @ 0x140195348 (GreGetCharSet.c)
 *     NtGdiMakeObjectUnXferable @ 0x1402633B0 (NtGdiMakeObjectUnXferable.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x140300018 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 40);
  XDCOBJ::vLock(this, a2);
  return this;
}
