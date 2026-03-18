/*
 * XREFs of ZwAlertThreadByThreadId @ 0x140724210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertThreadByThreadId(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
