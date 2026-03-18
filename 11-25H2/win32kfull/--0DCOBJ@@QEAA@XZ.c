/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x140326D50
 * Callers:
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140326E38 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x140300018 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(
    (DCOBJ *)((char *)this + 40),
    v2,
    v3,
    v4);
  return this;
}
