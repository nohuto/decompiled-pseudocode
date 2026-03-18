/*
 * XREFs of PipClearDevNodeProblem @ 0x140914C5C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14079FD20 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x1407A4630 (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A50B4 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407ACF70 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407B87D4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpProcessAssignResourcesWorker @ 0x14090B644 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PiRestartRemovalRelations @ 0x140B39AAC (PiRestartRemovalRelations.c)
 *     PiProcessClearDeviceProblem @ 0x140B419C4 (PiProcessClearDeviceProblem.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405DA5D8 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1407B4FC0 (PiAuditDeviceEnableDisableAction.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x140914E48 (PnpTraceClearDevNodeProblem.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 404);
  v4 = *(_DWORD *)(a1 + 408);
  P = 0LL;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation(&P, a2);
    PipClearDevNodeFlags(a1, 0x2000);
    v7 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 404) = 0LL;
    if ( v7 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v7, 12);
      v9 = (__int64 *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 408) != v4 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *v9, 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v4);
      if ( v2 == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22, *(unsigned int *)(a1 + 404));
      PnpSetObjectProperty(PiPnpRtlCtx, *v9, 1, 0, 0LL, (__int64)DEVPKEY_Device_ProblemStatusOverride, 0, 0LL, 0, 0);
    }
    else
    {
      v9 = (__int64 *)(a1 + 48);
    }
    v10 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v10 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v10 + 792) = 2;
    *(_DWORD *)(a1 + 8 * v10 + 796) = v2;
    *(_DWORD *)(a1 + 8 * v10 + 800) = v4;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EF3DCB & 0x20) != 0 )
    {
      LODWORD(v14) = v4;
      LODWORD(v13) = v2;
      LODWORD(v12) = 0;
      LODWORD(v11) = 0;
      McTemplateK0pzzqdqd_EtwWriteTransfer(v10, v7, v6, a1, *v9, *(_QWORD *)(a1 + 64), v11, v12, v13, v14);
    }
    if ( P )
      PiPnpRtlEndOperation(P);
  }
}
