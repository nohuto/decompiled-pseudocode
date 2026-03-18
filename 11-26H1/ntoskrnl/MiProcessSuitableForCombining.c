/*
 * XREFs of MiProcessSuitableForCombining @ 0x1404042DC
 * Callers:
 *     MiSharePagePrepare @ 0x140307910 (MiSharePagePrepare.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140704430 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140704578 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140404810 (MiIsStoreProcess.c)
 */

__int64 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  unsigned int v1; // r8d

  if ( (*(_DWORD *)(a1 + 500) & 0xC00u) < 0xC00 || *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 72LL) )
    return 0LL;
  LOBYTE(v1) = (unsigned int)MiIsStoreProcess(a1) == 0;
  return v1;
}
