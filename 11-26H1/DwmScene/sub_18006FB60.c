/*
 * XREFs of sub_18006FB60 @ 0x18006FB60
 * Callers:
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 * Callees:
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 */

__int64 __fastcall sub_18006FB60(__int64 a1)
{
  volatile __int32 *v2; // rcx
  __int64 v3; // rdx

  v2 = (volatile __int32 *)(a1 + 48);
  while ( _InterlockedExchange(v2, 1) )
    ;
  sub_180038908(v2, a1, 3);
  return v3;
}
