/*
 * XREFs of ZwInitializeEnclave @ 0x1407254D0
 * Callers:
 *     DifZwInitializeEnclaveWrapper @ 0x1406A8640 (DifZwInitializeEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeEnclave(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
