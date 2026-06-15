/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18006C0E0
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18006C00C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800ADF44 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18001AD04 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015E640 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbx

  if ( *((_BYTE *)this + 904) )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
  std::unique_ptr<_RecurringTask>::reset((__int64 *)this + 67, 0LL);
  v2 = (_QWORD *)*((_QWORD *)this + 89);
  v3 = (_QWORD *)*((_QWORD *)this + 88);
  if ( v3 != v2 )
  {
    v4 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    do
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v3 + 32LL))(*v3, v4);
      ++v3;
    }
    while ( v3 != v2 );
  }
}
