/*
 * XREFs of PopDripsWatchdogCallbackHandler @ 0x140B41B9C
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x14047CD84 (PopQueueDirectedDripsWork.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x1404FA644 (PopDeviceConstraintsEnforced.c)
 *     PopDripsWatchdogGetDeviceActiveTime @ 0x1404FD8E0 (PopDripsWatchdogGetDeviceActiveTime.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x14050C900 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x140781A08 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x140B347EC (PopDripsWatchdogInvokeDeviceCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58 (PopFxDestroyDripsBlockingDeviceList.c)
 */

char __fastcall PopDripsWatchdogCallbackHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _KTHREAD *a5,
        char a6)
{
  struct _KTHREAD *v6; // r15
  int v7; // eax
  int v8; // ebp
  bool v9; // bl
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  _OWORD *i; // rdi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  AutoBoost *v20; // rax
  void *v21; // rdx
  signed __int8 v22; // cf
  AutoBoost *v23; // rbx
  signed __int32 v24; // eax
  __int64 v25; // rcx
  signed __int32 v26; // ett
  _OWORD v28[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a5;
  v28[0] = 0LL;
  LOBYTE(v7) = PopDirectedDripsTimeout;
  v8 = a1 & 0x100;
  v9 = 0;
  if ( PopDirectedDripsTimeout && a4 / 0x989680 >= (unsigned int)PopDirectedDripsTimeout || a6 )
    v9 = (word_140E27158 & 1) == 0 || (a1 & 1) != 0;
  if ( (a1 & 0x80) != 0 || (a1 & 0x100) != 0 || v9 )
  {
    LOBYTE(v7) = PopDeviceConstraintsEnforced(a1);
    if ( (_BYTE)v7 )
    {
      v7 = PopFxBuildDripsBlockingDeviceList(a3, (__int64 *)v28);
      if ( v7 >= 0 )
      {
        if ( v9 )
        {
          _m_prefetchw(&PopDirectedDripsState);
          v13 = PopDirectedDripsState;
          do
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange(&PopDirectedDripsState, v13, v13);
          }
          while ( v14 != v13 );
          if ( (v13 & 1) != 0 )
            dword_140F12E34 = 0;
        }
        else if ( v8 )
        {
          PopDirectedDripsNotify(2, (char *)&a5, v11, v12);
        }
        for ( i = *(_OWORD **)&v28[0]; i != v28; i = *(_OWORD **)i )
        {
          if ( v9
            || v8
            && ((PopDripsWatchdogGetDeviceActiveTime((__int64)(i - 57)),
                 !PopFxIsDirectedPowerTransitionSupported((__int64)(i - 57), 0LL))
              ? (v17 = (unsigned int)PopFxDirectedFxDefaultTimeout)
              : (v17 = *((unsigned int *)i + 11)),
                v16 >= v17) )
          {
            PopDirectedDripsMarkCandidateDevice((__int64)(i - 57));
          }
          else
          {
            PopDripsWatchdogInvokeDeviceCallbacks((__int64)(i - 57));
          }
        }
        if ( v9 )
        {
          _m_prefetchw(&PopDirectedDripsState);
          v18 = PopDirectedDripsState;
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange(&PopDirectedDripsState, v18, v18);
          }
          while ( v19 != v18 );
          if ( (v18 & 1) != 0 )
          {
            v20 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12EA0, 0LL, 0LL, v12);
            v22 = _interlockedbittestandset64(&stru_140F12EA0.Header.Lock, 0LL);
            v23 = v20;
            if ( v22 )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12EA0, v20, (__int64)&stru_140F12EA0);
            if ( v23 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v23, v21);
              else
                *((_BYTE *)v23 + 10) = 1;
            }
            if ( stru_140F12EA0.WaitBlock[1].Thread == v6 )
            {
              if ( *(_DWORD *)&stru_140F12EA0.WaitBlockFill11[80] )
              {
                _m_prefetchw(&PopDirectedDripsState);
                v24 = PopDirectedDripsState;
                do
                {
                  v25 = v24 | 0x3000u;
                  v26 = v24;
                  v24 = _InterlockedCompareExchange(&PopDirectedDripsState, v25, v24);
                }
                while ( v26 != v24 );
                if ( (v24 & 0x3000) != 0x3000 || dword_140F12E34 )
                  PopQueueDirectedDripsWork(v25, 0x800uLL);
              }
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12EA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12EA0.Header.Lock);
            KeAbPostRelease((unsigned __int64)&stru_140F12EA0);
          }
        }
        else if ( v8 )
        {
          PopDirectedDripsNotify(3, (char *)&a5, v11, v12);
        }
        LOBYTE(v7) = PopFxDestroyDripsBlockingDeviceList(v28);
      }
    }
  }
  return v7;
}
