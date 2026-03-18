/*
 * XREFs of rimStartDeviceReadIfAllowed @ 0x14009776C
 * Callers:
 *     rimIssueReads @ 0x140098194 (rimIssueReads.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 */

__int64 __fastcall rimStartDeviceReadIfAllowed(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 168);
  v3 = 0;
  if ( (v2 & 0x200) == 0 && (v2 & 0x80u) == 0 && (v2 & 0x400) == 0 && (v2 & 0x2000) == 0 )
    return (unsigned int)RIMStartDeviceSpecificRead(a1, a2);
  return v3;
}
