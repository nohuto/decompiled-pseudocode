/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x140020110
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14001F6A0 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1400205D8 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 */

void __fastcall _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
        struct _FAST_ERESOURCE *a1,
        struct _W32THREADNONPAGED *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  volatile signed __int64 *v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  LONGLONG v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LONGLONG v23; // rbp
  __int64 v24; // rax
  int v25; // r8d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // [rsp+20h] [rbp-A8h]
  __int64 v31; // [rsp+30h] [rbp-98h]
  __int64 v32; // [rsp+38h] [rbp-90h]
  __int64 v33; // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  __int64 v40; // [rsp+78h] [rbp-50h]
  __int64 v41; // [rsp+80h] [rbp-48h]
  __int64 v42; // [rsp+88h] [rbp-40h]
  __int64 v43; // [rsp+90h] [rbp-38h]
  __int64 v44; // [rsp+98h] [rbp-30h]
  __int64 v45; // [rsp+A0h] [rbp-28h]

  if ( (dword_1402A9F58
     && (qword_1402A9F68 & 0x400000000000LL) != 0
     && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70
     || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x8000002010000000uLL) != 0
     && (qword_1402A9DC8 & 0x8000002010000000uLL) == qword_1402A9DC8
     || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x200000010000000LL) != 0
     && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8)
    && ((__int64 (*)(void))W32GetUserSessionState)() != -36488 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  LOBYTE(a3) = 1;
  ExAcquireFastResourceExclusive(a1, (char *)a2 + 32, a3);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 6) & 0xFFFFFFF3 | 8;
  if ( (dword_1402A9F58
     && (qword_1402A9F68 & 0x400000000000LL) != 0
     && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70
     || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x8000002010000000uLL) != 0
     && (qword_1402A9DC8 & 0x8000002010000000uLL) == qword_1402A9DC8
     || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
     && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
     && (qword_1402A9DC0 & 0x200000010000000LL) != 0
     && (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8)
    && ((__int64 (*)(void))W32GetUserSessionState)() != -36488 )
  {
    v10 = PsGetCurrentThreadWin32Thread(v9, v8);
    if ( v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
      v31 = 10LL;
      v13 = 1000000 * v12;
      v15 = (volatile signed __int64 *)((__int64 (*)(void))W32GetUserSessionState)();
      v32 = 25LL;
      v33 = 50LL;
      v34 = 100LL;
      v16 = (unsigned __int64)(1000000 * v12) / gliQpcFreq.QuadPart;
      v35 = 250LL;
      v36 = 500LL;
      v17 = 0LL;
      v37 = 1000LL;
      v38 = 2500LL;
      v39 = 5000LL;
      v40 = 10000LL;
      v41 = 25000LL;
      v42 = 50000LL;
      v43 = 100000LL;
      v44 = 200000LL;
      v45 = -1LL;
      while ( (unsigned int)v17 < 0xF )
      {
        v14 = 8LL * (unsigned int)v17;
        if ( v16 <= *(__int64 *)((char *)&v31 + v14) )
        {
          _InterlockedIncrement64(&v15[(unsigned __int64)v14 / 8 + 5111]);
          break;
        }
        v17 = (unsigned int)(v17 + 1);
      }
      _InterlockedAdd64(v15 + 5156, v16);
      _InterlockedIncrement64(v15 + 5162);
      if ( v16 > _InterlockedCompareExchange64(v15 + 5159, 0LL, 0LL) )
        v16 = _InterlockedExchange64(v15 + 5159, v16);
      UserSessionState = W32GetUserSessionState(v14, v17, v15, v16);
      UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)(UserSessionState + 36488));
      *(LARGE_INTEGER *)(v10 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
        && (qword_1402A9DC0 & 0x200000010000000LL) != 0 )
      {
        v20 = qword_1402A9DC8 & 0x200000010000000LL;
        if ( (qword_1402A9DC8 & 0x200000010000000LL) == qword_1402A9DC8 )
        {
          v19 = v13 % gliQpcFreq.QuadPart;
          v23 = v13 / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            v24 = W32GetUserSessionState(v20, v19, v21, v22);
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(v24 + 36480),
              &AcquiredExclusiveUserCritEvent,
              v25,
              v12,
              v23,
              *(_QWORD *)(v24 + 36480),
              v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
          }
        }
      }
      if ( v12 >= W32kEtwUserCritAcquireDelayTimeoutQPC )
      {
        v20 = PerformanceCounter.QuadPart - *(_QWORD *)(W32GetUserSessionState(v20, v19, v21, v22) + 36464);
        if ( v20 >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          v26 = (unsigned __int64)(1000 * v12) % gliQpcFreq.QuadPart;
          v27 = (unsigned __int64)(1000 * v12) / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
          {
            v28 = W32GetUserSessionState(v20, v26, v21, v22);
            LODWORD(v30) = v27;
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(v28 + 36480),
              &AcquiredExclusiveUserCritTelemetryEvent,
              v29,
              v12,
              v30,
              *(_QWORD *)(v28 + 36480));
          }
          *(LARGE_INTEGER *)(W32GetUserSessionState(v20, v26, v21, v22) + 36464) = PerformanceCounter;
        }
      }
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(
                                                                                    v20,
                                                                                    v19,
                                                                                    v21,
                                                                                    v22)
                                                                                + 36480));
    }
  }
}
