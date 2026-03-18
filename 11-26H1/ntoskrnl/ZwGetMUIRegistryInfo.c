/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x1407253D0
 * Callers:
 *     DifZwGetMUIRegistryInfoWrapper @ 0x1406A7950 (DifZwGetMUIRegistryInfoWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetMUIRegistryInfo(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
