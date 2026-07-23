/*
 * XREFs of IoSetDeferredLiveDumpFileHandle @ 0x1405CEA0C
 * Callers:
 *     DbgkpWerStartDeferredLiveDump @ 0x14078EFA8 (DbgkpWerStartDeferredLiveDump.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1405D5548 (IopLiveDumpValidateDumpFileHandle.c)
 */

__int64 __fastcall IoSetDeferredLiveDumpFileHandle(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v5 == 1 )
  {
    if ( !a1 || (*(_DWORD *)(a1 + 40) & 8) == 0 || *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 80) & 1) != 0 )
    {
      v6 = -1073741811;
    }
    else
    {
      v6 = IopLiveDumpValidateDumpFileHandle(a2);
      if ( v6 >= 0 )
        *(_QWORD *)(a1 + 64) = a2;
    }
    goto LABEL_10;
  }
  v6 = -1073741267;
  if ( v5 )
LABEL_10:
    ExReleaseResourceLite(&IopLiveDumpLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
