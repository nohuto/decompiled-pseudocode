/*
 * XREFs of LdrpGenRandom @ 0x1800DCCEC
 * Callers:
 *     InitSecurityCookie @ 0x1800DCC70 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     <none>
 */

__int64 LdrpGenRandom()
{
  unsigned int i; // ecx

  if ( MEMORY[0x7FFE0290] )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  r8 }
      if ( _CF )
        return _R8;
    }
  }
  return 0LL;
}
