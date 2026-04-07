/*
 * XREFs of ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18002757C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18008C878 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x1800275C4 (-IsSnapshot@CAnimationComponent@@QEAA_NXZ.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800275D0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsAnimationComponentVisible(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  char v2; // bl
  __int64 v3; // rdx

  v2 = 0;
  if ( !*((_BYTE *)a2 + 65)
    && *(_DWORD *)(*((_QWORD *)a2 + 18) + 24LL) != 4
    && (CAnimationComponent::IsSnapshot(a2) || CTransitionVisualController::HasVisibleStyle(*(HWND *)(v3 + 16))) )
  {
    return 1;
  }
  return v2;
}
