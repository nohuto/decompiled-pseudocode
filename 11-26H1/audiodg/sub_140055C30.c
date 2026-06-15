/*
 * XREFs of sub_140055C30 @ 0x140055C30
 * Callers:
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140055C30(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), 0, a2 - 2);
  return 0LL;
}
