/*
 * XREFs of ZwOpenPrivateNamespace @ 0x140725A50
 * Callers:
 *     DifZwOpenPrivateNamespaceWrapper @ 0x1406ACB40 (DifZwOpenPrivateNamespaceWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenPrivateNamespace(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
