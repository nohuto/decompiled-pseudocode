/*
 * XREFs of ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x18014B7D0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@details@wil@@QEAA_NXZ @ 0x18014B458 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionTrackerCodeGen@@@detai.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802155F4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBa.c)
 *     ??$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAAAEAUBinding@CInteractionTrackerBindingManager@@AEAPEAVCInteractionTracker2@@0AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18027814C (--$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
        CInteractionTrackerBindingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE *a3)
{
  char IsEnabled; // al
  __int64 v7; // rdx
  __int64 Resource; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct CInteractionTrackerBase *v12; // r14
  __int64 v13; // rax
  unsigned int v14; // edi
  struct CInteractionTrackerBase *v15; // rbx
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v20; // [rsp+68h] [rbp+20h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionTrackerCodeGen>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_InteractionTrackerCodeGen>::GetImpl'::`2'::impl);
  v7 = *((unsigned int *)a3 + 2);
  if ( IsEnabled )
  {
    if ( !(_DWORD)v7 || !*((_DWORD *)a3 + 3) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x46,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x88980403LL,
        v17[0]);
    Resource = CResourceTable::GetResource(a2, v7, 67LL);
    v9 = *((unsigned int *)a3 + 3);
    v18[0] = Resource;
    v10 = Resource;
    v11 = CResourceTable::GetResource(a2, v9, 67LL);
    v20 = *((_DWORD *)a3 + 4);
    *(_QWORD *)v17 = v11;
    if ( !v10 || !v11 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x88980403LL,
        v17[0]);
    ((void (__fastcall *)(char *, __int64 *, int *, int *))std::vector<CInteractionTrackerBindingManager::Binding>::emplace_back<CInteractionTracker2 * &,CInteractionTracker2 * &,enum InteractionTrackerBindingModeFlags &>)(
      (char *)this + 152,
      v18,
      v17,
      &v20);
    *((_BYTE *)this + 248) = 1;
  }
  else
  {
    if ( !(_DWORD)v7 || !*((_DWORD *)a3 + 3) )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x88980403LL,
        v17[0]);
    v12 = (struct CInteractionTrackerBase *)CResourceTable::GetResource(a2, v7, 68LL);
    v13 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 3), 68LL);
    v14 = *((_DWORD *)a3 + 4);
    v15 = (struct CInteractionTrackerBase *)v13;
    if ( !v12 || !v13 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x56,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x88980403LL,
        v17[0]);
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, CInteractionTrackerBindingManager *))(*(_QWORD *)v12
                                                                                                  + 320LL))(
      v12,
      this);
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, CInteractionTrackerBindingManager *))(*(_QWORD *)v15
                                                                                                  + 320LL))(
      v15,
      this);
    CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(this, v12, v15, v14);
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
      (__int64)this,
      (__int64)v12,
      (__int64)v15,
      v14);
    CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(this, v12, v15, v14);
  }
  return 0LL;
}
