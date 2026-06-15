/*
 * XREFs of ??0?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@AEBU01@@Z @ 0x18001E2AC
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18001DE6C (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x18003F95C (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800D22EC (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x180041BA0 (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionInstanceId *__fastcall std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>(
        CAudioSessionInstanceId *a1,
        const struct CAudioSessionInstanceId *a2)
{
  __int64 v4; // rcx

  CAudioSessionInstanceId::CAudioSessionInstanceId(a1, a2);
  v4 = *((_QWORD *)a2 + 10);
  *((_QWORD *)a1 + 10) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
