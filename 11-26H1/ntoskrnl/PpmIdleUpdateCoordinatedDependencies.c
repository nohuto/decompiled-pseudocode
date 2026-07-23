/*
 * XREFs of PpmIdleUpdateCoordinatedDependencies @ 0x1407E6F04
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1407CCC80 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleUpdateCoordinatedDependencies(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int v3; // r9d
  int v4; // r11d
  __int64 v5; // r8
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rcx

  v1 = 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x10000000) != 0 || (HvlEnlightenments & 0x400) == 0 )
      return v1;
  }
  else if ( !HvlHypervisorConnected )
  {
    return v1;
  }
  v3 = 0;
  v4 = HvlEnlightenments & 0x200;
  while ( v3 < *a1 )
  {
    v5 = 80LL * v3;
    if ( !LOBYTE(a1[v5 + 88]) )
      return (unsigned int)-1073741637;
    v6 = 0;
    while ( v6 < a1[v5 + 87] )
    {
      v7 = *(_QWORD *)&a1[v5 + 90];
      if ( *(_DWORD *)(v7 + 16LL * v6) == -1 || !*(_DWORD *)(v7 + 16LL * v6 + 4) )
        return (unsigned int)-1073741637;
      *(_DWORD *)(v7 + 16LL * v6 + 4) = 1;
      v8 = *(_QWORD *)(v7 + 16LL * v6++ + 8);
      *(_BYTE *)v8 = v4 != 0;
      *(_WORD *)(v8 + 1) = 257;
      *(_BYTE *)(v8 + 3) = 1;
    }
    ++v3;
  }
  return v1;
}
