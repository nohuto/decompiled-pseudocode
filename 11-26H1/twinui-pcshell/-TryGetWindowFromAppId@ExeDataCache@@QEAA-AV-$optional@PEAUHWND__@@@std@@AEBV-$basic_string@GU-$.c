/*
 * XREFs of ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1805759A8
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574E40 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805750A0 (-GetWindowTitle@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1805746C0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1ExeData@@QEAA@XZ @ 0x1805748A4 (--1ExeData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExeDataCache::TryGetWindowFromAppId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  const wchar_t *v7; // r8
  const wchar_t *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-21h] BYREF
  __int64 v12; // [rsp+30h] [rbp-19h]
  _BYTE v13[40]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp+17h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, (RTL_SRWLOCK *)a1);
  v6 = **(_QWORD **)(a1 + 8);
  v10 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v12 = *(_QWORD *)(v6 + 32);
    ExeData::ExeData((ExeData *)v13, (const struct ExeData *)(v6 + 40));
    v7 = (const wchar_t *)v14;
    if ( v14[3] > 7uLL )
      v7 = (const wchar_t *)v14[0];
    v8 = (const wchar_t *)a3;
    if ( *(_QWORD *)(a3 + 24) > 7uLL )
      v8 = *(const wchar_t **)a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v8, *(_QWORD *)(a3 + 16), v7, v14[2]) )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 1;
      ExeData::~ExeData((ExeData *)v13);
      goto LABEL_11;
    }
    ExeData::~ExeData((ExeData *)v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v10);
    v6 = v10;
  }
  *(_BYTE *)(a2 + 8) = 0;
LABEL_11:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return a2;
}
