/*
 * XREFs of StorGetCommonAdapterMiniport @ 0x140078958
 * Callers:
 *     StorAddChildAdapter @ 0x14012EDD8 (StorAddChildAdapter.c)
 *     StorChildAdapterPdoRemoveDevice @ 0x14012F524 (StorChildAdapterPdoRemoveDevice.c)
 *     StorGetParentAdapterExtension @ 0x14012F670 (StorGetParentAdapterExtension.c)
 *     StorRemoveChildAdapter @ 0x14012F6CC (StorRemoveChildAdapter.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall StorGetCommonAdapterMiniport(_DWORD *a1)
{
  _DWORD *result; // rax

  result = 0LL;
  if ( *a1 == 1094997074 )
    return a1 + 94;
  if ( *a1 == 1314275652 )
    return a1 + 42;
  return result;
}
