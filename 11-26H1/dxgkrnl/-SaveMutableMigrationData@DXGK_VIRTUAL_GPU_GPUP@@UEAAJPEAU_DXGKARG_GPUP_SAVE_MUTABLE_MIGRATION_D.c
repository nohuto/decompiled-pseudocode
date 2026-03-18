/*
 * XREFs of ?SaveMutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_SAVE_MUTABLE_MIGRATION_DATA@@@Z @ 0x14021F480
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSaveMutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_MUTABLE_MIGRATION_DATA@@@Z @ 0x14021B090 (-DdiSaveMutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_MUTABLE_MIGRATION_DATA@.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SaveMutableMigrationData(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GPUP_SAVE_MUTABLE_MIGRATION_DATA *a2)
{
  return ADAPTER_RENDER::DdiSaveMutableMigrationData(this[1], a2);
}
