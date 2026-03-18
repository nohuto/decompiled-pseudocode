/*
 * XREFs of ZwLoadEnclaveData @ 0x1407255D0
 * Callers:
 *     DifZwLoadEnclaveDataWrapper @ 0x1406A8C50 (DifZwLoadEnclaveDataWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadEnclaveData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
