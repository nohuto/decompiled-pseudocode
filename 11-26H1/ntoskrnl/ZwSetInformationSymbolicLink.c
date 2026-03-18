/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x140726990
 * Callers:
 *     DifZwSetInformationSymbolicLinkWrapper @ 0x1406BA920 (DifZwSetInformationSymbolicLinkWrapper.c)
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationSymbolicLink(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
