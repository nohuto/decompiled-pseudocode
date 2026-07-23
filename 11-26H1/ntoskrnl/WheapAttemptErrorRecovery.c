/*
 * XREFs of WheapAttemptErrorRecovery @ 0x1406D8E04
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 * Callees:
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1406D8D64 (WheapAttemptArchitecturalErrorRecovery.c)
 */

__int64 __fastcall WheapAttemptErrorRecovery(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = WheapAttemptArchitecturalErrorRecovery(a1);
  if ( v2 >= 0 && !*(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a1 + 12) = 2;
  v3 = PshedAttemptErrorRecovery(a1);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    if ( v4 == 2 )
      goto LABEL_9;
  }
  else
  {
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 12) = 2;
LABEL_9:
      *(_DWORD *)(a1 + 104) |= 1u;
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 12) = 1;
  }
LABEL_10:
  if ( v2 < 0 && v3 >= 0 )
    return (unsigned int)v3;
  return (unsigned int)v2;
}
