/*
 * XREFs of sub_140019EC0 @ 0x140019EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 */

char __fastcall sub_140019EC0(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 20) || (*(_DWORD *)(a1 + 4056) & 0x1000) != 0 )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x400000u;
  result = sub_14001ED94(a1, 0LL);
  if ( result )
    ++*(_DWORD *)(a1 + 4176);
  else
    ++*(_DWORD *)(a1 + 4180);
  *(_DWORD *)(a1 + 24) &= ~0x400000u;
  return result;
}
