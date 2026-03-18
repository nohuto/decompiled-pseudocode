/*
 * XREFs of ZwSecureConnectPort @ 0x140726690
 * Callers:
 *     DifZwSecureConnectPortWrapper @ 0x1406B8830 (DifZwSecureConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSecureConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
