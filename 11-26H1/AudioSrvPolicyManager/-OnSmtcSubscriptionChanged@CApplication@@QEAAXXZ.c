/*
 * XREFs of ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180018094 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180029430 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 * Callees:
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015490 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x1800166F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800178D0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 */

void __fastcall CApplication::OnSmtcSubscriptionChanged(CApplication *this, unsigned int a2)
{
  CApplication::ApplySmtcRelatedPolicy(this, a2);
  if ( !(unsigned int)CApplication::HasSmtcSubscription(this, 0LL) )
    goto LABEL_8;
  if ( *((_DWORD *)this + 52) )
  {
LABEL_7:
    CApplicationManager::UpdateActiveMediaAppForSession(g_ApplicationManager, this, 0);
    return;
  }
  if ( (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
  {
    if ( *((_DWORD *)this + 52)
      || (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && (unsigned int)CApplication::HasSmtcSubscription(this, 1LL) )
    {
      goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}
