/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800075F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000784C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800078D0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180007904 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180007B40 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180012590 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180012700 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  rsize_t v4; // rbx
  unsigned __int64 v8; // rcx
  void *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **Source; // [rsp+20h] [rbp-18h] BYREF
  void (*v24)(void *); // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( a3 != (void (*)(void *))-1LL )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    AcquireSRWLockExclusive(&stru_18002D150);
    if ( !wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      goto LABEL_15;
    *(_QWORD *)this = 0LL;
    v8 = 0LL;
    v9 = (void *)*(&xmmword_18002D1A0 + 1);
    v10 = 0LL;
    v11 = xmmword_18002D1A0;
    while ( v8 < (*(&xmmword_18002D1A0 + 1) - xmmword_18002D1A0) >> 4 )
    {
      v19 = v8 + 1;
      if ( !*(_QWORD *)(v10 + xmmword_18002D1A0) )
      {
        v21 = 2 * v8;
        *(_QWORD *)(xmmword_18002D1A0 + 8 * v21) = a2;
        *(_QWORD *)(v11 + 8 * v21 + 8) = a3;
        *(_QWORD *)this = v19;
        goto LABEL_15;
      }
      ++v8;
      v10 += 16LL;
    }
    v12 = xmmword_18002D1B0;
    Source = a2;
    v24 = a3;
    v13 = xmmword_18002D1B0 - xmmword_18002D1A0;
    if ( (unsigned __int64)(*(&xmmword_18002D1A0 + 1) - xmmword_18002D1A0 + 16LL) >= (_QWORD)xmmword_18002D1B0
                                                                                   - xmmword_18002D1A0 )
    {
      v14 = 16LL;
      if ( (unsigned __int64)(2 * v13) > 0x10 )
        v14 = 2 * v13;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_18002D1A0, v14) )
        goto LABEL_15;
      v12 = xmmword_18002D1B0;
      v9 = (void *)*(&xmmword_18002D1A0 + 1);
    }
    if ( (unsigned __int64)v9 < v12 )
      v4 = v12 - (_QWORD)v9;
    memcpy_s(v9, v4, &Source, 0x10uLL);
    *(&xmmword_18002D1A0 + 1) += 16LL;
    v15 = (*(&xmmword_18002D1A0 + 1) - xmmword_18002D1A0) >> 4;
LABEL_14:
    *(_QWORD *)this = v15;
LABEL_15:
    ReleaseSRWLockExclusive(&stru_18002D150);
    return;
  }
  if ( wil::details::g_featureStateManager
    && !wil::ProcessShutdownInProgress(this)
    && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    AcquireSRWLockExclusive(&stru_18002D150);
    wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    *(_QWORD *)this = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = xmmword_18002D1F0;
    while ( v16 < (*(&xmmword_18002D1F0 + 1) - xmmword_18002D1F0) >> 4 )
    {
      v20 = v16 + 1;
      if ( !*(_QWORD *)(v17 + xmmword_18002D1F0) )
      {
        v22 = 2 * v16;
        *(_QWORD *)(xmmword_18002D1F0 + 8 * v22) = a2;
        *(_QWORD *)(v18 + 8 * v22 + 8) = 0LL;
        *(_QWORD *)this = v20;
        goto LABEL_24;
      }
      ++v16;
      v17 += 16LL;
    }
    Source = a2;
    v24 = 0LL;
    if ( wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&xmmword_18002D1F0, &Source, 0x10uLL) )
      *(_QWORD *)this = (*(&xmmword_18002D1F0 + 1) - xmmword_18002D1F0) >> 4;
LABEL_24:
    if ( !*(_QWORD *)this )
      goto LABEL_15;
    v15 = *(_QWORD *)this | 0x80000000LL;
    goto LABEL_14;
  }
}
