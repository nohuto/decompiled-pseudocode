/*
 * XREFs of ZwEnumerateSystemEnvironmentValuesEx @ 0x140725110
 * Callers:
 *     DifZwEnumerateSystemEnvironmentValuesExWrapper @ 0x1406A5620 (DifZwEnumerateSystemEnvironmentValuesExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateSystemEnvironmentValuesEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
