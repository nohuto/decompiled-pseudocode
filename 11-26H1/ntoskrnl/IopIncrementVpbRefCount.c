/*
 * XREFs of IopIncrementVpbRefCount @ 0x14044AA10
 * Callers:
 *     IopMountInitializeVpb @ 0x14044A814 (IopMountInitializeVpb.c)
 *     IopCheckVpbMounted @ 0x14044A8C8 (IopCheckVpbMounted.c)
 *     IopReferenceVerifyVpb @ 0x1404FE4D0 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int v3; // ebx
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 )
  {
    v5 = KeAcquireQueuedSpinLock(9uLL);
    v3 = ++*(_DWORD *)(BugCheckParameter2 + 28);
    KeReleaseQueuedSpinLock(9uLL, v5);
  }
  else
  {
    v3 = *(_DWORD *)(BugCheckParameter2 + 28) + 1;
    *(_DWORD *)(BugCheckParameter2 + 28) = v3;
  }
  if ( v3 <= 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)0x150);
      v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v3;
}
