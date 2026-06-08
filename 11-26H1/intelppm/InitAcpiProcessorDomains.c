/*
 * XREFs of InitAcpiProcessorDomains @ 0x140029B60
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     InitAcpiPerfDomain @ 0x1400339E8 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140033B14 (InitAcpiThrottleDomain.c)
 *     InitAcpiIdleDomain @ 0x140040448 (InitAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 528) && (int)InitAcpiIdleDomain(a1, a1 + 536) < 0 )
    *(_QWORD *)(a1 + 536) = 0LL;
  v2 = *(_QWORD *)(a1 + 280);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 1200);
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0xF8000000) != 0
      && (int)InitAcpiPerfDomain(a1) >= 0
      && !_bittest64((const signed __int64 *)(a1 + 280), 0x24u) )
    {
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 472);
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x3000000) != 0
      && (int)InitAcpiThrottleDomain(a1) >= 0
      && (*(_QWORD *)(a1 + 280) & 0x10F8000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 520);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 208));
}
