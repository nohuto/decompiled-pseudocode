/*
 * XREFs of ZwDeleteWnfStateData @ 0x140724FF0
 * Callers:
 *     DifZwDeleteWnfStateDataWrapper @ 0x1406A44D0 (DifZwDeleteWnfStateDataWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
