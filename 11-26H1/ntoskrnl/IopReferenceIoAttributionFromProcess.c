/*
 * XREFs of IopReferenceIoAttributionFromProcess @ 0x1404613A0
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall IopReferenceIoAttributionFromProcess(__int64 a1, char a2, _QWORD *a3)
{
  __int64 result; // rax
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 1752) )
    return 3221226021LL;
  v7 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v8 = *(_QWORD *)(a1 + 1752);
  v9 = v7;
  if ( v8 )
  {
    if ( a2 )
    {
      *a3 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 32)) <= 1 )
        __fastfail(0xEu);
      *a3 = v8;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&IopDiskIoAttributionLock, 0xBFFFFFFF);
    _InterlockedDecrement(&IopDiskIoAttributionLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&IopDiskIoAttributionLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
  result = 0LL;
  if ( !v8 )
    return 3221226021LL;
  return result;
}
