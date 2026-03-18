/*
 * XREFs of SdbpCheckVersion @ 0x140887758
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140887228 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x140A92A84 (SdbpMatchOsVersion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int i; // ecx

  for ( i = 48; i >= 0; i -= 16 )
  {
    if ( (unsigned __int16)(a1 >> i) != (unsigned __int16)(a2 >> i) && (unsigned __int16)(a1 >> i) != 0xFFFF )
      return 0LL;
  }
  return 1LL;
}
