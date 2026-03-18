/*
 * XREFs of ZwCreateDebugObject @ 0x140724950
 * Callers:
 *     DifZwCreateDebugObjectWrapper @ 0x14069E710 (DifZwCreateDebugObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDebugObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
