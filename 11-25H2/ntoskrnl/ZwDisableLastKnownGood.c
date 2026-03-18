/*
 * XREFs of ZwDisableLastKnownGood @ 0x14069CDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDisableLastKnownGood(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
