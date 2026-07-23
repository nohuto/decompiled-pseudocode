/*
 * XREFs of MiGetClosestImplicitNode @ 0x1403A76AC
 * Callers:
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetClosestImplicitNode(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140E2D810 + 4LL * (unsigned __int16)KeNumberNodes * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)KeNumberNodes] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
