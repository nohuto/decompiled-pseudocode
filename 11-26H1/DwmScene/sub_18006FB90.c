/*
 * XREFs of sub_18006FB90 @ 0x18006FB90
 * Callers:
 *     sub_180067318 @ 0x180067318 (sub_180067318.c)
 * Callees:
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18006FC00 @ 0x18006FC00 (sub_18006FC00.c)
 */

__int64 __fastcall sub_18006FB90(__int64 a1)
{
  volatile __int32 *v1; // rdx
  unsigned int v2; // r9d

  while ( _InterlockedExchange((volatile __int32 *)(a1 + 48), 1) )
    ;
  sub_18006FC00(*(unsigned int *)(a1 + 44));
  sub_180038908(v1, (__int64)v1, 3);
  return v2;
}
