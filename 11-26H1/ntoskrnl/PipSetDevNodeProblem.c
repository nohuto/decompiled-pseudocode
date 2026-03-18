/*
 * XREFs of PipSetDevNodeProblem @ 0x140916A54
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IopQueueDeviceResetEvent @ 0x1407A29D4 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x1407A4630 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407ACF70 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407B87D4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpProcessAssignResources @ 0x14090B6F8 (PnpProcessAssignResources.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PipProcessEnumeratedChildDevice @ 0x14090DC90 (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x14090F2E8 (PnpQueryID.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x140AA88B8 (PnpQueryDeviceID.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PiProcessSetDeviceProblem @ 0x140B314EC (PiProcessSetDeviceProblem.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405DA5D8 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PnpLogDeviceRequiresReboot @ 0x1407A474C (PnpLogDeviceRequiresReboot.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1407B4FC0 (PiAuditDeviceEnableDisableAction.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PnpTraceSetDevNodeProblem @ 0x140916CF0 (PnpTraceSetDevNodeProblem.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  int v5; // r14d
  int v6; // r15d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h] BYREF
  int v20; // [rsp+A0h] [rbp+30h] BYREF
  int v21; // [rsp+B8h] [rbp+48h] BYREF

  v3 = *(_DWORD *)(a1 + 404);
  v5 = *(_DWORD *)(a1 + 408);
  v6 = a2;
  P = 0LL;
  v18 = 0;
  v21 = 0;
  v20 = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a3 || v3 != (_DWORD)a2 )
  {
    PiPnpRtlBeginOperation(&P, a2);
    PipSetDevNodeFlags(a1, 0x2000u);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = v6;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  v9,
                  1,
                  0,
                  0LL,
                  (__int64)DEVPKEY_Device_ProblemStatusOverride,
                  (__int64)&v20,
                  (__int64)&v18,
                  4,
                  (__int64)&v21,
                  0) >= 0
        && v20 == 24
        && v21 == 4
        && v18 )
      {
        *(_DWORD *)(a1 + 408) = v18;
      }
      v11 = (__int64 *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 404) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *v11, 12);
      if ( *(_DWORD *)(a1 + 408) != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *v11, 13);
      PnpTraceSetDevNodeProblem(
        a1 + 40,
        a1 + 56,
        *(_DWORD *)(a1 + 300),
        *(_DWORD *)(a1 + 404),
        *(_DWORD *)(a1 + 408),
        v3,
        v5);
      if ( *(_DWORD *)(a1 + 404) == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
      {
        PiAuditDeviceEnableDisableAction(a1 + 40, v3, *(unsigned int *)(a1 + 404));
      }
      else if ( *(_DWORD *)(a1 + 404) == 14 )
      {
        PnpLogDeviceRequiresReboot(a1);
      }
    }
    v12 = *(unsigned int *)(a1 + 408);
    v13 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v13 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v13 + 792) = 1;
    *(_DWORD *)(a1 + 8 * v13 + 796) = v6;
    *(_DWORD *)(a1 + 8 * v13 + 800) = v12;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EF3DCB & 0x20) != 0 )
    {
      LODWORD(v17) = v5;
      LODWORD(v16) = v3;
      LODWORD(v15) = v12;
      LODWORD(v14) = v6;
      McTemplateK0pzzqdqd_EtwWriteTransfer(
        v13,
        v12,
        v8,
        a1,
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(a1 + 64),
        v14,
        v15,
        v16,
        v17);
    }
    if ( P )
      PiPnpRtlEndOperation(P);
  }
}
