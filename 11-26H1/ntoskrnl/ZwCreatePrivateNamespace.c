/*
 * XREFs of ZwCreatePrivateNamespace @ 0x140724BD0
 * Callers:
 *     DifZwCreatePrivateNamespaceWrapper @ 0x1406A0BA0 (DifZwCreatePrivateNamespaceWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePrivateNamespace(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
