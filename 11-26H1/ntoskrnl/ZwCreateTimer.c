/*
 * XREFs of ZwCreateTimer @ 0x140724D50
 * Callers:
 *     DifZwCreateTimerWrapper @ 0x1406A2790 (DifZwCreateTimerWrapper.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B3F65C (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, *(_QWORD *)&DesiredAccess);
}
