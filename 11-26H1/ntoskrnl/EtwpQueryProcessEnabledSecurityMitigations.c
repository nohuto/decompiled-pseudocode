/*
 * XREFs of EtwpQueryProcessEnabledSecurityMitigations @ 0x1404CE9B8
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryProcessEnabledSecurityMitigations(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  int v3; // ecx

  v1 = *(_DWORD *)(a1 + 1876);
  v2 = 0;
  v3 = v1 & 0x8000;
  if ( (v1 & 0x100000) != 0 )
  {
    return v3 != 0 ? 8 : 2;
  }
  else if ( (v1 & 0x4000) != 0 )
  {
    return v3 != 0 ? 4 : 1;
  }
  return v2;
}
