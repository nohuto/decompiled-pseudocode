/*
 * XREFs of ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x14017FCF0
 * Callers:
 *     <none>
 * Callees:
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     ReValidateHwndStrict @ 0x14017FD70 (ReValidateHwndStrict.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagWND *__fastcall tagUNIQUE_WINDOW_HANDLE::Get(tagUNIQUE_WINDOW_HANDLE *this)
{
  _DWORD *v3; // rax
  int v4; // edx
  int v5; // r8d
  _DWORD *v6; // rbx

  if ( !*(_QWORD *)this )
    return 0LL;
  v3 = (_DWORD *)ReValidateHwndStrict();
  v6 = v3;
  if ( !v3 )
    return 0LL;
  if ( *(_QWORD *)(HMPkheFromObjectWorker(v3, v4, v5) + 32) != *((_QWORD *)this + 1) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1271LL);
    return 0LL;
  }
  return (struct tagWND *)v6;
}
