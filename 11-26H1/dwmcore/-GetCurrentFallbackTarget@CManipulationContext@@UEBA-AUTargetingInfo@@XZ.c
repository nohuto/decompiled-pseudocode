/*
 * XREFs of ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x1801D84A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationContext::GetCurrentFallbackTarget(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 128);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))(a2 + 8));
  return a2;
}
