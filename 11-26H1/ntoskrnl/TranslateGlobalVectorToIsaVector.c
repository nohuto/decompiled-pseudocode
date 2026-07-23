/*
 * XREFs of TranslateGlobalVectorToIsaVector @ 0x140789254
 * Callers:
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407890A0 (HalacpiIrqTranslateResourcesIsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateGlobalVectorToIsaVector(int a1, _DWORD *a2)
{
  unsigned __int8 i; // r8

  for ( i = 0; i < 0x10u; ++i )
  {
    if ( *((_DWORD *)HalpPicVectorRedirect + i) == a1 )
    {
      *a2 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
