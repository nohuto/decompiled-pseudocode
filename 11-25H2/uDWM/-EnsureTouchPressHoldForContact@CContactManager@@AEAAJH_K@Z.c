/*
 * XREFs of ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800AA6FC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002AFAC (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AA2D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 */

__int64 __fastcall CContactManager::EnsureTouchPressHoldForContact(
        CContactManager *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // rbx
  CContactManager *v9; // rcx
  CContactManager *v10; // rcx
  CContactManager *v11; // rcx
  CContactManager *v12; // rcx
  int Touch; // eax
  CContactManager *v14; // rcx

  v3 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 7);
  v7 = 104 * v3;
  if ( !*(_QWORD *)(v5 + 104 * v3 + 64) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(v5 + v7 + 48));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v9,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 56));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v10,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 80));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v11,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 64));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v12,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 88));
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 48) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 56) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 80) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 64) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 88) = 0LL;
    *(_BYTE *)(*((_QWORD *)this + 7) + v7 + 96) = 0;
    Touch = CreateTouchVisual<CTouchPressHoldVisual>(a3, (CBaseObject **)(v7 + *((_QWORD *)this + 7) + 64LL));
    v4 = Touch;
    if ( Touch < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x7EBu, 0LL);
    else
      CContactManager::AddToTouchNode(v14, a3, *(struct CVisual **)(*((_QWORD *)this + 7) + v7 + 64));
  }
  return v4;
}
