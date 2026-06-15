/*
 * XREFs of ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800B0E68
 * Callers:
 *     ??1CEndpointStore@@UEAA@XZ @ 0x180104920 (--1CEndpointStore@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180104BC0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800D3334 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAudioSessionManager>::operator()();
  return result;
}
