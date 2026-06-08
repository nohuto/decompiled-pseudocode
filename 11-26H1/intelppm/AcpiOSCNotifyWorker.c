/*
 * XREFs of AcpiOSCNotifyWorker @ 0x14002FCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall AcpiOSCNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  _UNKNOWN **result; // rax

  if ( a2 )
    IoFreeWorkItem(a2);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          (_DWORD)a2,
                          3,
                          89,
                          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
  }
  return result;
}
