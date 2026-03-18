/*
 * XREFs of ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x140068154
 * Callers:
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x14010A158 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 * Callees:
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x14006855C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::InitializeQFrame(__int64 a1, __int64 a2, int a3, __int64 a4, CInputDest *a5, int a6)
{
  CTouchProcessor *v7; // rcx

  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  CInputDest::operator=(a2 + 16, a5);
  *(_DWORD *)(a2 + 140) &= 0xFFFFFFE7;
  *(_DWORD *)(a2 + 136) = 0;
  CTouchProcessor::InitializeQFrameCoalesceState(v7, (struct CPointerQFrame *)a2, a6);
  CInputDest::~CInputDest(a5);
}
