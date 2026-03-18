/*
 * XREFs of PopDripsWatchdogCallbackHandler @ 0x140B3FB6C
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopQueueDirectedDripsWork @ 0x140483414 (PopQueueDirectedDripsWork.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x140500E54 (PopDeviceConstraintsEnforced.c)
 *     PopDripsWatchdogGetDeviceActiveTime @ 0x140504010 (PopDripsWatchdogGetDeviceActiveTime.c)
 *     PopFxIsDirectedPowerTransitionSupported @ 0x140512E90 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x14077EF08 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x140B32398 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B3FE28 (PopFxDestroyDripsBlockingDeviceList.c)
 */

char __fastcall PopDripsWatchdogCallbackHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r15
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
    v9 = (word_140E27018 & 1) == 0 || (a1 & 1) != 0;
  if ( (a1 & 0x80) != 0 || (a1 & 0x100) != 0 || v9 )
  {
    LOBYTE(v7) = PopDeviceConstraintsEnforced(a1);
    if ( (_BYTE)v7 )
    {
      v7 = PopFxBuildDripsBlockingDeviceList(a3, (__int64 **)v28);
      if ( v7 >= 0 )
      {
        if ( v9 )
        {
          _m_prefetchw(dword_140F12AC0);
          v13 = dword_140F12AC0[0];
          do
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange(dword_140F12AC0, v13, v13);
          }
          while ( v14 != v13 );
          if ( (v13 & 1) != 0 )
            unk_140F12AF4 = 0;
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
          _m_prefetchw(dword_140F12AC0);
          v18 = dword_140F12AC0[0];
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange(dword_140F12AC0, v18, v18);
          }
          while ( v19 != v18 );
          if ( (v18 & 1) != 0 )
          {
            v20 = (AutoBoost *)KeAbPreAcquire((__int64)&unk_140F12B60, 0LL, 0LL, v12);
            v22 = _interlockedbittestandset64(&unk_140F12B60.Header.Lock, 0LL);
            v23 = v20;
            if ( v22 )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&unk_140F12B60, v20, (__int64)&unk_140F12B60);
            if ( v23 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v23, v21);
              else
                *((_BYTE *)v23 + 10) = 1;
            }
            if ( qword_140F12CE8 == v6 )
            {
              if ( dword_140F12CF0 )
              {
                _m_prefetchw(dword_140F12AC0);
                v24 = dword_140F12AC0[0];
                do
                {
                  v25 = v24 | 0x3000u;
                  v26 = v24;
                  v24 = _InterlockedCompareExchange(dword_140F12AC0, v25, v24);
                }
                while ( v26 != v24 );
                if ( (v24 & 0x3000) != 0x3000 || unk_140F12AF4 )
                  PopQueueDirectedDripsWork(v25, 0x800uLL);
              }
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&unk_140F12B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&unk_140F12B60.Header.Lock);
            KeAbPostRelease((unsigned __int64)&unk_140F12B60);
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
