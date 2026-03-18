/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x140185DE4
 * Callers:
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1402B2FF8 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  CKernelStackSwap::DisableStackSwap(this);
  return this;
}
