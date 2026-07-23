/*
 * XREFs of HalpMcStagePayload @ 0x14059606C
 * Callers:
 *     HalpMcStaging @ 0x1405960D0 (HalpMcStaging.c)
 *     HalpMcStagingHypervisor @ 0x1405961E0 (HalpMcStagingHypervisor.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalpMcStagingIssueLoadVerify @ 0x1405962F4 (HalpMcStagingIssueLoadVerify.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 */

char *__fastcall HalpMcStagePayload(LARGE_INTEGER a1)
{
  char *result; // rax
  unsigned __int64 v2; // rbx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  result = (char *)HalMapIoSpace(a1, 0x1000uLL, MmNonCached);
  v2 = (unsigned __int64)result;
  if ( result )
  {
    *(_DWORD *)result |= 1u;
    _InterlockedOr(v3, 0);
    while ( (int)HalpMcStagingIssueLoadVerify(v2, &v4) >= 0 && v4 != -1 )
      ;
    return HalpUnmapVirtualAddress(v2, 1LL, 0);
  }
  return result;
}
