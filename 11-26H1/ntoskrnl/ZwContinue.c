/*
 * XREFs of ZwContinue @ 0x140723C50
 * Callers:
 *     RtlRestoreContext @ 0x140534CC0 (RtlRestoreContext.c)
 *     DifZwContinueWrapper @ 0x14069DD20 (DifZwContinueWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwContinue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
