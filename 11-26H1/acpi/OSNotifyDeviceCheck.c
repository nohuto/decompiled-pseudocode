/*
 * XREFs of OSNotifyDeviceCheck @ 0x140041ADC
 * Callers:
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x140041F5C (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x140063D74 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  KIRQL v5; // si
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rbx
  __int64 i; // rax
  __int64 v10; // rdx
  int v11; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    v2 = dword_14008E680;
    LOBYTE(v2) = 4;
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      8,
      22,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1,
      (__int64)&dword_14008E680);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        21,
        23,
        (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids);
    }
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 )
    {
      if ( _bittest64((const signed __int64 *)(v6 + 8), 0x25u) )
      {
        v7 = *(_DWORD *)(v6 + 368);
        if ( v7 != 2 && v7 != 3 )
          *(_BYTE *)(v6 + 185) = 0;
      }
    }
    v8 = 0LL;
    for ( i = AMLIGetParent(a1); i; i = AMLIIterateParentNext(i) )
    {
      if ( v8 )
      {
        AMLIDereferenceHandleEx(i);
        break;
      }
      v10 = *(_QWORD *)(*(_QWORD *)i + 104LL);
      if ( v10 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)i + 104LL);
        if ( *(_DWORD *)(v10 + 16) != 1599293264 )
          v8 = 0LL;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v8 )
      ACPIBuildSynchronizationRequestInternal(v8, (unsigned int)ACPIBuildIssueNotifyInvalidateRelations, v8, v11, 1);
    return 0LL;
  }
}
