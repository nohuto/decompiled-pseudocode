/*
 * XREFs of ViCheckTag @ 0x140C2C728
 * Callers:
 *     ViCheckAdapterBuffers @ 0x140C2C464 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x140C2C570 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x140C2CE08 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // rdi
  size_t v5; // rbx
  void *v9; // rbp

  v4 = a2;
  v5 = a2;
  v9 = (void *)a1;
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140E0EB24,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140E0EB24);
    }
    v5 = v4 + 8;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory((const void *)(v4 + a1), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140E0EB28,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140E0EB28);
    }
    v5 += 8LL;
  }
  if ( a3 )
    memset_0(v9, 15, v5);
}
