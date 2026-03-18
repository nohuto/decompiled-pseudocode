/*
 * XREFs of ZwCancelTimer2 @ 0x1407246B0
 * Callers:
 *     DifZwCancelTimer2Wrapper @ 0x14069CAD0 (DifZwCancelTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCancelTimer2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
