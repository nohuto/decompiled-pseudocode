/*
 * XREFs of ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18003AB7C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18007B58C (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x18003ABD4 (-IsSnapshot@CAnimationComponent@@QEAA_NXZ.c)
 */

char __fastcall CTransitionVisualController::_IsAnimationComponentVisible(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  char v2; // bl
  __int64 v3; // r8

  v2 = 0;
  if ( !*((_BYTE *)a2 + 65)
    && *(_DWORD *)(*((_QWORD *)a2 + 18) + 24LL) != 4
    && (CAnimationComponent::IsSnapshot(a2) || (GetWindowLongPtrW(*(HWND *)(v3 + 16), -16) & 0x10000000) != 0) )
  {
    return 1;
  }
  return v2;
}
