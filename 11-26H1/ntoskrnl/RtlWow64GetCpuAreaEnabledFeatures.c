/*
 * XREFs of RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0
 * Callers:
 *     PspWow64SetupCpuArea @ 0x1409E6E90 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x140466740 (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

unsigned __int64 __fastcall RtlWow64GetCpuAreaEnabledFeatures(int *a1)
{
  int v1; // ecx
  int v2; // ecx
  int *v3; // r8
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( (v1 & 0x10000) == 0 )
    return 0LL;
  v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  RtlpRemoveArchDisallowedXStateFeatures(v1, &v5);
  result = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v5 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    *v3 = v2 | 0x10040;
  return result;
}
