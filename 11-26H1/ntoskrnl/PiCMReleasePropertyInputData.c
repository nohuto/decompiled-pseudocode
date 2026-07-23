/*
 * XREFs of PiCMReleasePropertyInputData @ 0x14094E854
 * Callers:
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleasePropertyInputData(__int64 a1)
{
  void *v2; // rcx
  char PreviousMode; // bl
  void *v4; // rcx

  v2 = *(void **)(a1 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( v2 && PreviousMode )
    ExFreePoolWithTag(v2, 0);
  v4 = *(void **)(a1 + 56);
  if ( v4 && PreviousMode )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}
