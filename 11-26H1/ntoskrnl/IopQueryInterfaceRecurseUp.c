/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x1409DBF3C
 * Callers:
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 */

__int64 __fastcall IopQueryInterfaceRecurseUp(
        __int64 a1,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v12; // rsi
  __int64 v13; // rbx
  unsigned int Interface; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x49706E50u);
  v12 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v13 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v13 = 0LL;
  while ( (PVOID)v13 != IopRootDeviceNode )
  {
    if ( !v13 || *(_DWORD *)(v13 + 300) == 790 )
    {
      Interface = -1073741130;
      goto LABEL_11;
    }
    Interface = PnpQueryInterface(*(_QWORD **)(v13 + 32), a2, a4, a3, a5, a6);
    if ( Interface != -1073741637 )
      goto LABEL_11;
    v13 = *(_QWORD *)(v13 + 16);
  }
  Interface = -1073741637;
LABEL_11:
  ObfDereferenceObjectWithTag(v12, 0x49706E50u);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return Interface;
}
