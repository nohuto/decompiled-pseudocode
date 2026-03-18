/*
 * XREFs of AcpiDiagTraceActiveCoolingConstraint @ 0x14002C178
 * Callers:
 *     AcpiDiagTraceThermalZoneRundown @ 0x14002BCA4 (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIThermalUpdateConstraints @ 0x140045350 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x140069DD4 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiThermalDestroyContraints @ 0x14006A958 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     AcpiDiagTraceConstraintEvent @ 0x14002CBF0 (AcpiDiagTraceConstraintEvent.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall AcpiDiagTraceActiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  void *v5; // r8
  __int16 v7; // [rsp+30h] [rbp-78h] BYREF
  __int16 *v8; // [rsp+80h] [rbp-28h]
  __int64 v9; // [rsp+88h] [rbp-20h]

  v9 = 2LL;
  v5 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_CHANGE;
  v7 = a4 != 0;
  v8 = &v7;
  if ( a3 )
    v5 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_RUNDOWN;
  return AcpiDiagTraceConstraintEvent(a1, a2, v5);
}
