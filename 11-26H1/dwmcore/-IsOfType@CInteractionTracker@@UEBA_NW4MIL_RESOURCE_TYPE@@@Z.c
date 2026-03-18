/*
 * XREFs of ?IsOfType@CInteractionTracker@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801AFE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 66;
  result = 0;
  if ( v2 <= 0x17 )
  {
    v3 = 8388613;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
