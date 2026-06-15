/*
 * XREFs of ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180067C64
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180049784 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007E0B0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015E640 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioStreamStateChanged::CAudioStreamStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax

  *(_QWORD *)a1 = &CAudioStreamStateChanged::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v8 = *(unsigned int *)(a5 + 304);
  if ( a4 == (_DWORD)v8 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", a4, v8, 1LL);
  if ( !a4 )
  {
    v9 = *(unsigned int *)(a5 + 304);
    if ( (_DWORD)v9 != 1 )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, v9, 1LL);
  }
  *(_QWORD *)(a5 + 312) = a6;
  result = a1;
  *(_DWORD *)(a5 + 304) = a4;
  return result;
}
