/*
 * XREFs of ??1CAudioSessionManager@@QEAA@XZ @ 0x1800D1C44
 * Callers:
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800D3334 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x18003EBD4 (--0-$unordered_map@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy.c)
 *     ??1?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800440F0 (--1-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAA@XZ @ 0x1800809B8 (--1-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAA@XZ.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x1800853BC (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??4?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AC2D0 (--4-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncod.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 */

void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  __int64 **v2; // rdi
  __int64 **i; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 **v7; // [rsp+28h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+80h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioSessionManager::`vftable';
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids);
  }
  std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64)&v6);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::operator=(
    &v6,
    (_QWORD *)this + 6);
  v2 = v7;
  for ( i = (__int64 **)*v7; i != v2; i = (__int64 **)*i )
    CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(this, (struct CAudioSession *)i[12]);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>((__int64)&v6);
  v4 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4 + 1);
      std::_Deallocate<16>(v4, (struct std::nothrow_t *)0x10);
      v4 = v5;
    }
    while ( v5 );
  }
  std::wstring::~wstring((void **)this + 30);
  CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::~CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>((__int64)this + 176);
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::~_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>((__int64)this + 48);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
