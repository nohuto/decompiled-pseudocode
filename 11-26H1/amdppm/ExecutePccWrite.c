/*
 * XREFs of ExecutePccWrite @ 0x140027590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ExecutePccCommand @ 0x140027564 (ExecutePccCommand.c)
 */

__int64 ExecutePccWrite()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v2; // eax

  v0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140015C30,
    0LL);
  v1 = (__int64 *)qword_140015C38;
  while ( v1 != &qword_140015C38 )
  {
    v2 = ExecutePccCommand((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( v2 < 0 )
      v0 = v2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140015C30);
  return v0;
}
