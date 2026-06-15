/*
 * XREFs of ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x1800853BC
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180041C34 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     wil::details::lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___::_lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___ @ 0x1800AF8F8 (wil--details--lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___--_lambda_call__lambda_3cfe.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800D1C44 (--1CAudioSessionManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
        CAudioSessionManager *this,
        struct CAudioSession *a2)
{
  _QWORD *i; // rbx

  for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i[1]);
}
