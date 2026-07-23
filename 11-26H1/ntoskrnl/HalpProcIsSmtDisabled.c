/*
 * XREFs of HalpProcIsSmtDisabled @ 0x140CB5508
 * Callers:
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 */

bool __fastcall HalpProcIsSmtDisabled(__int64 a1)
{
  char v2; // bl
  const char *v3; // rcx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v5 = 0;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v5)
    && v5 == 2
    && a1
    && (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3492LL) & 0x2000) != 0
    && !HalpIsPartitionCpuManager() )
  {
    return 1;
  }
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v5) && v5 == 1 )
  {
    if ( !a1 )
      return v2;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3492LL) & 0x2000) != 0 && !HalpIsPartitionCpuManager() )
      return 1;
  }
  else if ( !a1 )
  {
    return v2;
  }
  v3 = *(const char **)(a1 + 216);
  if ( v3 && strstr(v3, "SMT=BLOCKED") )
    return HalpIsPartitionCpuManager() == 0;
  return v2;
}
