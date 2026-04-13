/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180030B34
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18003A0B0 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA?AW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x18003E1B4 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@w.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E44 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18002EABC (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180031404 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18003F880 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 v7; // rax
  int v8; // ecx
  int v9; // r10d
  int v10; // r9d
  unsigned int v11; // r8d
  signed __int64 v12; // rtt
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v16; // [rsp+58h] [rbp+28h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v15 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCurrentVariantState(v6, &v16, &v15);
    if ( !v5 )
      v15 = 0;
    v7 = *(_QWORD *)a2;
    v8 = (int)v16;
    v9 = HIDWORD(v16);
    do
    {
      v10 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v9;
        v10 = v8 & 0x800 | (v15 != 0 ? 8 : 0) | v7 & 0xFFFC07F7 | v8 & 0x3F000;
        *(_DWORD *)a2 = v10;
      }
      v11 = ((unsigned int)v7 >> 2) & 1;
      if ( !v11 )
        *(_DWORD *)a2 = v8 & 0x400 | v10 & 0xFFFFFBFF | 4;
      v12 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v7);
    }
    while ( v12 != v7 );
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_18017F390);
      v16 = &stru_18017F390;
      if ( !v5
        || v5 != dword_18017F3A4
        || (v14[0] = 0LL,
            v14[1] = a1,
            !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&unk_18017F3D8, v14, 0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFF7C1);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
    }
  }
  return a2;
}
