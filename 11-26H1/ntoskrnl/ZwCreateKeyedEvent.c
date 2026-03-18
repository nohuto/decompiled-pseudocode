/*
 * XREFs of ZwCreateKeyedEvent @ 0x140724AD0
 * Callers:
 *     DifZwCreateKeyedEventWrapper @ 0x14069FDE0 (DifZwCreateKeyedEventWrapper.c)
 *     ExpKeyedEventInitialization @ 0x140CE7040 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateKeyedEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
