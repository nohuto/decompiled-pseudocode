/*
 * XREFs of WheapApplyThresholdChecks @ 0x1403E2B48
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 * Callees:
 *     WheapGetErrorThresholdInformation @ 0x1403E2BFC (WheapGetErrorThresholdInformation.c)
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  ++*(_DWORD *)(a1 + 84);
  LODWORD(v6) = 0;
  v5 = 0;
  WheapGetErrorThresholdInformation(a1, &v5, &v6);
  if ( (unsigned int)v6 <= 1 )
    return 0;
  v3 = MEMORY[0xFFFFF78000000320];
  if ( v5
    && KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > (unsigned __int64)v5 )
  {
    *(_DWORD *)(a1 + 80) = 1;
    *(_QWORD *)(a1 + 72) = v3;
    return 0;
  }
  if ( ++*(_DWORD *)(a1 + 80) < (unsigned int)v6 )
    return 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 1;
}
