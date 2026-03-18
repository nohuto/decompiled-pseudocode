/*
 * XREFs of PspGetProcessProtectionRequirementsFromImage @ 0x140ADCEA4
 * Callers:
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     RtlTestProtectedAccess @ 0x140A7FCA4 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspGetProcessProtectionRequirementsFromImage(__int64 a1)
{
  unsigned __int8 v1; // r9
  unsigned __int8 *v2; // r11
  char v4; // r10
  char v5; // r9

  if ( (*(_BYTE *)(*(_QWORD *)MiSectionControlArea(a1) + 15LL) & 0xF) == 5 )
  {
    v4 = -127;
    if ( v1 && v1 != 0x81 && RtlTestProtectedAccess(v1, 0x81u) )
      v4 = v5;
    v1 = v4;
  }
  *v2 = v1;
  return 0LL;
}
