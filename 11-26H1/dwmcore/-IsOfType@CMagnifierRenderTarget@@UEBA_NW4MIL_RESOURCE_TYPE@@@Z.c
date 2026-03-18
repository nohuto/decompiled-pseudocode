/*
 * XREFs of ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801D2410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMagnifierRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 81;
  result = 0;
  if ( v2 <= 0x1C )
  {
    v3 = 268435713;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
