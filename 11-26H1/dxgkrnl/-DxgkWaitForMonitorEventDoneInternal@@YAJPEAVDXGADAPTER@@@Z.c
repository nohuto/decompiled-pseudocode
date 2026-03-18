/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1403CF7B4
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140433430 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403CFBC8 (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *a1)
{
  int v2; // eax
  void *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v10; // eax
  __int64 result; // rax
  __int64 v12; // rax
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-B8h] BYREF

  if ( a1 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
    if ( *((_QWORD *)a1 + 395) )
    {
      v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
      if ( v2 < 0 )
      {
        LODWORD(v8) = v2;
      }
      else
      {
        v3 = (void *)*((_QWORD *)a1 + 27);
        ObfReferenceObject(v3);
        v6 = 0LL;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4) + 24) = a1;
        WdLogGlobalForLineNumber = 4834;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4857;
        }
        v7 = *((_QWORD *)a1 + 395);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 112);
          if ( v8 )
          {
            if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v8 + 24)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 839;
            }
            v12 = *(_QWORD *)(v8 + 688);
            if ( v12 )
            {
              if ( *(int *)(v12 + 16) <= 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 848;
              }
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 688) + 16LL));
            }
            v6 = *(_QWORD *)(v8 + 688);
            LODWORD(v8) = 0;
            if ( !v6 )
              LODWORD(v8) = -1073741823;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4874;
            LODWORD(v8) = -1073741811;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4861;
          LODWORD(v8) = -1073741637;
        }
        ObfDereferenceObject(v3);
        if ( (int)v8 < 0 )
        {
          if ( v6 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2199;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pMonitorPendingEvent == NULL",
              2199LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2201;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            (int)v8,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v14);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v10 = KeWaitForSingleObject((PVOID)(v6 + 24), UserRequest, PreviousMode, 0, &Timeout);
          v8 = v10;
          if ( v10 == 258 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2228;
          }
          else if ( v10 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2233;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
              v8,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v6);
        }
      }
    }
    else
    {
      LODWORD(v8) = -1073741637;
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 2162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkWaitForMonitorEventDoneInternal is called on a render only adapter 0x%I64x, returning 0x%I64x!",
        (__int64)a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2147;
  }
  return result;
}
