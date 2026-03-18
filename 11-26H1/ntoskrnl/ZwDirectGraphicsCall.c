/*
 * XREFs of ZwDirectGraphicsCall @ 0x140725030
 * Callers:
 *     DifZwDirectGraphicsCallWrapper @ 0x1406A49A0 (DifZwDirectGraphicsCallWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDirectGraphicsCall(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
