/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015490 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800162C0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x1800166F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800178D0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18002839C (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?GetActiveRenderStreamCount@CApplication@@IEAAIK@Z @ 0x18002D5FC (-GetActiveRenderStreamCount@CApplication@@IEAAIK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this, unsigned int a2)
{
  int v3; // esi
  _QWORD *v4; // rdx
  __int64 v5; // rcx

  if ( !CApplication::GetActiveRenderStreamCount(this, a2) || (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v3 = 0;
      v4 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 500) )
        {
          v3 = 1;
          break;
        }
      }
      if ( this != (CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      if ( !v3 )
        CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    }
  }
  else
  {
    CApplication::AddCategoryOverrideToProcesses(this, 4LL, 4LL, 1LL);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}
