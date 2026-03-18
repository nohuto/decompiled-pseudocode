/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x140008CC0
 * Callers:
 *     NtGdiDestroyOPMProtectedOutput @ 0x140008CA0 (NtGdiDestroyOPMProtectedOutput.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x140008D00 (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(void *a1)
{
  __int64 SessionState; // rax
  int v3; // eax
  unsigned int v4; // ecx

  SessionState = W32GetSessionState(a1);
  v3 = COPM::DestroyProtectedOutput(*(COPM **)(*(_QWORD *)(SessionState + 88) + 3728LL), a1);
  v4 = 0;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v4;
}
