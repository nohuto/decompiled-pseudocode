/*
 * XREFs of ZwContinue @ 0x14069B9A0
 * Callers:
 *     RtlRestoreContext @ 0x1404FA420 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwContinue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
