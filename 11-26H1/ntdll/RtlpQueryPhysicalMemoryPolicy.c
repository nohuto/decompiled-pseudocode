/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x1800D5C0C
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D5198 (RtlpHpInitializePerfPolicies.c)
 *     RtlQueryResourcePolicy @ 0x18010F510 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // eax
  unsigned __int64 v4; // rax
  bool v5; // cc
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !RtlGetNtProductType(&v6) || v6 != 1 )
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
