/*
 * XREFs of _HMPheFromObjectWorker @ 0x140071E30
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x14004A560 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     HMChangeOwnerProcessWorker @ 0x1400CE880 (HMChangeOwnerProcessWorker.c)
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     DestroyKL @ 0x140118548 (DestroyKL.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPheFromObjectWorker(_DWORD *a1, int a2, int a3)
{
  int v3; // edi
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v3 = (unsigned __int16)*a1;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  return (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 19928) * v3)
       + *(_QWORD *)(UserSessionState + 19920);
}
