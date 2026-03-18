/*
 * XREFs of ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802379E8
 * Callers:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1802066B0 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z @ 0x1802067F0 (--R-$default_delete@VCSyncLockGroup@@@std@@QEBAXPEAVCSyncLockGroup@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (_QWORD *)*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CSyncLockGroup>::operator()((__int64)a1, v4);
  return a1;
}
