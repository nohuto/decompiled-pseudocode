/*
 * XREFs of ?IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ @ 0x180007D2C
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180007BB0 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180007C84 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z @ 0x180008D28 (-TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002B118 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::IsPrimaryConsoleAudioSession(TSSession *this)
{
  int v1; // ebx
  int CurrentServiceSessionId; // eax
  unsigned int v4; // edx

  v1 = *(_DWORD *)this;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  v4 = 0;
  if ( v1 != CurrentServiceSessionId )
    return *((_DWORD *)this + 278) != 0;
  return v4;
}
