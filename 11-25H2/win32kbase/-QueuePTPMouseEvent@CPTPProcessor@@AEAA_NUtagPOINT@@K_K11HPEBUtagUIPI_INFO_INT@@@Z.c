/*
 * XREFs of ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x14018BB90
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14015BD98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
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
  LONG x; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  int *QuadPart; // rcx
  __int64 v19; // rdx
  __int64 UserSessionState; // rsi
  __int64 v21; // rbp
  _BYTE v23[20]; // [rsp+20h] [rbp-58h]
  LONG y; // [rsp+8Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(this, a2);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v12 + 3336), 0);
  if ( *(_DWORD *)this[262].QuadPart < 0x40u )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QuadPart = (int *)this[261].QuadPart;
    this[258] = PerformanceCounter;
    *QuadPart = ((unsigned __int8)*QuadPart + 1) & 0x3F;
    UserSessionState = W32GetUserSessionState(QuadPart, v19);
    *(_DWORD *)v23 = 0x800000;
    v21 = 136LL * *(unsigned int *)this[261].QuadPart;
    *(LARGE_INTEGER *)(UserSessionState + v21 + 3352) = this[66];
    *(_QWORD *)(UserSessionState + v21 + 3392) = a5;
    *(_QWORD *)(UserSessionState + v21 + 3384) = a4;
    *(_QWORD *)(UserSessionState + v21 + 3400) = a6;
    *(_OWORD *)(UserSessionState + v21 + 3408) = *(_OWORD *)&this[254].LowPart;
    *(_OWORD *)(UserSessionState + v21 + 3424) = *(_OWORD *)&this[256].LowPart;
    *(_OWORD *)(UserSessionState + v21 + 3440) = *(_OWORD *)&this[258].LowPart;
    *(LARGE_INTEGER *)(UserSessionState + v21 + 3456) = this[260];
    *(_DWORD *)(UserSessionState + v21 + 3464) = a7;
    *(_OWORD *)(UserSessionState + v21 + 3468) = *(_OWORD *)a8;
    *(_OWORD *)&v23[4] = 0LL;
    *(_OWORD *)(UserSessionState + v21 + 3360) = *(_OWORD *)v23;
    *(_QWORD *)(UserSessionState + v21 + 3376) = 0LL;
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(a6) )
      *(_DWORD *)(UserSessionState + v21 + 3380) = -11446784;
    if ( (a3 & 2) != 0 )
    {
      *(_WORD *)(UserSessionState + v21 + 3364) |= 1u;
    }
    else
    {
      switch ( a3 )
      {
        case 4:
          *(_WORD *)(UserSessionState + v21 + 3364) |= 2u;
          goto LABEL_8;
        case 8:
          *(_WORD *)(UserSessionState + v21 + 3364) |= 4u;
          goto LABEL_8;
        case 16:
          *(_WORD *)(UserSessionState + v21 + 3364) |= 8u;
          goto LABEL_8;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(UserSessionState + v21 + 3376) = y;
      *(_DWORD *)(UserSessionState + v21 + 3372) = x;
LABEL_18:
      v16 = 1;
      ++*(_DWORD *)this[262].QuadPart;
      goto LABEL_19;
    }
LABEL_8:
    if ( *(_DWORD *)(UserSessionState + v21 + 3372) || *(_DWORD *)(UserSessionState + v21 + 3376) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1388LL);
    goto LABEL_18;
  }
  v15 = W32GetUserSessionState(v14, v13);
  ++*(_DWORD *)(v15 + 12168);
  InputTraceLogging::Mouse::DropInput();
  v16 = 0;
LABEL_19:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v12 + 3336), 0LL);
  return v16;
}
