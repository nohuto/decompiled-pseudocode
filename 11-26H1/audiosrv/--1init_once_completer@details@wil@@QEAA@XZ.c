/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x1800B0D34
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$61 @ 0x180163310 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$61.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
