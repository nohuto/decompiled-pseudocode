/*
 * XREFs of ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14033F0A8
 * Callers:
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x14033F2B8 (GreDrvReconnect.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<19,>(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"DriverMgmt", *a1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFF80000uLL) != 0 && (*(_QWORD *)result & 0x80000LL) == 0 )
    {
      v6 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( !_bittest64(&v5, i) )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 19 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *((_BYTE *)v4 + 27);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 27) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 0x80000uLL;
  }
  return result;
}
