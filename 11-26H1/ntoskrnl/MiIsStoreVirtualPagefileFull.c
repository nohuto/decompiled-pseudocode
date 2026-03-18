/*
 * XREFs of MiIsStoreVirtualPagefileFull @ 0x1404D7630
 * Callers:
 *     MiFillNoReservationCluster @ 0x1402F29A4 (MiFillNoReservationCluster.c)
 *     MiCanFlushMakeProgress @ 0x1403E0D04 (MiCanFlushMakeProgress.c)
 *     MiModwriterConfigureMode @ 0x140406DD0 (MiModwriterConfigureMode.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreVirtualPagefileFull(_DWORD *a1)
{
  unsigned int v2; // edx
  unsigned int *v3; // rcx
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx

  if ( a1[325] == -1 )
    return 0LL;
  v2 = 0;
  v3 = *(unsigned int **)&a1[2 * a1[325] + 5576];
  if ( v3[3] )
    return 0LL;
  v4 = v3[1];
  if ( *v3 < v4 )
    return 0LL;
  v5 = (unsigned int)a1[327];
  if ( ((*((_QWORD *)a1 + 2153) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL) <= v5 )
    LODWORD(v5) = (a1[4306] + 0x3FFFF) & 0xFFFC0000;
  if ( (unsigned int)v5 <= v4 )
    return 1LL;
  LOBYTE(v2) = a1[332] != 0;
  return v2;
}
