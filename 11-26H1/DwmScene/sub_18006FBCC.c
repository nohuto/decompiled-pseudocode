/*
 * XREFs of sub_18006FBCC @ 0x18006FBCC
 * Callers:
 *     sub_180067318 @ 0x180067318 (sub_180067318.c)
 * Callees:
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 */

char __fastcall sub_18006FBCC(__int64 a1)
{
  __int64 v1; // rdx
  volatile __int32 *v2; // rcx
  char v3; // dl

  v1 = a1;
  v2 = (volatile __int32 *)(a1 + 48);
  while ( _InterlockedExchange(v2, 1) )
    ;
  LOBYTE(v1) = *(_DWORD *)(v1 + 40) == 0;
  sub_180038908(v2, v1, 3);
  return v3;
}
