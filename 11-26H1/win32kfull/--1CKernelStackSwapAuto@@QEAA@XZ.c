/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1401B8228
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1401B8244 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_QWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
