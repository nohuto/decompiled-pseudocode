/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800130C0
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180011374 (--1CVADServer@@UEAA@XZ.c)
 *     AUDIOSESSION_rundown @ 0x1800765D0 (AUDIOSESSION_rundown.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 104LL))(this);
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}
