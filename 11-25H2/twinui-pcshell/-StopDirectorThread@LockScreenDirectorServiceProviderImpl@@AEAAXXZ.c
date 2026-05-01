/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x18021837C
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x180218360 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ShutdownChildServices@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1802C59E0 (-ShutdownChildServices@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?LockScreenDirectorServiceProviderImpl_StopDirectorThread@LockScreenServiceTelemetry@@SAXXZ @ 0x1802CA3DC (-LockScreenDirectorServiceProviderImpl_StopDirectorThread@LockScreenServiceTelemetry@@SAXXZ.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(LockScreenDirectorServiceProviderImpl *this)
{
  char *v2; // rcx

  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StopDirectorThread();
  LockScreenDirectorServiceProviderImpl::ShutdownChildServices(this);
  v2 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v2);
}
