/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18006CF94
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D10F0 (RtlpHpInitializePerfPolicies.c)
 *     RtlQueryResourcePolicy @ 0x18010F0A0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800840F0 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // eax
  unsigned __int64 v4; // rax
  bool v5; // cc
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  NtProductType = 0;
  if ( !RtlGetNtProductType(&NtProductType) || NtProductType != NtProductWinNt )
    goto LABEL_3;
  v4 = MEMORY[0x7FFE0310];
  if ( !MEMORY[0x7FFE0310] )
    v4 = MEMORY[0x7FFE02E8];
  v5 = v4 <= 0x83400;
  v2 = 10;
  if ( !v5 )
LABEL_3:
    v2 = 20;
  *a1 = v2;
  return 0LL;
}
