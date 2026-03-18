/*
 * XREFs of AcpiHandleInternalNotify @ 0x140065F50
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1400530A0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x14001E874 (AMLIIterateParentNext.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_qs @ 0x140041F5C (WPP_RECORDER_SF_qs.c)
 */

void __fastcall AcpiHandleInternalNotify(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // si
  __int64 v4; // rax

  v1 = a1;
  v2 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0xAu,
      (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
      a1,
      (const char *)&dword_14008E680);
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  AMLIReferenceHandleEx(v1);
  if ( v1 )
  {
    while ( !v2 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v4 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v4 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = AMLIIterateParentNext(v1);
      if ( !v1 )
        goto LABEL_11;
    }
    AMLIDereferenceHandleEx(v1);
  }
LABEL_11:
  _InterlockedOr64((volatile signed __int64 *)(v2 + 8), 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
}
