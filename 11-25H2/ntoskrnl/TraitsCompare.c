/*
 * XREFs of TraitsCompare @ 0x1409F59DC
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

int __fastcall TraitsCompare(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  _WORD *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 28);
  v3 = (_WORD *)(a2 + 28);
  if ( (unsigned __int16)v2 < *v3 )
    return -1;
  if ( (unsigned __int16)v2 <= *v3 )
    return memcmp((const void *)(a1 + 28), v3, v2);
  return 1;
}
