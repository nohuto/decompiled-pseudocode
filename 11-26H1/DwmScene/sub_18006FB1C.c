/*
 * XREFs of sub_18006FB1C @ 0x18006FB1C
 * Callers:
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006FB1C(__int64 a1, __int64 a2, __int64 a3)
{
  volatile __int32 *v4; // rcx

  v4 = (volatile __int32 *)(a1 + 48);
  while ( _InterlockedExchange(v4, 1) )
    ;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 20);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 36);
  return sub_180038908(v4, a2, 3);
}
