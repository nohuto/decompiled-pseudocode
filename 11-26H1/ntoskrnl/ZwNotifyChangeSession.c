/*
 * XREFs of ZwNotifyChangeSession @ 0x1407258B0
 * Callers:
 *     DifZwNotifyChangeSessionWrapper @ 0x1406AB020 (DifZwNotifyChangeSessionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwNotifyChangeSession(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
