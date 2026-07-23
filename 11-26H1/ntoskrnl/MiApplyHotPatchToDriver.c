/*
 * XREFs of MiApplyHotPatchToDriver @ 0x14087450C
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     RtlIsPatchMachineApplicable @ 0x1408B178C (RtlIsPatchMachineApplicable.c)
 */

__int64 __fastcall MiApplyHotPatchToDriver(int a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  PVOID *v5; // rbx
  int v7; // r8d
  int v8; // r10d
  __int64 BaseLoaderPortion; // rax
  unsigned int v10; // edi
  int v11; // r10d

  v5 = (PVOID *)PsLoadedModuleList;
  v7 = a2;
  v8 = a1;
  while ( 1 )
  {
    if ( v5 == &PsLoadedModuleList )
      return (unsigned int)-1073741515;
    if ( *((_DWORD *)v5 + 30) == v8 && *((_DWORD *)v5 + 39) == v7 )
    {
      if ( (unsigned __int8)RtlIsPatchMachineApplicable(34404LL, a4) )
      {
        BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)v5);
        if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x1000) == 0 && (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) == 0 )
          break;
      }
    }
    v5 = (PVOID *)*v5;
  }
  if ( !v5 )
    return (unsigned int)-1073741515;
  v10 = MiApplyHotPatchToLoadedDriver(v5, a3, a5);
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    MiLogHotPatchOperationStatus(v11, *((_DWORD *)v5 + 30), *((_DWORD *)v5 + 39), a3, v10, 1);
  }
  return v10;
}
