/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1402C42E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004B4C4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline @ 0x14004B554 (Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x14025B4E8 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14025EC28 (-DmmGetTargetLinkTrainingStatusFromSource@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x1402C49D8 (-DmmCheckMonitorPowerState@@YAJPEAXI@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(volatile void *a1)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // r14
  DXGADAPTER *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  int IsWaitingForPowerOn; // eax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-A8h]
  __int64 ULong64FromUser; // [rsp+50h] [rbp-78h]
  DXGADAPTER *v36[2]; // [rsp+58h] [rbp-70h] BYREF
  int v37; // [rsp+68h] [rbp-60h] BYREF
  __int64 v38; // [rsp+70h] [rbp-58h]
  char v39; // [rsp+78h] [rbp-50h]
  _QWORD v40[2]; // [rsp+80h] [rbp-48h] BYREF
  char v41; // [rsp+90h] [rbp-38h]
  DXGADAPTER *v42; // [rsp+D8h] [rbp+10h] BYREF
  unsigned __int8 v43; // [rsp+E0h] [rbp+18h] BYREF
  int v44; // [rsp+E8h] [rbp+20h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2046);
  Current = DXGPROCESS::GetCurrent();
  v3 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6513;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 416LL))() )
  {
    LODWORD(v13) = -1071775738;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6521;
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v13;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6531;
    v34 = (unsigned int)PsGetCurrentProcessSessionId(v25, v24, v26, v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckMonitorPowerState is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  ULong64FromUser = RtlReadULong64FromUser(a1);
  v42 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v36, ULong64FromUser, (struct _KTHREAD **)v3, &v42, 1);
  v10 = v42;
  if ( !v42 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)ULong64FromUser, -1073741811LL);
    WdLogGlobalForLineNumber = 6559;
LABEL_46:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v28);
LABEL_47:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v3 + 11) + 224LL))() )
  {
    LODWORD(v13) = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = -1071775738LL;
    WdLogGlobalForLineNumber = 6572;
LABEL_16:
    if ( v36[0] )
      DXGADAPTER::ReleaseReference(v36[0]);
    goto LABEL_18;
  }
  LODWORD(v13) = 0;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
  if ( (unsigned int)Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = DxgkAcquireSessionModeChangeLock(0LL);
    v13 = v14;
    LOBYTE(v42) = v14 >= 0;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6594;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_45:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
      goto LABEL_46;
    }
  }
  v40[1] = v10;
  _InterlockedIncrement64((volatile signed __int64 *)v10 + 3);
  v40[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v10 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v10 + 38);
  v41 = 1;
  if ( *((_DWORD *)v10 + 50) == 1 )
  {
    v16 = *((_QWORD *)v10 + 395);
    if ( !v16 )
    {
      LODWORD(v13) = -1073741637;
      WdLogSingleEntry2(3LL, v10, -1073741637LL);
      WdLogGlobalForLineNumber = 6612;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
LABEL_15:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
      goto LABEL_16;
    }
    if ( HIDWORD(ULong64FromUser) < *(_DWORD *)(v16 + 96) )
    {
      if ( *((int *)SessionData + 4632) <= 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(HIDWORD(ULong64FromUser), v15);
        LODWORD(v13) = -1071775738;
        v21[3] = -1071775738LL;
        v21[4] = v10;
        v21[5] = HIDWORD(ULong64FromUser);
        WdLogGlobalForLineNumber = 6629;
      }
      else
      {
        v20 = *((_QWORD *)v10 + 395);
        if ( HIDWORD(ULong64FromUser) >= *(_DWORD *)(v20 + 96) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6129;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId < m_NumVidPnSources",
            6129LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *(_BYTE *)(4024LL * HIDWORD(ULong64FromUser) + *(_QWORD *)(v20 + 128) + 762) )
        {
          if ( (unsigned int)Feature_HoldingModeChangeLockwhenCheckingMonitorPowerState__private_IsEnabledDeviceUsageNoInline() )
          {
            LODWORD(v13) = DmmCheckMonitorPowerState(v10, HIDWORD(ULong64FromUser));
          }
          else if ( !DXGADAPTER::IsVSyncAvailable(v10, HIDWORD(ULong64FromUser)) )
          {
            v44 = 0;
            v43 = 0;
            if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v10) )
              goto LABEL_59;
            IsWaitingForPowerOn = DmmIsWaitingForPowerOn(v30, HIDWORD(ULong64FromUser), &v43);
            v32 = v43;
            if ( IsWaitingForPowerOn < 0 )
              v32 = 0;
            if ( !v32 )
            {
LABEL_59:
              if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v10)
                && (int)DmmGetTargetLinkTrainingStatusFromSource(
                          v33,
                          HIDWORD(ULong64FromUser),
                          (enum _DXGK_CONNECTION_STATUS *)&v44) >= 0
                && v44 == 12 )
              {
                LODWORD(v13) = -2145517568;
              }
              else
              {
                LODWORD(v13) = -1071775738;
              }
            }
            else
            {
              LODWORD(v13) = 0;
            }
          }
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(4024LL * HIDWORD(ULong64FromUser), v15);
          LODWORD(v13) = -1071775739;
          v22[3] = -1071775739LL;
          v22[4] = v10;
          v22[5] = HIDWORD(ULong64FromUser);
          WdLogGlobalForLineNumber = 6637;
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)v10 + 38);
      ExReleasePushLockSharedEx((char *)v10 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v10);
      goto LABEL_15;
    }
    WdLogSingleEntry2(3LL, HIDWORD(ULong64FromUser), -1073741811LL);
    WdLogGlobalForLineNumber = 6621;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    goto LABEL_45;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
  if ( v36[0] )
    DXGADAPTER::ReleaseReference(v36[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
