/*
 * XREFs of sub_140010C40 @ 0x140010C40
 * Callers:
 *     sub_14001046C @ 0x14001046C (sub_14001046C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     sub_140069280 @ 0x140069280 (sub_140069280.c)
 */

__int64 __fastcall sub_140010C40(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 56) == 5 )
  {
    if ( a2 )
    {
      v3 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v3 == 27 || *(_BYTE *)v3 == 14 && *(_DWORD *)(v3 + 24) == 266276 )
        return 0LL;
    }
    return 3221225558LL;
  }
  if ( *(_DWORD *)(a1 + 56) == 6 )
    return 3221225558LL;
  if ( *(_DWORD *)(a1 + 56) != 7 )
    return 0LL;
  return sub_140069280(a1, a2);
}
