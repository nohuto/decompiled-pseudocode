/*
 * XREFs of IopIncrementVpbRefCount @ 0x140442B40
 * Callers:
 *     IopMountInitializeVpb @ 0x140442944 (IopMountInitializeVpb.c)
 *     IopCheckVpbMounted @ 0x1404429F8 (IopCheckVpbMounted.c)
 *     IopReferenceVerifyVpb @ 0x1404F7A80 (IopReferenceVerifyVpb.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
