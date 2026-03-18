/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x140A86A9C
 * Callers:
 *     NtQuerySecurityPolicy @ 0x14080F970 (NtQuerySecurityPolicy.c)
 *     SepCaptureUnicodeStringArray @ 0x1408F58A4 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
