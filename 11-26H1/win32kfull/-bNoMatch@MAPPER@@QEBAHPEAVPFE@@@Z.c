/*
 * XREFs of ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1400CA9D4
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MAPPER::bNoMatch(MAPPER *this, struct PFE *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 45);
  v3 = 1;
  if ( *((_DWORD *)this + 46) >= v2 )
  {
    if ( *((_DWORD *)this + 46) == v2 && (*((_DWORD *)this + 61) & 0x1000080) == 0 )
      return *((_DWORD *)a2 + 20) >= *((_DWORD *)this + 52);
  }
  else
  {
    return 0;
  }
  return v3;
}
