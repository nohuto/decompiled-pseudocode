/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x14069BF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertThreadByThreadIdEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
