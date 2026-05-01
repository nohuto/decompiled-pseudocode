/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180551820
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180550C20 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180550EB0 (-GetWindowTitle@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x180550380 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x180550564 (--1ExeData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  _WORD *v7; // r8
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-21h] BYREF
  __int64 v12; // [rsp+30h] [rbp-19h]
  void *v13[5]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp+17h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, (RTL_SRWLOCK *)a1);
  v6 = **(_QWORD **)(a1 + 8);
  v10 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v12 = *(_QWORD *)(v6 + 32);
    ExeData::ExeData((ExeData *)v13, (const struct ExeData *)(v6 + 40));
    v7 = v14;
    if ( v14[3] > 7uLL )
      v7 = (_WORD *)v14[0];
    v8 = (__int64)a3;
    if ( (unsigned __int64)a3[3] > 7 )
      v8 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, a3[2], v7, v14[2]) )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 1;
      ExeData::~ExeData(v13);
      goto LABEL_11;
    }
    ExeData::~ExeData(v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v10);
    v6 = v10;
  }
  *(_BYTE *)(a2 + 8) = 0;
LABEL_11:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return a2;
}
