/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x18002BD34
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012930 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18002BF3C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18002BFD0 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18002DAB8 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?ForceSoundLevelNotification@CApplication@@IEAAXXZ @ 0x1800385F0 (-ForceSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18003BEC4 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetSoundLevel(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx
  int v8; // r14d
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r14d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v15 = v5;
  if ( a3 )
    CApplication::ForceSoundLevelNotification((CApplication *)a2);
  if ( *(_DWORD *)(a2 + 632) )
  {
    v6 = *(_DWORD *)(a2 + 636);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v6;
  }
  if ( *(_DWORD *)(a2 + 208) )
    goto LABEL_34;
  if ( (unsigned int)CApplication::IsMutedForSleep((CApplication *)a2) )
    goto LABEL_39;
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  v8 = 0;
  v9 = *(_QWORD **)(a2 + 72);
  while ( 1 )
  {
    v6 = 1;
    if ( !v9 )
      break;
    v10 = v9[2];
    v9 = (_QWORD *)*v9;
    if ( !*(_DWORD *)(v10 + 416) )
    {
      v11 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)(v10 + 520);
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)(v10 + 520) )
        v11 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)(v10 + 528);
      if ( v11 )
      {
        v8 = 1;
        break;
      }
    }
  }
  if ( a2 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  if ( v8
    || CApplication::IsUnrestrictedBackgroundAudioCapable((CApplication *)a2)
    && (CApplication::GetTotalActiveRenderStreamCount((CApplication *)a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod((CApplication *)a2)) )
  {
    goto LABEL_37;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  v12 = 0;
  v13 = *(_QWORD **)(a2 + 72);
  while ( v13 )
  {
    v14 = v13[2];
    v13 = (_QWORD *)*v13;
    if ( !*(_DWORD *)(v14 + 416) && *(_DWORD *)(v14 + 440) )
    {
      v12 = 1;
      break;
    }
  }
  if ( a2 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  if ( v12
    && (CApplication::GetTotalActiveCaptureStreamCount((CApplication *)a2)
     || (unsigned int)CApplication::IsInPlmSponsoredGracePeriod((CApplication *)a2)) )
  {
LABEL_37:
    v6 = 2;
    goto LABEL_38;
  }
  if ( !dword_180056608[(int)CApplication::Category(a2)] )
  {
LABEL_39:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    return 0LL;
  }
  if ( (unsigned int)CApplication::HasDuckedStream((CApplication *)a2) )
  {
LABEL_38:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    return v6;
  }
LABEL_34:
  if ( v5 )
    LeaveCriticalSection(v5);
  return 2LL;
}
