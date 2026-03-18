/*
 * XREFs of ViCheckTag @ 0x140B78644
 * Callers:
 *     ViCheckAdapterBuffers @ 0x140B78388 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x140B78494 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x140B78D34 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // rsi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = a2;
  v6 = a2;
  v9 = (void *)a1;
  v10 = (const void *)(a2 + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140E0E71C,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140E0E71C);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140E0E720,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140E0E720);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset_0(v9, 15, v6);
}
