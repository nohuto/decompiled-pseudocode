/*
 * XREFs of RaUnitSwallowStopUnitCommand @ 0x140003D58
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaUnitSwallowStopUnitCommand(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  __int64 v3; // rax
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( *(_DWORD *)v1 == 1094997074 )
  {
    v3 = v1 + 604;
  }
  else
  {
    v3 = v1 + 396;
    if ( *(_DWORD *)v1 != 1314275652 )
      v3 = 228LL;
  }
  if ( (*(_DWORD *)v3 & 2) == 0 )
    return *(_DWORD *)(a1 + 544) >= 5;
  if ( (*(_BYTE *)(a1 + 505) & 4) == 0 && (*(_BYTE *)(v1 + 107) & 0x10) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 544);
    if ( v5 == 5 )
    {
      return *(_DWORD *)(a1 + 1044) != 0;
    }
    else if ( v5 == 6 )
    {
      return *(_DWORD *)(a1 + 552) == 5;
    }
  }
  return v2;
}
