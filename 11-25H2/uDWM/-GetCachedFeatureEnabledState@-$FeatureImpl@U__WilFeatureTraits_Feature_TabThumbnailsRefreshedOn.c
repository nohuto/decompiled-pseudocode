/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B78EC
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180055F04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180056ABC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180076844 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800897F0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180090258 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedO.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
        wil::details *a1,
        _QWORD *a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  int *v8; // r9
  signed __int32 i; // r8d
  bool v10; // zf
  unsigned int v11; // edx
  __int16 v12; // ax
  signed __int32 v13; // eax
  _DWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details *v16; // [rsp+28h] [rbp-8h]
  int v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  RTL_SRWLOCK *v19; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  if ( (v3 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v17 = 0;
    v6 = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCurrentFeatureEnabledState(
      v7,
      &v18,
      (__int64)&v17,
      v8);
    if ( !v6 )
      v17 = 0;
    for ( i = *(_DWORD *)a2; ; i = v13 )
    {
      v10 = v17 == 0;
      v11 = i;
      v12 = v18;
      *(_DWORD *)a2 = i;
      if ( !v10 && (i & 2) == 0 )
      {
        v11 = v12 & 0x9C1 | i & 0xFFFFF63E | 2;
        *(_DWORD *)a2 = v11;
      }
      if ( (i & 4) == 0 )
      {
        v11 = v12 & 0x400 | v11 & 0xFFFFFBFF | 4;
        *(_DWORD *)a2 = v11;
      }
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v11, i);
      if ( i == v13 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      v19 = &SRWLock;
      if ( !v6
        || v6 != dword_180118B04
        || (v15[1] = 0,
            v15[0] = 0,
            v16 = a1,
            !wil::details_abi::heap_buffer::push_back((void **)&unk_180118B38, v15, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
    }
    if ( (*(_DWORD *)a2 & 2) == 0 )
      *(_DWORD *)a2 = v18 & 0x9C1 | *(_DWORD *)a2 & 0xFFFFF63E;
  }
  return a2;
}
