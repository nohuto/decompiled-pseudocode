/*
 * XREFs of RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0
 * Callers:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7374 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1401154CC (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140118F68 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401ED8B4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401F0720 (RIMDeviceNotifyUsingAsyncInputWork.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMAllocateAsyncInputWorkItem(
        PVOID Object,
        _QWORD *a2,
        int a3,
        _OWORD *a4,
        _OWORD *a5,
        PCUNICODE_STRING SourceString,
        int a7,
        int a8)
{
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rcx
  char *v16; // rcx
  unsigned int v17; // eax

  v12 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70707352u);
  if ( v12 )
  {
    if ( SourceString )
    {
      v13 = Win32AllocPoolZInitImpl(256LL, SourceString->MaximumLength, 0x70707352u);
      *(_QWORD *)(v12 + 48) = v13;
      if ( !v13 )
      {
LABEL_9:
        GreDeleteFastMutex((char *)v12);
        return 0LL;
      }
      *(_WORD *)(v12 + 42) = SourceString->MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString);
    }
    if ( a8 == 3 )
    {
      v14 = Win32AllocPoolZInitImpl(256LL, a2[40], 0x75625252u);
      *(_QWORD *)(v12 + 104) = v14;
      v15 = (void *)v14;
      if ( !v14 )
      {
        v16 = *(char **)(v12 + 48);
        if ( v16 )
        {
          GreDeleteFastMutex(v16);
          *(_QWORD *)(v12 + 48) = 0LL;
        }
        goto LABEL_9;
      }
      v17 = *((_DWORD *)a2 + 80);
      *(_DWORD *)(v12 + 100) = v17;
      memmove(v15, *(const void **)(a2[64] + 24LL), v17);
    }
    *(_QWORD *)(v12 + 8) = v12;
    *(_QWORD *)v12 = v12;
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 77);
    *(_QWORD *)(v12 + 24) = Object;
    if ( a2 )
    {
      if ( ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 92);
      *(_QWORD *)(v12 + 56) = a2;
    }
    *(_DWORD *)(v12 + 96) = a7;
    *(_DWORD *)(v12 + 32) = a3;
    if ( a4 )
      *(_OWORD *)(v12 + 64) = *a4;
    if ( a5 )
      *(_OWORD *)(v12 + 80) = *a5;
    *(_DWORD *)(v12 + 16) = a8;
    *(_DWORD *)(v12 + 112) = 0;
  }
  return v12;
}
