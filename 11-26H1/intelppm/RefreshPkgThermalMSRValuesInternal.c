/*
 * XREFs of RefreshPkgThermalMSRValuesInternal @ 0x1400017B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RefreshPkgThermalMSRValuesInternal(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  unsigned int v5; // edi

  for ( i = qword_140019B00; (__int64 *)i != &qword_140019B00; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 24) & 2) != 0 )
    {
      if ( *(_QWORD *)(i + 32) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(i + 16));
        v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(i + 32))(a1, a2, i);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          *(_QWORD *)(i + 16));
        return v5;
      }
      return 0LL;
    }
  }
  return 0LL;
}
