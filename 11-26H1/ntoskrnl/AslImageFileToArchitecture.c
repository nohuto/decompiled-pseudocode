/*
 * XREFs of AslImageFileToArchitecture @ 0x14077F1AC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140886E70 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslImageFileToArchitecture(__int16 a1)
{
  __int64 v1; // rax
  unsigned __int64 i; // rdx

  v1 = 0LL;
  for ( i = 0LL; i < 8; i += 2LL )
  {
    if ( word_140E0EF58[i + 1] == a1 )
      return word_140E0EF58[2 * v1];
    ++v1;
  }
  return 0xFFFFLL;
}
