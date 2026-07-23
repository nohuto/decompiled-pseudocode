/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x140A8BA1C
 * Callers:
 *     NtQuerySecurityPolicy @ 0x140815400 (NtQuerySecurityPolicy.c)
 *     SepCaptureUnicodeStringArray @ 0x140925834 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
