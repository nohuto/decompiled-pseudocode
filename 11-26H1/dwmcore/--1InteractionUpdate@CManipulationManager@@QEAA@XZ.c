/*
 * XREFs of ??1InteractionUpdate@CManipulationManager@@QEAA@XZ @ 0x1800E4488
 * Callers:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800E62B0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x180294740 (--1CManipulationManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CManipulationManager::InteractionUpdate::~InteractionUpdate(
        CManipulationManager::InteractionUpdate *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
