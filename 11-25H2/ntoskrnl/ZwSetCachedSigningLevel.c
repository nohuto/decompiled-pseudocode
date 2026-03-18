/*
 * XREFs of ZwSetCachedSigningLevel @ 0x14069E440
 * Callers:
 *     sub_1409FF648 @ 0x1409FF648 (sub_1409FF648.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
