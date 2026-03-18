/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x140443F48
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140243508 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ @ 0x14006C9C4 (-IsSwitchInProgress@DISPLAY_MUX_MGR@@QEAAEXZ.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x14006E11C (Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1403EEEE4 (-MonitorCancelSkippedDepartures@@YAJPEAXI@Z.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x140422658 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640 (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x140444378 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN a7,
        char a8,
        struct _DXGK_CONNECTION_USB4_INFO *a9,
        unsigned __int8 *a10,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a11)
{
  unsigned __int8 *v11; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // r12
  __int64 v14; // rdi
  int v16; // eax
  __int64 v17; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *ChildDescriptor; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  int PhysicalMonitor; // ebx
  char v22; // r13
  __int64 v23; // rdx
  char v24; // r12
  char *v25; // rcx
  unsigned int v26; // r14d
  char v27; // bl
  int v28; // eax
  __int64 v32; // [rsp+78h] [rbp-88h]
  _DWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C4h] [rbp-3Ch]
  unsigned int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  _DWORD OutputBuffer[60]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = a10;
  v13 = a11;
  v14 = *(_QWORD *)(a1 + 64);
  if ( !a8 )
  {
    v35 = 0LL;
    v16 = *(_DWORD *)(v14 + 24) & 0xFFFF00;
    v41 = a2;
    v17 = *(_QWORD *)(v14 + 5888);
    v40 = v16 | 1;
    v43 = *(_QWORD *)(v14 + 2696);
    v38 = 0LL;
    v34[0] = 30;
    v34[1] = 72;
    v37 = 0LL;
    v36 = 0LL;
    v39 = 39;
    v42 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, v17);
  }
  ChildDescriptor = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DpiFdoGetChildDescriptor(v14, a2);
  v20 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    PhysicalMonitor = -1073741810;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4664;
    return (unsigned int)PhysicalMonitor;
  }
  if ( *((_QWORD *)ChildDescriptor + 6) )
  {
    v22 = 1;
    if ( IsInternalVideoOutput(ChildDescriptor[1]) )
    {
      v32 = *(_QWORD *)(v23 + 64);
      if ( *(_BYTE *)(v20 + 66) == a4 )
      {
        v26 = a2;
      }
      else
      {
        Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck();
        memset(OutputBuffer, 0, 0xE8uLL);
        if ( ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u) < 0 )
        {
          v24 = 0;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4728;
        }
        else if ( DISPLAY_MUX_MGR::IsSwitchInProgress(qword_140169448) )
        {
          v24 = 0;
        }
        else
        {
          v24 = OutputBuffer[7] != 0;
        }
        v25 = *(char **)(v14 + 4032);
        if ( a4 )
        {
          v13 = a11;
          PhysicalMonitor = MonitorCreatePhysicalMonitor(
                              v25,
                              a2,
                              *(struct _DEVICE_OBJECT **)(v20 + 48),
                              1u,
                              a4,
                              0LL,
                              a10,
                              a11);
          if ( PhysicalMonitor < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4766;
            return (unsigned int)PhysicalMonitor;
          }
          v26 = a2;
          if ( *(_BYTE *)(v32 + 944) )
          {
            MonitorNotifyDeviceNodeReady(*(PERESOURCE **)(v14 + 4032), a2, *(struct _DEVICE_OBJECT **)(v20 + 48));
            if ( (int)DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v20 + 48), 1) < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 4796;
            }
          }
        }
        else
        {
          PhysicalMonitor = MonitorRemovePhysicalMonitor(v25, a2, v24, a10, a11);
          if ( PhysicalMonitor < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4818;
            return (unsigned int)PhysicalMonitor;
          }
          if ( !v24 && *(_BYTE *)(v32 + 944) && (int)DpiPdoSetMonitorDriverInterfaceState(*(PVOID *)(v20 + 48), 0) < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 4835;
          }
          v13 = a11;
          v26 = a2;
        }
      }
      v27 = 1;
      *(_BYTE *)(v20 + 66) = a4;
      goto LABEL_31;
    }
  }
  else
  {
    v22 = 0;
  }
  *(_BYTE *)(v20 + 66) = a4;
  v27 = a4;
  if ( a4 )
  {
    v26 = a2;
LABEL_31:
    MonitorCancelSkippedDepartures(*(PERESOURCE **)(v14 + 4032), v26);
    v11 = a10;
  }
  if ( v22 != v27 || v27 && a6 )
  {
    *(_BYTE *)(v20 + 65) = v27;
    if ( v27 )
    {
      v28 = DpiPdoAddPdo(a1, v20, a3, a5, a6, a7, a9, v11, v13);
    }
    else
    {
      LOBYTE(v19) = 1;
      v28 = DpiPdoRemovePdo(a1, v20, v19, v11, v13);
    }
    PhysicalMonitor = v28;
    if ( v28 >= 0 && v28 != 0x40000000 && v28 != 128 )
    {
      _m_prefetchw((const void *)(v14 + 3780));
      if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 3780), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v14 + 152), BusRelations);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)PhysicalMonitor;
}
