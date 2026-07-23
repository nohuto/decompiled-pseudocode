/*
 * XREFs of PipClearDevNodeProblem @ 0x14096F6C8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x1407A2860 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A7BF4 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407AFFD0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407BB834 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x14096EEE0 (PiProcessClearDeviceProblem.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x1409AD768 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiRestartRemovalRelations @ 0x140B3BCBC (PiRestartRemovalRelations.c)
 * Callees:
 *     McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405DCDD8 (McTemplateK0pzzqdqd_EtwWriteTransfer.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1407B8020 (PiAuditDeviceEnableDisableAction.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpTraceClearDevNodeProblem @ 0x14096F8B4 (PnpTraceClearDevNodeProblem.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  P = 0LL;
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v1 )
  {
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags(a1, 0x2000LL);
    v6 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 404) = 0LL;
    if ( v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v6, 12LL);
      v8 = (_QWORD *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *v8, 13LL);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v1, v3);
      if ( v1 == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22, *(unsigned int *)(a1 + 404));
      PnpSetObjectProperty(PiPnpRtlCtx, *v8, 1, 0LL, (__int64)DEVPKEY_Device_ProblemStatusOverride, 0, 0LL, 0, 0);
    }
    else
    {
      v8 = (_QWORD *)(a1 + 48);
    }
    v9 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v9 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v9 + 792) = 2;
    *(_DWORD *)(a1 + 8 * v9 + 796) = v1;
    *(_DWORD *)(a1 + 8 * v9 + 800) = v3;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( (byte_140EF412B & 0x20) != 0 )
    {
      LODWORD(v13) = v3;
      LODWORD(v12) = v1;
      LODWORD(v11) = 0;
      LODWORD(v10) = 0;
      McTemplateK0pzzqdqd_EtwWriteTransfer(v9, v6, v5, a1, *v8, *(_QWORD *)(a1 + 64), v10, v11, v12, v13);
    }
    if ( P )
      PiPnpRtlEndOperation((char *)P);
  }
}
