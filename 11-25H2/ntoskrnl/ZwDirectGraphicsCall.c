/*
 * XREFs of ZwDirectGraphicsCall @ 0x14069CD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDirectGraphicsCall(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
