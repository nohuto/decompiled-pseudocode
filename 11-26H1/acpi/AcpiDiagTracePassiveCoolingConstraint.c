/*
 * XREFs of AcpiDiagTracePassiveCoolingConstraint @ 0x14002CFFC
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

void __fastcall AcpiDiagTracePassiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  bool v4; // zf
  const EVENT_DESCRIPTOR *v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-68h] BYREF
  char *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]
  char v9; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 1LL;
  v4 = a3 == 0;
  v7 = &v9;
  v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_CHANGE;
  if ( !v4 )
    v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN;
  AcpiDiagTraceConstraintEvent(a1, a2, v5, (int)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN, &v6);
}
