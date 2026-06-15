/*
 * XREFs of sub_1400790E8 @ 0x1400790E8
 * Callers:
 *     sub_140079924 @ 0x140079924 (sub_140079924.c)
 *     sub_14007B83C @ 0x14007B83C (sub_14007B83C.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 * Callees:
 *     memcmp @ 0x14004A694 (memcmp.c)
 */

__int64 __fastcall sub_1400790E8(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax

  v3 = *(unsigned __int16 *)(a1 + 8);
  if ( a3 == v3 )
    return (unsigned int)memcmp(a2, *(const void **)(a1 + 24), a3);
  else
    return (unsigned int)(a3 - v3);
}
