/*
 * XREFs of ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x180024664
 * Callers:
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x1800375EC (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038B10 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x1800464B0 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180046910 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  signed __int32 i; // eax

  *a1 = a2;
  if ( a2 )
  {
    for ( i = *(_DWORD *)(a2 + 20);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 20), i + 1, i);
          i = *(_DWORD *)(a2 + 20) )
    {
      ;
    }
  }
  return a1;
}
