/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180028850
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800285A0 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     ?find@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVCAudioSessionInstanceId@@@Z @ 0x1800D2D10 (-find@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_return.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct CAudioSession *v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::find(
    (char *)this + 48,
    &v9,
    a2);
  if ( v9 == *((_QWORD *)this + 7) )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147942402LL;
  }
  else
  {
    v8 = *(struct CAudioSession **)(v9 + 96);
    if ( v8 )
    {
      *a3 = v8;
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    else
    {
      *a3 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
        0,
        *((_QWORD *)a2 + 9));
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
