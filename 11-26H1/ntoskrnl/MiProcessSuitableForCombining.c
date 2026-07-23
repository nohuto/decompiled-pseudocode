/*
 * XREFs of MiProcessSuitableForCombining @ 0x1403FD3DC
 * Callers:
 *     MiSharePagePrepare @ 0x1402E9990 (MiSharePagePrepare.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140709100 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140709248 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 */

__int64 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  unsigned int v1; // r8d

  if ( (*(_DWORD *)(a1 + 500) & 0xC00u) < 0xC00 || *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 72LL) )
    return 0LL;
  LOBYTE(v1) = (unsigned int)MiIsStoreProcess(a1) == 0;
  return v1;
}
