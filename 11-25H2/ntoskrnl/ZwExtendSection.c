/*
 * XREFs of ZwExtendSection @ 0x14069CEA0
 * Callers:
 *     CmSiExtendSection @ 0x1404B4320 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwExtendSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
