/*
 * XREFs of ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801D0010
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180226000 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        void (__fastcall ****a1)(__int64),
        __int64 a2))(__int64)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  void (__fastcall ***v5)(__int64); // rbx
  void (__fastcall ***v6)(__int64); // rcx

  v2 = a2 + 72;
  v4 = -a2;
  v5 = (void (__fastcall ***)(__int64))(v2 & -(__int64)(v4 != 0));
  if ( v5 )
    (**v5)(v2 & -(__int64)(v4 != 0));
  v6 = *a1;
  *a1 = v5;
  if ( v6 )
    (*v6)[1]((__int64)v6);
  return a1;
}
