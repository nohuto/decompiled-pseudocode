/*
 * XREFs of OSNotifyDeviceEnum @ 0x140041DFC
 * Callers:
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 * Callees:
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x140041F5C (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r9
  KIRQL v4; // si
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(); // rdx

  v1 = a1;
  v2 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      8,
      24,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1,
      (__int64)&dword_14008E680);
  }
  if ( ACPIDockIsDockDevice() )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( !v7 )
      return 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    v9 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_17:
    ACPIBuildSynchronizationRequestInternal(v7, (__int64)v9, v8, v3, 1);
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  AMLIReferenceHandleEx(v1);
  if ( v1 )
  {
    while ( !v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v5 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v5 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = AMLIIterateParentNext(v1);
      if ( !v1 )
        goto LABEL_12;
    }
    AMLIDereferenceHandleEx(v1);
  }
LABEL_12:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( v2 )
  {
    v8 = v2;
    v9 = ACPIBuildIssueNotifyInvalidateRelations;
    v7 = v2;
    goto LABEL_17;
  }
  return 0LL;
}
