/*
 * XREFs of RIMAllocateAsyncInputWorkItem @ 0x1400475D0
 * Callers:
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x14020BFB4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx
  unsigned int v18; // eax
  __int64 v20; // rax
  char *v21; // rcx

  v12 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70707352u);
  if ( !v12 )
    return v12;
  if ( SourceString )
  {
    v20 = Win32AllocPoolZInitImpl(256LL, SourceString->MaximumLength, 0x70707352u);
    *(_QWORD *)(v12 + 48) = v20;
    if ( !v20 )
      goto LABEL_19;
    *(_WORD *)(v12 + 42) = SourceString->MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString);
  }
  if ( a8 == 3 )
  {
    v13 = Win32AllocPoolZInitImpl(256LL, a2[40], 0x75625252u);
    *(_QWORD *)(v12 + 104) = v13;
    v17 = (void *)v13;
    if ( v13 )
    {
      v18 = *((_DWORD *)a2 + 80);
      *(_DWORD *)(v12 + 100) = v18;
      memmove(v17, *(const void **)(a2[64] + 24LL), v18);
      goto LABEL_6;
    }
    v21 = *(char **)(v12 + 48);
    if ( v21 )
    {
      GreDeleteFastMutex(v21, v14, v15, v16);
      *(_QWORD *)(v12 + 48) = 0LL;
    }
LABEL_19:
    GreDeleteFastMutex((char *)v12, v14, v15, v16);
    return 0LL;
  }
LABEL_6:
  *(_QWORD *)(v12 + 8) = v12;
  *(_QWORD *)v12 = v12;
  if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 77LL);
  *(_QWORD *)(v12 + 24) = Object;
  if ( a2 )
  {
    if ( ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
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
  return v12;
}
