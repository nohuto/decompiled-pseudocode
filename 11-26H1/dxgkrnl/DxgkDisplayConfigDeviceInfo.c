/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1402C9210
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14003E074 (-RequiresAdapterReference@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14003E0C8 (-RequiresAdapterCoreAccessShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14003E114 (-RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006549C (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400663BC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, struct _LUID *a2)
{
  char v2; // r12
  __int64 v5; // rcx
  LONG HighPart; // ebx
  __int64 v7; // rcx
  __int64 v8; // r15
  bool v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // ebx
  __int64 v20; // rcx
  bool v21; // zf
  DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  DXGADAPTER *v24; // rdx
  int v25; // ecx
  volatile signed __int32 *v26; // rsi
  struct DXGADAPTER *v27; // rdx
  int v28; // ecx
  int v29; // ecx
  bool v30; // al
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  LONG v37; // ebx
  __int64 LowPart; // rax
  const wchar_t *v39; // r9
  int v40; // edx
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  bool v48[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v49; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h]
  char v53; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v57; // [rsp+98h] [rbp-68h]
  char v58; // [rsp+A0h] [rbp-60h]
  GUID ActivityId; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v60[144]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0;
  v49 = 0LL;
  LOBYTE(v54) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x27u, 0, &v55, (unsigned __int8 *)&v54);
  *(_QWORD *)&ActivityId.Data1 = v55;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2184);
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    LowPart = 6967LL;
    v39 = L"io_pRequestPacket != NULL";
    WdLogGlobalForLineNumber = 6967;
    v40 = 262146;
LABEL_95:
    DxgkLogInternalTriageEvent(0LL, v40, -1, (__int64)v39, LowPart, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit);
    v42 = (_BYTE)v54 == 0;
LABEL_99:
    if ( !v42 )
      DisplayScenarioContextDissociate(&v55);
    if ( v49 )
      DXGADAPTER::ReleaseReference(v49);
    return 3221225485LL;
  }
  if ( !a2->HighPart
    || (HighPart = a2->HighPart, HighPart != (unsigned int)DispConfigTypes::GetGetterTypeSize(a2->LowPart))
    && (v37 = a2->HighPart, v37 != (unsigned int)DispConfigTypes::GetSetterTypeSize(a2->LowPart)) )
  {
    WdLogSingleEntry1(2LL);
    LowPart = (int)a2->LowPart;
    v39 = L"DxgkDisplayConfigDeviceInfo called with invalid size for (type = 0x%I64x)";
    v40 = 0x40000;
    WdLogGlobalForLineNumber = 6979;
    goto LABEL_95;
  }
  v7 = a2->LowPart;
  LODWORD(v8) = 0;
  v48[0] = 0;
  v9 = 0;
  if ( (int)v7 > 8 )
  {
    v13 = v7 - 9;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 4;
          if ( v16 )
          {
            v7 = (unsigned int)(v16 - 1);
            if ( (unsigned int)v7 >= 2 )
              goto LABEL_31;
          }
        }
      }
    }
  }
  else if ( (_DWORD)v7 != 8
         && (_DWORD)v7 != -40
         && (_DWORD)v7 != -38
         && (_DWORD)v7 != -37
         && (_DWORD)v7 != -27
         && (_DWORD)v7 != -18
         && (_DWORD)v7 != -16
         && (_DWORD)v7 != 7 )
  {
    goto LABEL_31;
  }
  v10 = DxgkAcquireSessionModeChangeLock(0);
  v8 = v10;
  v9 = v10 >= 0;
  v48[0] = v10 >= 0;
  if ( v10 >= 0 )
  {
LABEL_31:
    v17 = a2->LowPart;
    if ( (int)a2->LowPart > -20 )
    {
      if ( v17 == -19 || v17 == -14 || v17 == -13 || v17 == -6 || v17 == -5 )
        goto LABEL_40;
      v18 = v17 == 3;
    }
    else
    {
      if ( v17 == -20 || v17 == -39 || v17 == -36 || v17 == -35 || v17 == -34 || v17 == -24 )
        goto LABEL_40;
      v18 = v17 == -22;
    }
    if ( v18 )
    {
LABEL_40:
      LOBYTE(v7) = a1;
      v19 = DxgkDisplayConfigDeviceInfoNoAdapter(v7, &v49, a2);
      if ( v9 )
        DxgkReleaseSessionModeChangeLock();
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      v21 = (_BYTE)v54 == 0;
LABEL_46:
      if ( !v21 )
        DisplayScenarioContextDissociate(&v55);
      if ( v49 )
        DXGADAPTER::ReleaseReference(v49);
      return v19;
    }
    Global = DXGGLOBAL::GetGlobal();
    v49 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[1], &v50);
    v24 = v49;
    if ( !v49 )
    {
      WdLogSingleEntry2(3LL, a2[1].LowPart, a2[1].HighPart);
      v24 = 0LL;
      WdLogGlobalForLineNumber = 5709;
    }
    if ( !v24 )
    {
      v44 = WdLogNewEntry5_WdTrace(v23, 0LL);
      *(_QWORD *)(v44 + 24) = a2[1].HighPart;
      *(_QWORD *)(v44 + 32) = a2[1].LowPart;
      WdLogGlobalForLineNumber = 7007;
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit);
      v19 = -1073741811;
      goto LABEL_81;
    }
    v25 = a2->LowPart;
    v26 = (volatile signed __int32 *)v24;
    v57 = v24;
    v58 = 0;
    if ( v25 == 12 || v25 == -26 || v25 == -12 || v25 == 4 )
      goto LABEL_82;
    if ( !DispConfigTypes::RequiresAdapterReference(v25) || DispConfigTypes::RequiresAdapterCoreAccessShared(v28) )
    {
LABEL_60:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, v27, 0LL);
      v30 = DispConfigTypes::RequiresAdapterCoreAccessExclusive(a2->LowPart);
      v31 = a2->LowPart;
      if ( v30 )
      {
        if ( v31 == -23 || (v47 = 1LL, v31 == 13) )
          v47 = 2LL;
        v33 = COREADAPTERACCESS::AcquireExclusive((__int64)v60, v47);
      }
      else
      {
        if ( !DispConfigTypes::RequiresAdapterCoreAccessShared(v31) )
        {
LABEL_64:
          if ( (int)v8 < 0 )
          {
            WdLogSingleEntry3(2LL, v49, *((int *)v49 + 104), *((unsigned int *)v49 + 103));
            WdLogGlobalForLineNumber = 7044;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter-"
                        ">GetLuid() = <0x%I64x, 0x%I64x>)",
              (__int64)v49,
              *((int *)v49 + 104),
              *((unsigned int *)v49 + 103),
              0LL,
              0LL);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v56);
            if ( v9 )
              DxgkReleaseSessionModeChangeLock();
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
            if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit);
            v42 = (_BYTE)v54 == 0;
            goto LABEL_99;
          }
          if ( !v49
            || (v32 = a2->LowPart, (_DWORD)v32 == 4)
            || !DispConfigTypes::RequiresAdapterReference(v32)
            || *(_QWORD *)(v35 + 3160) )
          {
            LOBYTE(v32) = a1;
            v19 = DxgkDisplayConfigDeviceInfoForAdapter(v32, &v49, a2, *(_QWORD *)&ActivityId.Data1);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
            if ( v2 )
            {
              _InterlockedDecrement(v26 + 38);
              ExReleasePushLockSharedEx(v26 + 34, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER::ReleaseReference((DXGADAPTER *)v26);
            }
            if ( v9 )
              DxgkReleaseSessionModeChangeLock();
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
            if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
            v21 = (_BYTE)v54 == 0;
            goto LABEL_46;
          }
          WdLogSingleEntry3(3LL, v35, *(int *)(v35 + 416), *(unsigned int *)(v35 + 412));
          WdLogGlobalForLineNumber = 7057;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v56);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v48);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
          if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
          v19 = -1073741637;
LABEL_81:
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v54);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v49, 0LL);
          return v19;
        }
        v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
      }
      LODWORD(v8) = v33;
      goto LABEL_64;
    }
    if ( !DispConfigTypes::RequiresAdapterCoreAccessExclusive(v29) )
    {
LABEL_82:
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v56);
      if ( *((_DWORD *)v49 + 50) != 1 )
      {
        v19 = -1073741130;
        WdLogSingleEntry2(3LL, v49, -1073741130LL);
        WdLogGlobalForLineNumber = 7022;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v56);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v48);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit);
        goto LABEL_81;
      }
      v2 = v58;
      v26 = (volatile signed __int32 *)v57;
    }
    v27 = v49;
    goto LABEL_60;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 6993;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v9 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  if ( (_BYTE)v54 )
    DisplayScenarioContextDissociate(&v55);
  return (unsigned int)v8;
}
