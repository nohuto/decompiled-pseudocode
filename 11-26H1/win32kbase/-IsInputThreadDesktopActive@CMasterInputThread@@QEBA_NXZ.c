/*
 * XREFs of ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400A25AC
 * Callers:
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400A2568 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  int v2; // ecx
  int v3; // r8d
  char v4; // di
  int v5; // edx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  v4 = 0;
  v5 = (*((_QWORD *)this + 3) == 0LL) ^ (*((_QWORD *)this + 4) == 0LL) ^ (*((_DWORD *)this + 10) == 0);
  if ( v5 != (*((_DWORD *)this + 4) == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 213LL);
  if ( *((_QWORD *)this + 3)
    && *(_QWORD *)(*((_QWORD *)this + 3) + 488LL) == *(_QWORD *)(W32GetUserSessionState(v2, v5, v3) + 19176) )
  {
    v4 = 1;
  }
  ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
