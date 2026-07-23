/*
 * XREFs of MiVadShouldBeForked @ 0x1404E7C98
 * Callers:
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadShouldBeForked(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ecx
  int v4; // r8d

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x80000) != 0 )
  {
    if ( (v1 & 0x200000) != 0 )
      return 0LL;
    if ( (v1 & 0x60000u) >= 0x40000 )
      return 1LL;
  }
  v3 = v1 & 0x1C;
  if ( v3 > 0x14 )
    return 0LL;
  v4 = 1048833;
  if ( !_bittest(&v4, v3) || (v1 & 0x880000) == 0x880000 )
    return 0LL;
  if ( (v1 & 0x80000) != 0 )
    return 1LL;
  return (*(_DWORD *)(a1 + 72) >> 2) & 1;
}
