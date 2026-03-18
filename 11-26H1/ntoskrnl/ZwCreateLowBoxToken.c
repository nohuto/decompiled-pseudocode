/*
 * XREFs of ZwCreateLowBoxToken @ 0x140724AF0
 * Callers:
 *     DifZwCreateLowBoxTokenWrapper @ 0x14069FF70 (DifZwCreateLowBoxTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateLowBoxToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
