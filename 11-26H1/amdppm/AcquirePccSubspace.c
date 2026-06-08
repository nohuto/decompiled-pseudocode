/*
 * XREFs of AcquirePccSubspace @ 0x1400274D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     StartPccCommand @ 0x14002787C (StartPccCommand.c)
 */

__int64 AcquirePccSubspace()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int started; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140015C30,
    0LL);
  v1 = (__int64 *)qword_140015C38;
  while ( v1 != &qword_140015C38 )
  {
    started = StartPccCommand(v1);
    v1 = (__int64 *)*v1;
    if ( started < 0 )
      v0 = started;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140015C30);
  return v0;
}
