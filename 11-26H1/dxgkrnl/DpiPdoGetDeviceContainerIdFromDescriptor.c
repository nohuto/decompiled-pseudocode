/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8
 * Callers:
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x140255818 (DpiDxgkDdiGetChildContainerId.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x140408A2C (-_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x140408D18 (-MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  char v1; // r15
  __int64 v2; // r13
  __int64 ChildContainerId; // rdi
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int MonitorEldInformation; // ebx
  int v13; // eax
  const GUID *p_Buf1; // rcx
  NTSTATUS v15; // eax
  _QWORD *v17; // [rsp+30h] [rbp-39h]
  DXGMONITOR *v18[3]; // [rsp+40h] [rbp-29h] BYREF
  struct _GUID Buf2; // [rsp+58h] [rbp-11h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  int v21; // [rsp+70h] [rbp+7h]
  struct _GUID Buf1; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v23; // [rsp+88h] [rbp+1Fh]

  Buf2 = 0LL;
  v20 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildContainerId) = -1073741637;
  v21 = 0;
  Buf1 = 0LL;
  v23 = 0LL;
  v4 = v2 + 936;
  v5 = *(_QWORD **)(*(_QWORD *)(v2 + 32) + 64LL);
  v17 = v5;
  v6 = v5[5];
  if ( *(_DWORD *)(v2 + 496) == 1 )
  {
    if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)v4 + 4LL)) )
      return (unsigned int)ChildContainerId;
    v9 = *(unsigned int *)(v2 + 504);
    v10 = v17[504];
    v11 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogGlobalForLineNumber = 4301;
    if ( !v10 || (_DWORD)v9 == -1 )
    {
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    MONITOR_MGR::AcquireMonitorShared(v18, v10, v9, 1u);
    if ( !v18[0] )
    {
      LODWORD(ChildContainerId) = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4313;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v18);
      return (unsigned int)ChildContainerId;
    }
    MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                              v18[0],
                              (struct _MONITOR_PACKED_ELD_INFORMATION *)&v20);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v18);
    LODWORD(ChildContainerId) = MonitorEldInformation;
    if ( MonitorEldInformation < 0 )
      goto LABEL_19;
    v5 = v17;
    LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor((void *)v17[504], *(_DWORD *)(v2 + 504), &Buf2);
    if ( (int)ChildContainerId < 0 )
    {
      v13 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v20, 12LL, &Buf2);
      LODWORD(ChildContainerId) = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v13);
        WdLogGlobalForLineNumber = 3473;
        return (unsigned int)ChildContainerId;
      }
    }
    else
    {
      v1 = 1;
    }
    *(_QWORD *)&v23 = v20;
    DWORD2(v23) = v21;
    Buf1 = Buf2;
  }
  if ( *(_DWORD *)(v6 + 28) < 0x3005u || !*(_QWORD *)(v6 + 768) )
  {
LABEL_16:
    if ( v1 && memcmp(&Buf1, &Buf2, 0x10uLL) )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), (int)ChildContainerId);
      WdLogGlobalForLineNumber = 3551;
      WdLogSingleEntry4(
        2LL,
        *(_QWORD *)&Buf2.Data1,
        *(_QWORD *)Buf2.Data4,
        *(_QWORD *)&Buf1.Data1,
        *(_QWORD *)Buf1.Data4);
      WdLogGlobalForLineNumber = 3557;
      Buf1 = Buf2;
    }
    goto LABEL_19;
  }
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)v4 + 72LL), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(v5[504], 1);
  ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(v6, v5[6], *(_DWORD *)(*(_QWORD *)v4 + 24LL), (__int64)&Buf1);
  DxgkReleaseAdapterDdiSync((DXGADAPTER *)v5[504]);
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)v4 + 72LL), 0);
  if ( (_DWORD)ChildContainerId == -1071841279 )
  {
    if ( *(_DWORD *)(v2 + 496) == 1 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 3525;
      LODWORD(ChildContainerId) = 0;
      Buf1 = Buf2;
      goto LABEL_16;
    }
  }
  else if ( (int)ChildContainerId >= 0 )
  {
    goto LABEL_16;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), ChildContainerId);
  WdLogGlobalForLineNumber = 3536;
LABEL_19:
  if ( (int)ChildContainerId >= 0 || v1 )
  {
    if ( !memcmp(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      LODWORD(ChildContainerId) = -1073741823;
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), -1073741823LL);
      WdLogGlobalForLineNumber = 3576;
    }
    else
    {
      p_Buf1 = &Buf1;
      if ( v1 )
        p_Buf1 = &Buf2;
      v15 = RtlStringFromGUID(p_Buf1, (PUNICODE_STRING)(v2 + 960));
      LODWORD(ChildContainerId) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 768), v15);
        WdLogGlobalForLineNumber = 3588;
      }
    }
  }
  return (unsigned int)ChildContainerId;
}
