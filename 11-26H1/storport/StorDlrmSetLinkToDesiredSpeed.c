/*
 * XREFs of StorDlrmSetLinkToDesiredSpeed @ 0x14012E0A4
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x14012D1A8 (DlrmHandleScaleAction.c)
 * Callees:
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14012E8D4 (StorLogDLRMSetLinkToDesiredSpeed.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorDlrmSetLinkToDesiredSpeed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned __int64 v6; // rdi
  int v8; // r13d
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r14d
  LARGE_INTEGER v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0LL;
  v21 = 6;
  a6 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  v8 = a3;
  v11.QuadPart = 0LL;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741811;
  if ( StorEtwLoggingEnabled )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v11 = PerformanceCounter;
  }
  switch ( a4 )
  {
    case 0:
      goto LABEL_42;
    case 1:
      v13 = 5000;
      break;
    case 2:
      v13 = 8000;
      break;
    case 3:
      v13 = 16000;
      break;
    case 4:
      v13 = 32000;
      break;
    case 5:
      v13 = 64000;
      break;
    default:
LABEL_42:
      v14 = -1073741811;
      v15 = -1073741811;
      goto LABEL_43;
  }
  LOBYTE(a3) = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int *))(a2 + 32))(
          *(_QWORD *)(a2 + 8),
          v13 * (unsigned int)a5,
          a3,
          &a6,
          &v21);
  v15 = v14;
  if ( v14 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
LABEL_43:
    StorLogDLRMSetLinkToDesiredSpeed(a1, a4, a3, v21, a6, 0LL, v8, v14);
    return v15;
  }
  if ( a6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 276));
    v14 = -1073741436;
    goto LABEL_43;
  }
  if ( v21 != a4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    v14 = -1073741438;
    goto LABEL_43;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( UseQPCTime )
      v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v16.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v16.QuadPart <= 0 || v16.QuadPart >= v11.QuadPart )
      v17 = v16.QuadPart - v11.QuadPart;
    else
      v17 = v16.QuadPart - v11.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v17 )
      {
        v18 = 1000 * (v17 % PerformanceFrequency.QuadPart);
        v17 = v18 / PerformanceFrequency.QuadPart + 1000 * (v17 / PerformanceFrequency.QuadPart);
        v6 = 10000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 10000 * v17;
      }
    }
    else
    {
      v6 = v17;
    }
    StorLogDLRMSetLinkToDesiredSpeed(a1, a4, v17, v21, a6, v6, v8, 0);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 240), v6);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
    if ( v6 > *(_QWORD *)(a1 + 248) )
      _InterlockedExchange64((volatile __int64 *)(a1 + 248), v6);
    if ( v6 < *(_QWORD *)(a1 + 256) )
      _InterlockedExchange64((volatile __int64 *)(a1 + 256), v6);
  }
  return v15;
}
