/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x14003D258
 * Callers:
 *     XilEndpoint_ReleaseBuffer @ 0x140001B5C (XilEndpoint_ReleaseBuffer.c)
 *     XilCoreUsbDevice_FreeResources @ 0x140004860 (XilCoreUsbDevice_FreeResources.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     TR_WdfEvtCleanupCallback @ 0x140033690 (TR_WdfEvtCleanupCallback.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x140036CA0 (XilCommonBuffer_ReleaseBuffer.c)
 *     TR_CreateSecureObject @ 0x140038D24 (TR_CreateSecureObject.c)
 *     TR_Disable_Internal @ 0x14003D720 (TR_Disable_Internal.c)
 *     XilCommand_FreeResources @ 0x14003F8E8 (XilCommand_FreeResources.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140047A64 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_SetClientAddressesForOffload @ 0x14004BECC (TR_SetClientAddressesForOffload.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1400518F0 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x140051A50 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140057340 (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x140033410 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003D4C8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     CommonBuffer_ReleaseCommonBufferFromPhysicalAddress @ 0x1400402D0 (CommonBuffer_ReleaseCommonBufferFromPhysicalAddress.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx

  v2 = *(_DWORD *)(a2 + 80);
  switch ( v2 )
  {
    case 1:
      v4 = a1 + 88;
      *(_BYTE *)(a1 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
      XilCoreCommonBuffer_ReleaseBufferInternal(v4, a2);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), *(_BYTE *)(v4 + 25));
      return;
    case 2:
      goto LABEL_6;
    case 3:
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 104LL), *(_QWORD *)(a2 + 104));
LABEL_6:
      ExFreePoolWithTag((PVOID)a2, 0x49434858u);
      return;
    case 4:
      CommonBuffer_ReleaseCommonBufferFromPhysicalAddress((PVOID)a2);
      break;
  }
}
