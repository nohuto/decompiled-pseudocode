/*
 * XREFs of ViCheckTag @ 0x140C26718
 * Callers:
 *     ViCheckAdapterBuffers @ 0x140C26454 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x140C26560 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x140C26DF8 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
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
        byte_140E0EA28,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140E0EA28);
    }
    v5 = v4 + 8;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory((const void *)(v4 + a1), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140E0EA30,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140E0EA30);
    }
    v5 += 8LL;
  }
  if ( a3 )
    memset_0(v9, 15, v5);
}
