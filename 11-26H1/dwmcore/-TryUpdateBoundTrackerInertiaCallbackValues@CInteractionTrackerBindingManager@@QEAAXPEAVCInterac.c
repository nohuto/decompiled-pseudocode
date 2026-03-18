/*
 * XREFs of ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x18019E628
 * Callers:
 *     ?PerformExpressionCompletePreProcessing@CInteractionTracker@@UEAAXXZ @ 0x18019E5C0 (-PerformExpressionCompletePreProcessing@CInteractionTracker@@UEAAXXZ.c)
 *     ?PerformExpressionCompletePreProcessing@CInteractionTracker2@@UEAAXXZ @ 0x18019E5F0 (-PerformExpressionCompletePreProcessing@CInteractionTracker2@@UEAAXXZ.c)
 * Callees:
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180136A28 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18019E814 (--1-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V-$_Uhash_com.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x18019E8AC (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@1@AEBV?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@1@@Z @ 0x18020C164 (--0-$_Hash@V-$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V-.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2)
{
  float v4; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  char v18; // bl
  _DWORD v19[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-B8h]
  _BYTE v22[56]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v23[16]; // [rsp+C0h] [rbp-48h] BYREF
  float v24; // [rsp+D0h] [rbp-38h]
  float v25; // [rsp+D4h] [rbp-34h]
  float v26; // [rsp+DCh] [rbp-2Ch]

  if ( (*(unsigned __int8 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)a2 + 464LL))(a2) )
  {
    v19[0] = 0;
    std::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTrackerBase *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTrackerBase *,std::hash<CInteractionTrackerBase *>,std::equal_to<CInteractionTrackerBase *>>,std::allocator<std::pair<CInteractionTrackerBase * const,enum InteractionTrackerBindingModeFlags>>,0>>(
      &v20,
      v19);
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, _BYTE *))(*(_QWORD *)a2 + 480LL))(a2, v23);
    v4 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)a2 + 232LL))(a2, 0LL);
    v5 = v24 - v4;
    v6 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)a2 + 232LL))(a2, 1LL);
    v7 = v25 - v6;
    v8 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)a2 + 232LL))(a2, 2LL);
    v18 = v5 != 0.0;
    if ( v7 != 0.0 )
      v18 |= 2u;
    if ( (float)(v26 / v8) != 1.0 )
      v18 |= 4u;
    CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes((__int64)this, (__int64)a2, v18, &v20);
    v9 = v21;
    v10 = (__int64 *)*v21;
    while ( v10 != v9 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10[2] + 464LL))(v10[2]) )
      {
        v12 = CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
                v11,
                v22,
                a2,
                v10[2],
                *((_DWORD *)v10 + 6));
        v13 = *(_OWORD *)v12;
        v14 = *(_OWORD *)(v12 + 16);
        v15 = *(_OWORD *)(v12 + 32);
        v16 = *(_QWORD *)(v12 + 48);
        v17 = v10[2];
        *(_OWORD *)(v17 + 128) = v13;
        *(_OWORD *)(v17 + 144) = v14;
        *(_OWORD *)(v17 + 160) = v15;
        *(_QWORD *)(v17 + 176) = v16;
      }
      v10 = (__int64 *)*v10;
      v9 = v21;
    }
    std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::~_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>(&v20);
  }
}
