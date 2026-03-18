/*
 * XREFs of ACPIThermalGetOverrideHandle @ 0x1400A9848
 * Callers:
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1400C8E14 (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall ACPIThermalGetOverrideHandle(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  if ( (AcpiOverrideAttributes & 0x10000) != 0
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&v2) >= 0
    && (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\ThermalOverride") >= 0 )
  {
    OSOpenUnicodeHandle(&v2, 0LL, &v3);
  }
  if ( *((_QWORD *)&v2 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v2 + 1), 0);
  return v3;
}
