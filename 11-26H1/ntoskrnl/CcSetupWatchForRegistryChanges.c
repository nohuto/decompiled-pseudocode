/*
 * XREFs of CcSetupWatchForRegistryChanges @ 0x1405B4154
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CcOpenRegistryPath @ 0x1405B40DC (CcOpenRegistryPath.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

void CcSetupWatchForRegistryChanges()
{
  char *PoolWithTag; // rax
  char *v1; // rdi
  int v2; // ebx
  UNICODE_STRING *v3; // rsi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  __int128 v6; // [rsp+A8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x50uLL, 0x52576343u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
    goto LABEL_11;
  }
  v3 = (UNICODE_STRING *)(PoolWithTag + 56);
  RtlInitUnicodeString(
    (PUNICODE_STRING)(PoolWithTag + 56),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management");
  *((_QWORD *)v1 + 5) = CcUpdateDynamicRegistrySettings;
  *((_QWORD *)v1 + 2) = CcRegistryChangeCallback;
  *((_QWORD *)v1 + 3) = v1;
  *(_QWORD *)v1 = 0LL;
  v4 = CcOpenRegistryPath(v3, (HANDLE *)v1 + 4);
  v2 = v4;
  if ( v4 < 0 )
  {
    DbgPrintEx(
      0x7Fu,
      0,
      "CcSetupWatchForRegistryChanges: Failed to open Key, status=0x%08x \"%wZ\"\n",
      (unsigned int)v4,
      v3);
    goto LABEL_11;
  }
  v5 = ZwNotifyChangeKey(*((HANDLE *)v1 + 4), 0LL, (PIO_APC_ROUTINE)v1, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
  v2 = v5;
  if ( v5 == 259 )
  {
    DbgPrintEx(0x7Fu, 2u, "CcSetupWatchForRegistryChanges: Queued for \"%wZ\"\n", v3);
LABEL_10:
    CcRegistryWatchInitComplete = 1;
    goto LABEL_11;
  }
  if ( v5 >= 0 )
    goto LABEL_10;
  DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Failed, status=0x%08x for \"%wZ\"\n", (unsigned int)v5, v3);
LABEL_11:
  if ( v1 )
  {
    if ( v2 < 0 )
    {
      v6 = *(_OWORD *)(v1 + 56);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcSetupWatchForRegistryChanges: Queuing worker thread, status=0x%08x for \"%wZ\"\n",
        (unsigned int)v2,
        &v6);
      v1[72] = 1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v1, DelayedWorkQueue);
    }
  }
  else
  {
    DbgPrintEx(0x7Fu, 0, "CcSetupWatchForRegistryChanges: Error-unexpected memory allocation!\n");
  }
}
