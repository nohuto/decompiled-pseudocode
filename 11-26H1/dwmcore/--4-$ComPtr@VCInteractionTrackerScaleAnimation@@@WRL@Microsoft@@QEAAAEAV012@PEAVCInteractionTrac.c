/*
 * XREFs of ??4?$ComPtr@VCInteractionTrackerScaleAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerScaleAnimation@@@Z @ 0x18021D0EC
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteractionTrackerScaleAnimation>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
