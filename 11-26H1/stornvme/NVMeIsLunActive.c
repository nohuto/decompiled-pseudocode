/*
 * XREFs of NVMeIsLunActive @ 0x14000FE20
 * Callers:
 *     ScsiReportLunsCommand @ 0x140011620 (ScsiReportLunsCommand.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1400284D8 (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x140028C6C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x140028F38 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeIsLunActive(__int64 a1)
{
  return a1 && *(_QWORD *)(a1 + 56) && *(_DWORD *)(a1 + 52) && (*(_DWORD *)(a1 + 20) & 4) == 0;
}
