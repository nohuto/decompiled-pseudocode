/*
 * XREFs of ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x14012A060
 * Callers:
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x140220638 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1402209F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ @ 0x14012A088 (-ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Clear(CMouseProcessor::MouseOwner *this)
{
  CInputDest::~CInputDest(this);
  _InterlockedExchange((volatile __int32 *)this + 30, 0);
  InputTraceLogging::Mouse::ClearSystemCapture();
}
