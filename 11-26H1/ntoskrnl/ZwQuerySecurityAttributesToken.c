/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x1407260F0
 * Callers:
 *     DifZwQuerySecurityAttributesTokenWrapper @ 0x1406B3950 (DifZwQuerySecurityAttributesTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySecurityAttributesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
