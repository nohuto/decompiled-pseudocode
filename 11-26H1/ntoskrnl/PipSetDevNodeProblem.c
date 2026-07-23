/*
 * XREFs of PipSetDevNodeProblem @ 0x1409714C0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IopQueueDeviceResetEvent @ 0x1407A5514 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407AFFD0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407BB834 (PiProcessQueryRemoveNoFdo.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PipProcessEnumeratedChildDevice @ 0x1409AFDC0 (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x1409B1418 (PnpQueryID.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiProcessSetDeviceProblem @ 0x140B336EC (PiProcessSetDeviceProblem.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405DCDD8 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PnpLogDeviceRequiresReboot @ 0x1407A728C (PnpLogDeviceRequiresReboot.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1407B8020 (PiAuditDeviceEnableDisableAction.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpTraceSetDevNodeProblem @ 0x14097175C (PnpTraceSetDevNodeProblem.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v3; // edi
  int v5; // r14d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
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
  P = 0LL;
  v18 = 0;
  v21 = 0;
  v20 = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a3 || v3 != a2 )
  {
    PiPnpRtlBeginOperation(&P);
    PipSetDevNodeFlags(a1, 0x2000LL);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v9,
                  1,
                  0LL,
                  0LL,
                  (__int64)DEVPKEY_Device_ProblemStatusOverride,
                  &v20,
                  (__int64)&v18,
                  4u,
                  (__int64)&v21,
                  0) >= 0
        && v20 == 24
        && v21 == 4
        && v18 )
      {
        *(_DWORD *)(a1 + 408) = v18;
      }
      v11 = (_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 404) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *v11, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *v11, 13LL);
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
    *(_DWORD *)(a1 + 8 * v13 + 796) = a2;
    *(_DWORD *)(a1 + 8 * v13 + 800) = v12;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EF412B & 0x20) != 0 )
    {
      LODWORD(v17) = v5;
      LODWORD(v16) = v3;
      LODWORD(v15) = v12;
      LODWORD(v14) = a2;
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
      PiPnpRtlEndOperation((char *)P);
  }
}
