/*
 * XREFs of ??4?$ComPtr@VCInteractionTrackerBindingManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerBindingManager@@@Z @ 0x1801DB8A8
 * Callers:
 *     ??0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180201018 (--0CInteractionTrackerBindingManager@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?SetBindingManager@CInteractionTracker@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z @ 0x18021FFE0 (-SetBindingManager@CInteractionTracker@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z.c)
 *     ?SetBindingManager@CInteractionTracker2@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z @ 0x180276210 (-SetBindingManager@CInteractionTracker2@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteractionTrackerBindingManager>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
