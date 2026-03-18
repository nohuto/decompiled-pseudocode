/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x14003CB40
 * Callers:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     _lambda_458e1681217b8f4af03ab89c30ee8cb2_::_lambda_invoker_cdecl_ @ 0x1401ABF20 (_lambda_458e1681217b8f4af03ab89c30ee8cb2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x14003D830 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x14003D960 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14003D984 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquiredSharedUserCrit()
{
  __int64 CurrentThreadNonPaged; // rdi
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v2; // rsi
  struct UserCritTelemetry *Instance; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r8d

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
        UserCritTelemetry::UpdateUserCritInfo(Instance, v2, 1LL);
        *(LARGE_INTEGER *)(CurrentThreadNonPaged + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
          && (qword_14029EDA0 & 0x200000010000000LL) != 0
          && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8 )
        {
          v4 = (unsigned __int64)(1000000 * v2) % gliQpcFreq.QuadPart;
          v6 = (unsigned __int64)(1000000 * v2) / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            UserSessionState = W32GetUserSessionState(v5, v4);
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(UserSessionState + 36440),
              (unsigned int)&AcquiredSharedUserCritEvent,
              v8,
              v2,
              v6,
              *(_QWORD *)(UserSessionState + 36440));
          }
        }
        if ( v2 >= W32kEtwUserCritAcquireDelayTimeoutQPC )
        {
          v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36432);
          if ( PerformanceCounter.QuadPart - v5 >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            v9 = (unsigned __int64)(1000 * v2) % gliQpcFreq.QuadPart;
            v10 = (unsigned __int64)(1000 * v2) / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            {
              v11 = W32GetUserSessionState(v5, v9);
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v11 + 36440),
                (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                v12,
                v2,
                v10,
                *(_QWORD *)(v11 + 36440));
            }
            _InterlockedExchange64(
              (volatile __int64 *)(W32GetUserSessionState(v5, v9) + 36432),
              PerformanceCounter.QuadPart);
          }
        }
        *(_QWORD *)(CurrentThreadNonPaged + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(v5, v4) + 36440));
      }
    }
  }
}
