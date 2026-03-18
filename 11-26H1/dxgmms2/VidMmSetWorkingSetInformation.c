/*
 * XREFs of VidMmSetWorkingSetInformation @ 0x14004D890
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEBU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1400A9414 (-SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEBU_D3DKMT_WORKINGSETINFO@@@Z.c)
 */

__int64 __fastcall VidMmSetWorkingSetInformation(VIDMM_PROCESS *a1, const struct _D3DKMT_WORKINGSETINFO *a2)
{
  return VIDMM_PROCESS::SetWorkingSetInformation(a1, a2);
}
