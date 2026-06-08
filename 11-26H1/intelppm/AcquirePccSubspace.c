/*
 * XREFs of AcquirePccSubspace @ 0x1400322D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     StartPccCommand @ 0x14002989C (StartPccCommand.c)
 */

__int64 AcquirePccSubspace()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int started; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019800,
    0LL);
  v1 = (__int64 *)qword_140019808;
  while ( v1 != &qword_140019808 )
  {
    started = StartPccCommand((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( started < 0 )
      v0 = started;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019800);
  return v0;
}
