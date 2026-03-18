/*
 * XREFs of IopDecrementVpbRefCount @ 0x1403EB430
 * Callers:
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v5; // rcx
  volatile __int64 *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // esi
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  bool v13; // bl
  __int64 v14; // rbp
  __int64 v15; // r9
  unsigned __int64 v16; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v20; // eax
  __int64 v21; // rdx
  unsigned __int32 v22; // ett
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v29[33]; // [rsp+28h] [rbp-130h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

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
  v5 = (__int64)ArbitraryUserPointer + 144;
  v6 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v7 = _InterlockedExchange64(v6, v5);
    if ( v7 )
      KxWaitForLockOwnerShip(v5, v7, (__int64)v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  v8 = --*(_DWORD *)(a1 + 28);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( !*v9 )
  {
    if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
      goto LABEL_16;
    v10 = KxWaitForLockChainValid((__int64 *)v9, v7, (__int64)v6);
  }
  *v9 = 0LL;
  v11 = (__int64)v9[1];
  if ( (((unsigned __int8)v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), v11)) & 4) != 0 )
  {
    _InterlockedOr(v27, 0);
    v13 = KeDisableInterrupts();
    v14 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v12 >> 5) & 0x7F], 0LL);
    memset_0(v29, 0, 0x100uLL);
    v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v16 )
    {
LABEL_15:
      if ( v13 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v20 = *SchedulerAssist;
          do
          {
            v21 = v20;
            LODWORD(v21) = v20 & 0xFFDFFFFF;
            v22 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v20 & 0xFFDFFFFF, v20);
          }
          while ( v22 != v20 );
          if ( (v20 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v21, SchedulerAssist, v15);
        }
        _enable();
      }
      goto LABEL_16;
    }
    v28 = 2097153LL;
    memset_0(v29, 0, 0x100uLL);
    while ( 1 )
    {
      v23 = *(_QWORD *)(v16 + 8);
      v24 = *(_QWORD *)(v16 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v16 + 24), 1) )
      {
        v25 = *(_QWORD *)(v23 + 200);
        v26 = *(unsigned __int8 *)(v23 + 208);
        if ( (unsigned __int16)v28 > (unsigned __int16)v26 )
          goto LABEL_38;
        if ( WORD1(v28) > (unsigned __int16)v26 )
          break;
      }
LABEL_39:
      v16 = v24;
      if ( !v24 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v28);
        else
          HalRequestIpi(0LL, &v28);
        goto LABEL_15;
      }
    }
    LOWORD(v28) = v26 + 1;
LABEL_38:
    v29[v26] |= v25;
    goto LABEL_39;
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v8;
}
