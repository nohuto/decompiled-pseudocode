/*
 * XREFs of Endpoint_UcxEvtEndpointStart @ 0x140030480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStart(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int i; // edi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a2,
             off_14006AFE8);
  v3 = result;
  if ( !*(_BYTE *)(result + 37) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
             WdfDriverGlobals,
             *(_QWORD *)(*(_QWORD *)(result + 88) + 72LL));
  v4 = *(_QWORD *)(result + 144);
  for ( i = 1; i <= *(_DWORD *)(v4 + 8); ++i )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v3 + 144) + 48) + 72LL));
  return result;
}
