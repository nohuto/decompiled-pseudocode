/*
 * XREFs of PpHotSwapGetDevnodeRemovalPolicy @ 0x140A8F0D4
 * Callers:
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PiHotSwapGetDetachableNode @ 0x140B2510C (PiHotSwapGetDetachableNode.c)
 */

void __fastcall PpHotSwapGetDevnodeRemovalPolicy(__int64 a1, char a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  char v8; // bl
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 1;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v8 = -a2;
  if ( *(_BYTE *)(a1 - (v8 != 0) + 467) )
  {
    v6 = *(unsigned __int8 *)(a1 - (v8 != 0) + 467);
    if ( v6 != 1 && *(_BYTE *)(a1 - (v8 != 0) + 467) != 2 && *(_BYTE *)(a1 - (v8 != 0) + 467) != 3 )
    {
      if ( *(_BYTE *)(a1 - (v8 != 0) + 467) == 4 || (v6 = 3, *(_BYTE *)(a1 - (v8 != 0) + 467) != 5) )
        v6 = 2;
    }
  }
  else
  {
    PiHotSwapGetDetachableNode(a1, &v9);
    if ( v9 )
      v6 = (~*(_BYTE *)(v9 + 560) & 8 | 0x10u) >> 3;
  }
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  *a3 = v6;
}
