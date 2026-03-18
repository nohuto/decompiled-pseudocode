/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1402B2B50
 * Callers:
 *     IopCheckVpbMounted @ 0x14044A8C8 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1405CA6E4 (IopDecrementDeviceObjectHandleCount.c)
 *     IopLoadFileSystemDriver @ 0x140795094 (IopLoadFileSystemDriver.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int8 v5; // bp
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile __int64 *v9; // rdx
  __int64 v10; // rax
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  char v16; // bl
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v23; // eax
  __int64 v24; // rdx
  unsigned __int32 v25; // ett
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v32; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v33[33]; // [rsp+38h] [rbp-140h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v3 = a2;
  v5 = 0;
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
  if ( --*(_DWORD *)(BugCheckParameter2 + 4) < 0 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v30 )
    {
      IoAddTriageDumpDataBlock(v30, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 4)
    && (v3 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
  {
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  }
  v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
    goto LABEL_17;
  }
  _m_prefetchw(v12);
  v13 = (__int64)*v12;
  if ( !*v12 )
  {
    if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
      goto LABEL_17;
    v13 = KxWaitForLockChainValid(v12);
  }
  *v12 = 0LL;
  v14 = (__int64)v12[1];
  if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v13 + 8), v14)) & 4) != 0 )
  {
    _InterlockedOr(v31, 0);
    v16 = KeDisableInterrupts(v14, v9, v13 + 8);
    v17 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v15 >> 5) & 0x7F], 0LL);
    memset_0(v33, 0, 0x100uLL);
    v19 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v19 )
    {
LABEL_16:
      if ( v16 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v23 = *SchedulerAssist;
          do
          {
            v24 = v23;
            LODWORD(v24) = v23 & 0xFFDFFFFF;
            v25 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v23 & 0xFFDFFFFF, v23);
          }
          while ( v25 != v23 );
          if ( (v23 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v24, SchedulerAssist, v18);
        }
        _enable();
      }
      goto LABEL_17;
    }
    v32 = 2097153LL;
    memset_0(v33, 0, 0x100uLL);
    while ( 1 )
    {
      v26 = *(_QWORD *)(v19 + 8);
      v27 = *(_QWORD *)(v19 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v19 + 24), 1) )
      {
        v28 = *(_QWORD *)(v26 + 200);
        v29 = *(unsigned __int8 *)(v26 + 208);
        if ( (unsigned __int16)v32 > (unsigned __int16)v29 )
          goto LABEL_45;
        if ( WORD1(v32) > (unsigned __int16)v29 )
          break;
      }
LABEL_46:
      v19 = v27;
      if ( !v27 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v32);
        else
          HalRequestIpi(0LL, &v32);
        goto LABEL_16;
      }
    }
    LOWORD(v32) = v29 + 1;
LABEL_45:
    v33[v29] |= v28;
    goto LABEL_46;
  }
LABEL_17:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
