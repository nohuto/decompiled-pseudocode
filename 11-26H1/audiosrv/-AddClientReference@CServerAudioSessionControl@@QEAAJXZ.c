/*
 * XREFs of ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800519BC
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180051130 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051300 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     AudioServerGetAudioSession @ 0x180051680 (AudioServerGetAudioSession.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::AddClientReference(CServerAudioSessionControl *this)
{
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
