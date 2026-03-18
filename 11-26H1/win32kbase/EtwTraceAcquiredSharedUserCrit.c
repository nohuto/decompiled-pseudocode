/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1400BC250
 * Callers:
 *     _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401CE590 (_lambda_5b4fd5b3c990349c66a8ee94c55a5de4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14001F6A0 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceAcquiredSharedUserCrit(int a1, __int64 a2, int a3)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  volatile signed __int64 *UserSessionState; // rax
  LONGLONG v13; // rcx
  unsigned __int64 v14; // r10
  int v15; // r8d
  unsigned __int64 v16; // r9
  LONGLONG v17; // rdx
  LONGLONG v18; // rbp
  __int64 v19; // rax
  int v20; // r8d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  __int64 v36; // [rsp+80h] [rbp-38h]
  __int64 v37; // [rsp+88h] [rbp-30h]
  __int64 v38; // [rsp+90h] [rbp-28h]
  __int64 v39; // [rsp+98h] [rbp-20h]
  __int64 v40; // [rsp+A0h] [rbp-18h]

  if ( dword_1402A9F58
    && (v3 = 0, (qword_1402A9F68 & 0x400000000000LL) != 0)
    && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70
    || (v3 = W32kEtwEnabledKeyword, a3 = 0x10000000, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000002010000000uLL) != 0
    && (qword_1402A9DC8 & 0x8000002010000000uLL) == qword_1402A9DC8
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x200000010000000LL) != 0
    && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8 )
  {
    if ( W32GetUserSessionState(a1, v3, a3) != -36488 )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4);
      if ( CurrentThreadWin32Thread )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v8 = PerformanceCounter.QuadPart - *(_QWORD *)(CurrentThreadWin32Thread + 8);
        UserSessionState = (volatile signed __int64 *)W32GetUserSessionState(v10, v9, v11);
        v26 = 10LL;
        v14 = 1000000 * v8;
        v15 = (int)UserSessionState;
        v27 = 25LL;
        v28 = 50LL;
        v29 = 100LL;
        v16 = (unsigned __int64)(1000000 * v8) / gliQpcFreq.QuadPart;
        v30 = 250LL;
        v31 = 500LL;
        LODWORD(v17) = 0;
        v32 = 1000LL;
        v33 = 2500LL;
        v34 = 5000LL;
        v35 = 10000LL;
        v36 = 25000LL;
        v37 = 50000LL;
        v38 = 100000LL;
        v39 = 200000LL;
        v40 = -1LL;
        while ( (unsigned int)v17 < 0xF )
        {
          v13 = 8LL * (unsigned int)v17;
          if ( v16 <= *(__int64 *)((char *)&v26 + v13) )
          {
            _InterlockedIncrement64((volatile signed __int64 *)((char *)UserSessionState + v13 + 41008));
            break;
          }
          LODWORD(v17) = v17 + 1;
        }
        _InterlockedAdd64(UserSessionState + 5157, v16);
        _InterlockedIncrement64(UserSessionState + 5163);
        if ( v16 > _InterlockedCompareExchange64(UserSessionState + 5160, 0LL, 0LL) )
          _InterlockedExchange64(UserSessionState + 5160, v16);
        *(LARGE_INTEGER *)(CurrentThreadWin32Thread + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
          && (qword_1402A9DC0 & 0x200000010000000LL) != 0 )
        {
          LODWORD(v13) = qword_1402A9DC8 & 0x10000000;
          if ( (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8 )
          {
            v17 = v14 % gliQpcFreq.QuadPart;
            v18 = v14 / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              v19 = W32GetUserSessionState(v13, v17, (_DWORD)UserSessionState);
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v19 + 36480),
                &AcquiredSharedUserCritEvent,
                v20,
                v8,
                v18,
                *(_QWORD *)(v19 + 36480),
                v26,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40);
            }
          }
        }
        if ( v8 >= W32kEtwUserCritAcquireDelayTimeoutQPC )
        {
          v13 = PerformanceCounter.QuadPart - *(_QWORD *)(W32GetUserSessionState(v13, v17, v15) + 36472);
          if ( v13 >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            v21 = (unsigned __int64)(1000 * v8) % gliQpcFreq.QuadPart;
            v22 = (unsigned __int64)(1000 * v8) / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            {
              v23 = W32GetUserSessionState(v13, v21, v15);
              LODWORD(v25) = v22;
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v23 + 36480),
                &AcquiredSharedUserCritTelemetryEvent,
                v24,
                v8,
                v25,
                *(_QWORD *)(v23 + 36480));
            }
            _InterlockedExchange64(
              (volatile __int64 *)(W32GetUserSessionState(v13, v21, v15) + 36472),
              PerformanceCounter.QuadPart);
          }
        }
        *(_QWORD *)(CurrentThreadWin32Thread + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(v13, v17, v15) + 36480));
      }
    }
  }
}
