/*
 * XREFs of ?IsOfType@CLegacyRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E3260
 * Callers:
 *     ?IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180249310 (-IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 73);
  result = 0;
  if ( (unsigned int)v2 <= 0x24 )
  {
    v3 = 0x1000010001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
