/*
 * XREFs of ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B120
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     NtMITSetLastInputRecipient @ 0x1401BB550 (NtMITSetLastInputRecipient.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1402209F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B158 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 */

__int64 __fastcall LastWokenThread::Set(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  LOBYTE(a4) = a3;
  return CLastWokenThread::Set(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 464) + 1184LL) + 3048LL), a1, a2, a4);
}
