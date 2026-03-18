/*
 * XREFs of ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x140087B68
 * Callers:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1400875C0 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CAD6C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::TestWindowFlag(CInputDest *this, __int16 a2)
{
  char v2; // r9
  bool v3; // zf

  v2 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v3 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *((_QWORD *)this + 10) + 24LL)) == 0;
    return !v3;
  }
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v3 = ((unsigned __int8)a2 & *(_BYTE *)(HIBYTE(a2) + *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 16LL)) == 0;
    return !v3;
  }
  return v2;
}
