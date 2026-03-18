/*
 * XREFs of ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1401B0364
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CPTPProcessor::QueuePTPMouseEvent(
        LARGE_INTEGER *this,
        struct tagPOINT a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        const struct tagUIPI_INFO_INT *a8)
{
  LONG x; // ebx
  struct W32_PUSH_LOCK *v11; // r15
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  char v16; // di
  LARGE_INTEGER PerformanceCounter; // rax
  int *QuadPart; // rcx
  int v19; // edx
  int v20; // r8d
  __int64 UserSessionState; // r8
  __int64 v22; // r9
  _BYTE v24[20]; // [rsp+20h] [rbp-48h]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v11 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState((_DWORD)this, a2.x, a3) + 3336);
  W32AcquirePushLockExclusiveEx(v11);
  if ( *(_DWORD *)this[262].QuadPart < 0x40u )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QuadPart = (int *)this[261].QuadPart;
    this[258] = PerformanceCounter;
    *QuadPart = ((unsigned __int8)*QuadPart + 1) & 0x3F;
    UserSessionState = W32GetUserSessionState((_DWORD)QuadPart, v19, v20);
    *(_DWORD *)v24 = 0x800000;
    v22 = 136LL * *(unsigned int *)this[261].QuadPart;
    *(LARGE_INTEGER *)(v22 + UserSessionState + 3352) = this[66];
    *(_QWORD *)(v22 + UserSessionState + 3400) = a6;
    *(_QWORD *)(v22 + UserSessionState + 3384) = 0LL;
    *(_QWORD *)(v22 + UserSessionState + 3392) = 0LL;
    *(_OWORD *)(v22 + UserSessionState + 3408) = *(_OWORD *)&this[254].LowPart;
    *(_OWORD *)(v22 + UserSessionState + 3424) = *(_OWORD *)&this[256].LowPart;
    *(_OWORD *)(v22 + UserSessionState + 3440) = *(_OWORD *)&this[258].LowPart;
    *(LARGE_INTEGER *)(v22 + UserSessionState + 3456) = this[260];
    *(_DWORD *)(v22 + UserSessionState + 3464) = a7;
    *(_OWORD *)(v22 + UserSessionState + 3468) = *(_OWORD *)a8;
    *(_OWORD *)&v24[4] = 0LL;
    *(_OWORD *)(v22 + UserSessionState + 3360) = *(_OWORD *)v24;
    *(_QWORD *)(v22 + UserSessionState + 3376) = 0LL;
    if ( (a3 & 2) != 0 )
    {
      *(_WORD *)(v22 + UserSessionState + 3364) |= 1u;
    }
    else
    {
      switch ( a3 )
      {
        case 4:
          *(_WORD *)(v22 + UserSessionState + 3364) |= 2u;
          goto LABEL_6;
        case 8:
          *(_WORD *)(v22 + UserSessionState + 3364) |= 4u;
          goto LABEL_6;
        case 16:
          *(_WORD *)(v22 + UserSessionState + 3364) |= 8u;
          goto LABEL_6;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(v22 + UserSessionState + 3376) = y;
      *(_DWORD *)(v22 + UserSessionState + 3372) = x;
LABEL_16:
      v16 = 1;
      ++*(_DWORD *)this[262].QuadPart;
      goto LABEL_17;
    }
LABEL_6:
    if ( *(_DWORD *)(v22 + UserSessionState + 3372) || *(_DWORD *)(v22 + UserSessionState + 3376) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1355LL);
    goto LABEL_16;
  }
  v15 = W32GetUserSessionState(v13, v12, v14);
  ++*(_DWORD *)(v15 + 12168);
  InputTraceLogging::Mouse::DropInput();
  v16 = 0;
LABEL_17:
  W32ReleasePushLockExclusiveEx(v11);
  return v16;
}
