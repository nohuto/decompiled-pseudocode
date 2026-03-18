/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1403EAEB0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1404FEBC8 (PnpMarkDeviceForRemove.c)
 *     IoRegisterFileSystem @ 0x140796630 (IoRegisterFileSystem.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile __int64 *v9; // rdx
  __int64 v10; // rax
  volatile signed __int64 **v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v10 = _InterlockedExchange64(v9, v8);
    if ( v10 )
      KxWaitForLockOwnerShip(v8, v10, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  v4 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    goto LABEL_18;
  }
  _m_prefetchw(v11);
  v12 = (__int64)*v11;
  if ( *v11 )
  {
LABEL_16:
    *v11 = 0LL;
    v13 = (__int64)v11[1];
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), v13)) & 4) != 0 )
    {
      _InterlockedOr(v15, 0);
      KiWakeAddressAll();
    }
    goto LABEL_18;
  }
  if ( v11 != (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
  {
    v12 = KxWaitForLockChainValid((__int64 *)v11, (__int64)v9, a3);
    goto LABEL_16;
  }
LABEL_18:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  if ( v4 <= 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v14 )
    {
      IoAddTriageDumpDataBlock(v14, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v4;
}
