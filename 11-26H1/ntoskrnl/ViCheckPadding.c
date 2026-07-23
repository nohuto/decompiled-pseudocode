/*
 * XREFs of ViCheckPadding @ 0x140C2C570
 * Callers:
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     ViSpecialFreeCommonBuffer @ 0x140C2DE80 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViCheckTag @ 0x140C2C728 (ViCheckTag.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViHasBufferBeenTouched @ 0x140C2D484 (ViHasBufferBeenTouched.c)
 */

void __fastcall ViCheckPadding(__int64 a1, unsigned int a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  ULONG_PTR HasBufferBeenTouched; // rdi
  ULONG_PTR v11; // rdi

  if ( a4 != a2 )
  {
    if ( a4 )
    {
      v7 = a3 + a4;
      v8 = a2 - v7 + a1;
      v9 = a3 - a1 - 8;
      if ( a3 - a1 < 8 )
        v9 = a3 - a1;
      if ( v8 >= 8 )
      {
        v8 -= 8LL;
        v7 += 8LL;
      }
      ViCheckTag(a3, a4);
      HasBufferBeenTouched = ViHasBufferBeenTouched(a1, v9);
      if ( HasBufferBeenTouched )
      {
        ViHalPreprocessOptions(
          byte_140E0EB30,
          "Padding before allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)4);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 4uLL, a3, HasBufferBeenTouched, byte_140E0EB30);
      }
      v11 = ViHasBufferBeenTouched(v7, v8);
      if ( v11 )
      {
        ViHalPreprocessOptions(
          byte_140E0EB34,
          "Padding after allocation at %p has been illegally modified at %p.",
          (const void *)0x1000000F,
          (const void *)5);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 5uLL, a3, v11, byte_140E0EB34);
      }
    }
    else
    {
      v6 = ViHasBufferBeenTouched(a1, a2);
      if ( v6 )
      {
        ViHalPreprocessOptions(
          &dword_140E0EB2C,
          "Verified driver or hardware has corrupted memory at %p.",
          (const void *)0x1000000F);
        VfReportIssueWithOptions(0xE6u, 0xFuLL, 3uLL, v6, 0LL, &dword_140E0EB2C);
      }
    }
  }
}
