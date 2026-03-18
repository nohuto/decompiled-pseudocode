/*
 * XREFs of ZwLoadKey3 @ 0x140725630
 * Callers:
 *     DifZwLoadKey3Wrapper @ 0x1406A8FB0 (DifZwLoadKey3Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey3(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
