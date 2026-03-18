/*
 * XREFs of ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC
 * Callers:
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18 (--$_Destroy_range@V-$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBi.c)
 *     ??$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAAAEAUBinding@CInteractionTrackerBindingManager@@AEAPEAVCInteractionTracker2@@0AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18027814C (--$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@.c)
 *     ??1Binding@CInteractionTrackerBindingManager@@QEAA@XZ @ 0x18027846C (--1Binding@CInteractionTrackerBindingManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18027857C (--4-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802787D8 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker2@@.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBindings(CInteractionTrackerBindingManager *this)
{
  __int64 *v1; // rbp
  unsigned int *v3; // rbx
  __int64 *v4; // r14
  __int64 i; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  CInteractionTrackerBindingManager::Binding *v13; // rdx
  CInteractionTrackerBindingManager::Binding *v14; // rcx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 20);
  v3 = (unsigned int *)*((_QWORD *)this + 19);
  if ( v3 != (unsigned int *)v1 )
  {
    v4 = (__int64 *)((char *)this + 176);
    do
    {
      for ( i = *v4; ; i += 24LL )
      {
        if ( i == v4[1] )
        {
          v17 = *((_QWORD *)v3 + 1);
          v18 = *(_QWORD *)v3;
          std::vector<CInteractionTrackerBindingManager::Binding>::emplace_back<CInteractionTracker2 * &,CInteractionTracker2 * &,enum InteractionTrackerBindingModeFlags &>(
            v4,
            &v18,
            &v17,
            v3 + 4);
          goto LABEL_12;
        }
        if ( *(_QWORD *)v3 == *(_QWORD *)i && *((_QWORD *)v3 + 1) == *(_QWORD *)(i + 8) )
          break;
      }
      if ( v3[4] == *(_DWORD *)(i + 16) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x12C,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
          (const char *)0x8007029CLL);
      *(_DWORD *)(i + 16) = v3[4];
LABEL_12:
      v3 += 6;
    }
    while ( v3 != (unsigned int *)v1 );
  }
  v6 = *((_QWORD *)this + 22);
  while ( 1 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 23);
    if ( (_QWORD *)v6 == v7 )
      break;
    v8 = v6 + 16;
    v9 = (_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v6 + 16) )
    {
      CInteractionTracker2::CleanDirties(*(CInteractionTracker2 **)v6);
      CInteractionTracker2::CleanDirties(*(CInteractionTracker2 **)(v6 + 8));
      v6 += 24LL;
    }
    else
    {
      while ( v9 != v7 )
      {
        Microsoft::WRL::ComPtr<CInteractionTracker2>::operator=((__int64 *)(v8 - 16), v9);
        Microsoft::WRL::ComPtr<CInteractionTracker2>::operator=((__int64 *)(v8 - 8), (_QWORD *)(v8 + 16));
        v9 += 3;
        *(_DWORD *)v8 = *(_DWORD *)(v8 + 24);
        v8 += 24LL;
      }
      CInteractionTrackerBindingManager::Binding::~Binding((CInteractionTrackerBindingManager::Binding *)(*((_QWORD *)this + 23) - 24LL));
      *((_QWORD *)this + 23) -= 24LL;
    }
  }
  v10 = *((_QWORD *)this + 19);
  v11 = *((_QWORD *)this + 20);
  while ( v10 != v11 )
  {
    v12 = CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
            this,
            *(struct CInteractionTrackerBase **)v10,
            *(struct CInteractionTrackerBase **)(v10 + 8),
            *(_DWORD *)(v10 + 16));
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x153,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)(unsigned int)v12,
        v15);
    v10 += 24LL;
  }
  v13 = (CInteractionTrackerBindingManager::Binding *)*((_QWORD *)this + 20);
  v14 = (CInteractionTrackerBindingManager::Binding *)*((_QWORD *)this + 19);
  if ( v14 != v13 )
  {
    std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(v14, v13);
    *((_QWORD *)this + 20) = *((_QWORD *)this + 19);
  }
  *((_BYTE *)this + 248) = 0;
}
