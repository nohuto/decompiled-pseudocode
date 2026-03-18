/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x140257550
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140344070 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1403654B0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1403BCFD4 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403EF088 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r14
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  NTSTATUS AllMonitorDevicesFromSessionView; // edi
  __int64 Length; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rsi
  __int64 v10; // r15
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v12; // rdx
  bool v13; // zf
  int CurrentProcessSessionId; // r12d
  int v15; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v16; // rsi
  char v17; // r13
  int v18; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *Pool2; // rax
  unsigned int v20; // r13d
  __int64 *v21; // rdi
  char *v22; // r13
  char v23; // r12
  int v24; // esi
  unsigned int v25; // edx
  void *v26; // rcx
  unsigned int v27; // edx
  void *v28; // rcx
  int v29; // eax
  PIRP v30; // rcx
  unsigned int v32; // [rsp+30h] [rbp-38h]
  unsigned int v33; // [rsp+30h] [rbp-38h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v34; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v36; // [rsp+40h] [rbp-28h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v40; // [rsp+C0h] [rbp+58h] BYREF
  int v41; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v38 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  AllMonitorDevicesFromSessionView = -1073741637;
  v36 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    LODWORD(v38) = -1;
    LOBYTE(v37[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v37, (const struct _GUID *)&Parameters->ReadMode, 0x46u, 0);
    AllMonitorDevicesFromSessionView = DxgkPowerOnOffMonitor(
                                         *(_QWORD *)(v10 + 24),
                                         1u,
                                         &v38,
                                         (int *)Parameters,
                                         1,
                                         v37[1]);
    if ( AllMonitorDevicesFromSessionView < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1310;
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v37);
    goto LABEL_71;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = *(_QWORD *)&Parameters->NamedPipeType;
      Parameters->InboundQuota = *(unsigned __int8 *)(v10 + 1156);
      Parameters->DefaultTimeout.QuadPart = *(_QWORD *)(v10 + 152);
      *(_DWORD *)&Parameters->TimeoutSpecified = 0;
      if ( !*(_DWORD *)(v4 + 156) && DpiFdoIsPostDevice(*(_QWORD *)(v4 + 32)) )
        *(_DWORD *)&Parameters->TimeoutSpecified = 0x20000000;
      AllMonitorDevicesFromSessionView = 0;
      v5 = 40LL;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( (unsigned int)Length >= 0x20 && UserBuffer )
        {
          AllMonitorDevicesFromSessionView = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 4032);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 4032) + 412LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 4032) + 4876LL);
          goto LABEL_71;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_71;
        if ( (unsigned int)Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v38) = 0;
          v40 = D3DDDI_VSSLO_UNINITIALIZED;
          AllMonitorDevicesFromSessionView = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( AllMonitorDevicesFromSessionView >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(void **)(v10 + 4032),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v38,
                                                         &v40);
            LOBYTE(v12) = 1;
            AllMonitorDevicesFromSessionView = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v12);
            if ( AllMonitorDevicesFromSessionView < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1356;
            }
            else
            {
              v13 = v40 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v38;
              *((_BYTE *)UserBuffer + 4) = v13;
            }
          }
          goto LABEL_71;
        }
      }
LABEL_13:
      AllMonitorDevicesFromSessionView = -1073741789;
      goto LABEL_71;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_13;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2,
                                CurrentStackLocation,
                                Length);
    if ( Parameters->NamedPipeType == 1 )
    {
      v15 = *(_DWORD *)(v4 + 192);
      if ( v15 != -1 && v15 != CurrentProcessSessionId )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 923;
LABEL_29:
        Parameters->ReadMode = 0;
        goto LABEL_30;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2696)) < 0 )
        goto LABEL_29;
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2696));
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 960;
        goto LABEL_29;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->ReadMode = 1;
LABEL_30:
    AllMonitorDevicesFromSessionView = 0;
    goto LABEL_71;
  }
  v41 = 0;
  LOBYTE(v40) = 0;
  v16 = 0LL;
  AllMonitorDevicesFromSessionView = DxgkAcquireSessionModeChangeLock(0LL);
  if ( AllMonitorDevicesFromSessionView < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 990;
    goto LABEL_71;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2696),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1009;
LABEL_40:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_71;
  }
  v17 = v40;
  v18 = ((_BYTE)v40 != D3DDDI_VSSLO_UNINITIALIZED ? v41 : 0) + *(_DWORD *)(v10 + 3800);
  if ( !v18 )
    goto LABEL_67;
  v34 = D3DKMDT_VOT_HD15;
  LOBYTE(v41) = 0;
  Size = (unsigned int)(20 * (v18 + 1));
  Pool2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)ExAllocatePool2(256LL, Size, 1953656900LL);
  v37[0] = Pool2;
  v16 = Pool2;
  if ( !Pool2 )
  {
    AllMonitorDevicesFromSessionView = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1069;
    goto LABEL_40;
  }
  memset(Pool2, 0, Size);
  if ( v17 )
  {
    v32 = v18;
    AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                         (struct _LUID *)(v10 + 2696),
                                         *(_DWORD *)(v4 + 156),
                                         (__int64)v16);
    if ( AllMonitorDevicesFromSessionView < 0 )
    {
LABEL_46:
      ExFreePoolWithTag(v16, 0);
      goto LABEL_40;
    }
    v20 = v32;
  }
  else
  {
    v20 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3440;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3440), 1u);
  AllMonitorDevicesFromSessionView = DpiAcquireCoreSyncAccessSafe(v38, 0LL);
  if ( AllMonitorDevicesFromSessionView < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
  v21 = *(__int64 **)(v10 + 3784);
  v22 = (char *)v16 + 20 * v20;
  if ( !*(_DWORD *)(v10 + 3800) )
    goto LABEL_66;
  v23 = v40;
  v24 = 0;
  while ( *v21 != *(_QWORD *)(v10 + 3784) )
  {
    if ( *((_DWORD *)v21 + 124) != 1 || *((_BYTE *)v21 + 510) != 1 )
      goto LABEL_64;
    v33 = *((_DWORD *)v21 + 126);
    DmmGetVideoOutputTechnology(*(void *const *)(v10 + 4032), v33, &v34, 0LL);
    v22[16] = IsInternalVideoOutput(v34);
    v25 = *(_DWORD *)(v4 + 156);
    v26 = *(void **)(v10 + 4032);
    LOBYTE(v41) = 0;
    DmmIsPresentPathInClientVidPnTopology(v26, v25, v33, (unsigned __int8 *)&v41);
    if ( !(_BYTE)v41 )
    {
      if ( !*((_BYTE *)v21 + 944) )
        goto LABEL_64;
      v27 = *(_DWORD *)(v4 + 156);
      v28 = *(void **)(v10 + 4032);
      LOBYTE(v40) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v28, v27, v33, (unsigned __int8 *)&v40) < 0 || !(_BYTE)v40 )
        goto LABEL_64;
      v29 = 0;
      goto LABEL_63;
    }
    if ( v23 )
    {
      v29 = 1;
LABEL_63:
      *(_DWORD *)v22 = v29 | 0x20000000;
      *((_DWORD *)v22 + 1) = v33;
      *((_QWORD *)v22 + 1) = *(_QWORD *)(v10 + 2696);
      v22 += 20;
    }
LABEL_64:
    v21 = (__int64 *)*v21;
    if ( (unsigned int)++v24 >= *(_DWORD *)(v10 + 3800) )
      break;
  }
  UserBuffer = v36;
  v16 = v37[0];
LABEL_66:
  DpiReleaseCoreSyncAccessSafe(v38, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_67:
  DxgkReleaseSessionModeChangeLock();
  AllMonitorDevicesFromSessionView = 0;
  *(_QWORD *)UserBuffer = v16;
  v5 = 8LL;
LABEL_71:
  v30 = Irp;
  Irp->IoStatus.Status = AllMonitorDevicesFromSessionView;
  v30->IoStatus.Information = v5;
  IofCompleteRequest(v30, 1);
  return (unsigned int)AllMonitorDevicesFromSessionView;
}
