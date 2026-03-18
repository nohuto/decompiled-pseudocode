/*
 * XREFs of ZwCreateCrossVmEvent @ 0x140724910
 * Callers:
 *     DifZwCreateCrossVmEventWrapper @ 0x14069E3B0 (DifZwCreateCrossVmEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
