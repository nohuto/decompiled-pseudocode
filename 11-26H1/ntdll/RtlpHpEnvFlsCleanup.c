/*
 * XREFs of RtlpHpEnvFlsCleanup @ 0x180108728
 * Callers:
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 * Callees:
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 */

void __fastcall RtlpHpEnvFlsCleanup(char a1)
{
  void *HeapFlsData; // rdx
  char v3; // r8

  HeapFlsData = NtCurrentTeb()->HeapFlsData;
  if ( HeapFlsData )
  {
    v3 = a1 & 1 | 2;
    if ( (a1 & 2) == 0 )
      v3 = a1 & 1;
    RtlpFlsDataCleanup((__int64)&RtlpHpEnvFlsContext, (__int64)HeapFlsData, v3);
    if ( (a1 & 2) != 0 )
      NtCurrentTeb()->HeapFlsData = (void *)-1LL;
  }
}
