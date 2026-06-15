/*
 * XREFs of sub_140098BB0 @ 0x140098BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140098BB0(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 192) & 0x40000) != 0 && *(_WORD *)(*(_QWORD *)(a1 + 96) + 4LL) )
    return *(_DWORD *)(a1 + 464) != 0 ? 1 : -2005139378;
  else
    return 1LL;
}
