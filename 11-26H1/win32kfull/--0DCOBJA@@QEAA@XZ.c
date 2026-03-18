/*
 * XREFs of ??0DCOBJA@@QEAA@XZ @ 0x140310400
 * Callers:
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x140310FA0 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 *     GreCancelDC @ 0x140326374 (GreCancelDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x140159580 (--0XDCOBJ@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this)
{
  DCOBJA *result; // rax

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((_OWORD *)this + 2);
  result = this;
  *(_QWORD *)this = 0LL;
  return result;
}
