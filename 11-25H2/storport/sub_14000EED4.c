/*
 * XREFs of sub_14000EED4 @ 0x14000EED4
 * Callers:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_1400530F8 @ 0x1400530F8 (sub_1400530F8.c)
 *     sub_14006D53C @ 0x14006D53C (sub_14006D53C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14000EED4(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    --*(_DWORD *)(a1 + 16);
  }
  else
  {
    result = 0xFFFFFFFF00000000uLL;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFF00000000uLL);
    if ( *(_BYTE *)(a2 + 22) )
      --*(_DWORD *)(a1 + 32);
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 20);
  return result;
}
