/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x14003CED0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401ABF70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 * Callees:
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x14003D160 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x14003D830 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x14003D960 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14003D984 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquiredExclusiveUserCrit()
{
  __int64 CurrentThreadNonPaged; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v2; // rdi
  struct UserCritTelemetry *Instance; // rax
  UserCritTelemetry *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 UserSessionState; // rax
  int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // r8d

  if ( dword_14029EF38
    && (qword_14029EF48 & 0x400000000000LL) != 0
    && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000002010000000uLL) != 0
    && (qword_14029EDA8 & 0x8000002010000000uLL) == qword_14029EDA8
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x200000010000000LL) != 0
    && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8 )
  {
    if ( UserCritTelemetry::getInstance() )
    {
      CurrentThreadNonPaged = W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v2 = PerformanceCounter.QuadPart - *(_QWORD *)(CurrentThreadNonPaged + 8);
        Instance = UserCritTelemetry::getInstance();
        UserCritTelemetry::UpdateUserCritInfo(Instance, v2, 0LL);
        v4 = UserCritTelemetry::getInstance();
        UserCritTelemetry::SendUserCritSummary(v4);
        *(LARGE_INTEGER *)(CurrentThreadNonPaged + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
          && (qword_14029EDA0 & 0x200000010000000LL) != 0
          && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8 )
        {
          v5 = (unsigned __int64)(1000000 * v2) % gliQpcFreq.QuadPart;
          v7 = (unsigned __int64)(1000000 * v2) / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            UserSessionState = W32GetUserSessionState(v6, v5);
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(UserSessionState + 36440),
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v9,
              v2,
              v7,
              *(_QWORD *)(UserSessionState + 36440));
          }
        }
        if ( v2 >= W32kEtwUserCritAcquireDelayTimeoutQPC )
        {
          v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36424);
          if ( PerformanceCounter.QuadPart - v6 >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            v10 = (unsigned __int64)(1000 * v2) % gliQpcFreq.QuadPart;
            v11 = (unsigned __int64)(1000 * v2) / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            {
              v12 = W32GetUserSessionState(v6, v10);
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v12 + 36440),
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v13,
                v2,
                v11,
                *(_QWORD *)(v12 + 36440));
            }
            *(LARGE_INTEGER *)(W32GetUserSessionState(v6, v10) + 36424) = PerformanceCounter;
          }
        }
        *(_QWORD *)(CurrentThreadNonPaged + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(v6, v5) + 36440));
      }
    }
  }
}
