/*
 * XREFs of ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x1401AA460
 * Callers:
 *     <none>
 * Callees:
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ReValidateHwndStrict @ 0x1401AC210 (ReValidateHwndStrict.c)
 */

struct tagWND *__fastcall tagUNIQUE_WINDOW_HANDLE::Get(tagUNIQUE_WINDOW_HANDLE *this)
{
  int *v2; // rax
  __int64 v3; // rdx
  int *v4; // rbx

  if ( *(_QWORD *)this )
  {
    v2 = (int *)ReValidateHwndStrict();
    v4 = v2;
    if ( v2 )
    {
      if ( *(_QWORD *)(HMPkheFromObjectWorker(v2, v3) + 32) == *((_QWORD *)this + 1) )
        return (struct tagWND *)v4;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1307);
    }
  }
  return 0LL;
}
