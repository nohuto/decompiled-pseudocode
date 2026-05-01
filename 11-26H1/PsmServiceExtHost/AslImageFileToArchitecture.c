/*
 * XREFs of AslImageFileToArchitecture @ 0x1800A1B10
 * Callers:
 *     SdbpGetBinaryRuntimePlatform @ 0x1800900C8 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180091EE0 (SdbpGetProcessHostGuestArchitectures.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
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
    if ( word_1800E1A50[i + 1] == a1 )
      return word_1800E1A50[2 * v1];
    ++v1;
  }
  return 0xFFFFLL;
}
