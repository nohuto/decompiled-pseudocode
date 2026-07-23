/*
 * XREFs of IopDecrementVpbRefCount @ 0x1402FB760
 * Callers:
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // esi
  volatile signed __int64 **v11; // rbx
  volatile signed __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  char v15; // bl
  __int64 v16; // rbp
  __int64 v17; // r9
  unsigned __int64 v18; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v22; // eax
  __int64 v23; // rdx
  unsigned __int32 v24; // ett
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v30; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v31[33]; // [rsp+28h] [rbp-130h] BYREF
  __int64 retaddr; // [rsp+158h] [rbp+0h]

  if ( !(_BYTE)a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v7 = (__int64)ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64(v8, v7);
    if ( v9 )
      KxWaitForLockOwnerShip(v7);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  v10 = --*(_DWORD *)(a1 + 28);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr, (__int64)v8, a4);
    goto LABEL_16;
  }
  _m_prefetchw(v11);
  v12 = *v11;
  if ( !*v11 )
  {
    if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
      goto LABEL_16;
    v12 = (volatile signed __int64 *)KxWaitForLockChainValid(v11);
  }
  *v11 = 0LL;
  v13 = (__int64)v11[1];
  if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64(v12 + 1, v13)) & 4) != 0 )
  {
    _InterlockedOr(v29, 0);
    v15 = KeDisableInterrupts(v13, v9, v12 + 1);
    v16 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v14 >> 5) & 0x7F], 0LL);
    memset_0(v31, 0, 0x100uLL);
    v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v18 )
    {
LABEL_15:
      if ( v15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v22 = *SchedulerAssist;
          do
          {
            v23 = v22;
            LODWORD(v23) = v22 & 0xFFDFFFFF;
            v24 = v22;
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v22 & 0xFFDFFFFF, v22);
          }
          while ( v24 != v22 );
          if ( (v22 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v23, SchedulerAssist, v17);
        }
        _enable();
      }
      goto LABEL_16;
    }
    v30 = 2097153LL;
    memset_0(v31, 0, 0x100uLL);
    while ( 1 )
    {
      v25 = *(_QWORD *)(v18 + 8);
      v26 = *(_QWORD *)(v18 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v18 + 24), 1) )
      {
        v27 = *(_QWORD *)(v25 + 200);
        v28 = *(unsigned __int8 *)(v25 + 208);
        if ( (unsigned __int16)v30 > (unsigned __int16)v28 )
          goto LABEL_38;
        if ( WORD1(v30) > (unsigned __int16)v28 )
          break;
      }
LABEL_39:
      v18 = v26;
      if ( !v26 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors((__int64)&v30);
        else
          HalRequestIpi(0, (__int64)&v30);
        goto LABEL_15;
      }
    }
    LOWORD(v30) = v28 + 1;
LABEL_38:
    v31[v28] |= v27;
    goto LABEL_39;
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
