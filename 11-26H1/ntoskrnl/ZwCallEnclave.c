/*
 * XREFs of ZwCallEnclave @ 0x140724650
 * Callers:
 *     DifZwCallEnclaveWrapper @ 0x14069C350 (DifZwCallEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCallEnclave(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
