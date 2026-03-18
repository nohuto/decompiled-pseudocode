/*
 * XREFs of ?ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x14021F170
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x140194474 (-DdiReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBL.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ReadVirtualFunctionConfigBlock(
        ADAPTER_RENDER **this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  return ADAPTER_RENDER::DdiReadVirtualFunctionConfigBlock(this[1], a2);
}
