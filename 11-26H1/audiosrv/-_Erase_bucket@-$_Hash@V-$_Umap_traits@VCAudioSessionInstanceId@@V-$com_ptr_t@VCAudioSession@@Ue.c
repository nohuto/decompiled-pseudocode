/*
 * XREFs of ?_Erase_bucket@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x180068E20
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180041C34 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::_lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___ @ 0x1800AC120 (wil--details--lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___--_lambda_call__lambda_5b16.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Erase_bucket(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = 2 * a3;
  if ( *(_QWORD **)(v3 + 8 * v4 + 8) == a2 )
  {
    if ( *(_QWORD **)(v3 + 8 * v4) == a2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v3 + 8 * v4) = v5;
    }
    else
    {
      v5 = a2[1];
    }
    *(_QWORD *)(v3 + 8 * v4 + 8) = v5;
  }
  else if ( *(_QWORD **)(v3 + 8 * v4) == a2 )
  {
    *(_QWORD *)(v3 + 8 * v4) = *a2;
  }
}
