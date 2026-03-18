/*
 * XREFs of LockCaptureWindow @ 0x140121D68
 * Callers:
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x140121EA8 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  char *v2; // rbx
  __int64 UserSessionState; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)a1 + 112;
  if ( *((_QWORD *)a1 + 14) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    --*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 6992LL);
  }
  if ( a2 )
  {
    v6 = W32GetUserSessionState(a1, a2);
    ++*(_DWORD *)(*(_QWORD *)(v6 + 19872) + 6992LL);
  }
  v9[0] = v2;
  v9[1] = a2;
  v7 = HMAssignmentLock(v9, 0LL);
  EditionUpdateRawMouseMode(a1);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v7;
}
