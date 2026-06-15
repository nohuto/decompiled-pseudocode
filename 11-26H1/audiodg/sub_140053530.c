/*
 * XREFs of sub_140053530 @ 0x140053530
 * Callers:
 *     <none>
 * Callees:
 *     sub_140053DD0 @ 0x140053DD0 (sub_140053DD0.c)
 */

void __fastcall sub_140053530(__int64 a1, char a2, __int64 a3)
{
  if ( !a2 && (*(_BYTE *)(a3 + 4) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      sub_140040634(a1);
    }
    else if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      sub_140053DD0(a1, a3);
    }
  }
}
