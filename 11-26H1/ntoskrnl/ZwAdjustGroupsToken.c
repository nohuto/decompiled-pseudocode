/*
 * XREFs of ZwAdjustGroupsToken @ 0x140724170
 * Callers:
 *     DifZwAdjustGroupsTokenWrapper @ 0x140698B40 (DifZwAdjustGroupsTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustGroupsToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
