/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1402FD820
 * Callers:
 *     IopCheckVpbMounted @ 0x1404429F8 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CCFB4 (IopDecrementDeviceObjectHandleCount.c)
 *     IopLoadFileSystemDriver @ 0x140797BC4 (IopLoadFileSystemDriver.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned __int8 v6; // bp
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v9; // rcx
  volatile __int64 *v10; // rdx
  __int64 v11; // rax
  volatile signed __int64 **v13; // rbx
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  char v17; // bl
  __int64 v18; // rsi
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v24; // eax
  __int64 v25; // rdx
  unsigned __int32 v26; // ett
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v33; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v34[33]; // [rsp+38h] [rbp-140h] BYREF
  __int64 retaddr; // [rsp+178h] [rbp+0h]

  v4 = a2;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v9 = (__int64)ArbitraryUserPointer + 160;
  v10 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = _InterlockedExchange64(v10, v9);
    if ( v11 )
      KxWaitForLockOwnerShip(v9, v11, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v9, v10);
  }
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v31 )
    {
      IoAddTriageDumpDataBlock(v31, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (v4 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  }
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr, a3, a4);
    goto LABEL_17;
  }
  _m_prefetchw(v13);
  v14 = *v13;
  if ( !*v13 )
  {
    if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
      goto LABEL_17;
    v14 = (volatile signed __int64 *)KxWaitForLockChainValid(v13);
  }
  *v13 = 0LL;
  v15 = (__int64)v13[1];
  if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64(v14 + 1, v15)) & 4) != 0 )
  {
    _InterlockedOr(v32, 0);
    v17 = KeDisableInterrupts(v15, v10, v14 + 1);
    v18 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v16 >> 5) & 0x7F], 0LL);
    memset_0(v34, 0, 0x100uLL);
    v20 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v20 )
    {
LABEL_16:
      if ( v17 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v24 = *SchedulerAssist;
          do
          {
            v25 = v24;
            LODWORD(v25) = v24 & 0xFFDFFFFF;
            v26 = v24;
            v24 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v24 & 0xFFDFFFFF, v24);
          }
          while ( v26 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v25, SchedulerAssist, v19);
        }
        _enable();
      }
      goto LABEL_17;
    }
    v33 = 2097153LL;
    memset_0(v34, 0, 0x100uLL);
    while ( 1 )
    {
      v27 = *(_QWORD *)(v20 + 8);
      v28 = *(_QWORD *)(v20 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v20 + 24), 1) )
      {
        v29 = *(_QWORD *)(v27 + 200);
        v30 = *(unsigned __int8 *)(v27 + 208);
        if ( (unsigned __int16)v33 > (unsigned __int16)v30 )
          goto LABEL_45;
        if ( WORD1(v33) > (unsigned __int16)v30 )
          break;
      }
LABEL_46:
      v20 = v28;
      if ( !v28 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors((__int64)&v33);
        else
          HalRequestIpi(0, (__int64)&v33);
        goto LABEL_16;
      }
    }
    LOWORD(v33) = v30 + 1;
LABEL_45:
    v34[v30] |= v29;
    goto LABEL_46;
  }
LABEL_17:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
