/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1402F84A0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1404F83B0 (PnpMarkDeviceForRemove.c)
 *     IoRegisterFileSystem @ 0x140799160 (IoRegisterFileSystem.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile __int64 *v9; // rdx
  volatile signed __int64 **v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(_BYTE)a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 4) + 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = v4;
    goto LABEL_3;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v8 = (__int64)ArbitraryUserPointer + 160;
  v9 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v9, v8) )
      KxWaitForLockOwnerShip(v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  v4 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
    goto LABEL_18;
  }
  _m_prefetchw(v10);
  v11 = (__int64)*v10;
  if ( *v10 )
  {
LABEL_16:
    *v10 = 0LL;
    v12 = (__int64)v10[1];
    if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v12)) & 4) != 0 )
    {
      _InterlockedOr(v14, 0);
      KiWakeAddressAll(v11 + 8, v12, a3);
    }
    goto LABEL_18;
  }
  if ( v10 != (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
  {
    v11 = KxWaitForLockChainValid(v10);
    goto LABEL_16;
  }
LABEL_18:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  if ( v4 <= 0 )
  {
    v13 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v13 )
    {
      IoAddTriageDumpDataBlock(v13, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v4;
}
