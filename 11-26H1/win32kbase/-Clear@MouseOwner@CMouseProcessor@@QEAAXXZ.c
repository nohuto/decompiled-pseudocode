/*
 * XREFs of ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14010B1A0
 * Callers:
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x140223874 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ @ 0x14010B1C8 (-ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Clear(CMouseProcessor::MouseOwner *this)
{
  CInputDest::~CInputDest(this);
  _InterlockedExchange((volatile __int32 *)this + 30, 0);
  InputTraceLogging::Mouse::ClearSystemCapture();
}
