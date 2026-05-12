/*
 * XREFs of NvmeControllerIsDisableDfx @ 0x140127038
 * Callers:
 *     NvmeRegisterForRuntimePowerManagement @ 0x14012A824 (NvmeRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeControllerIsDisableDfx(__int64 a1)
{
  return !DFxEnabled || *(int *)(*(_QWORD *)(a1 + 1048) + 24LL) < 0;
}
