/*
 * XREFs of ZwDirectGraphicsCall @ 0x140729C00
 * Callers:
 *     DifZwDirectGraphicsCallWrapper @ 0x1406A8580 (DifZwDirectGraphicsCallWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDirectGraphicsCall(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
