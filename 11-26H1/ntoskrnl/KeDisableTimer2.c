/*
 * XREFs of KeDisableTimer2 @ 0x1403AA104
 * Callers:
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14063C534 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     ExpDeleteTimer2 @ 0x140AD4610 (ExpDeleteTimer2.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     EtwTraceTimedEvent @ 0x14032B770 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     KiRemoveTimer2 @ 0x140378EB0 (KiRemoveTimer2.c)
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14037A9B0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037AA30 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceCancelTimer2 @ 0x1403A9BE0 (KiTraceCancelTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403AA610 (KiUpdateTimer2Flags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  char v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v15; // r8
  char v16; // r12
  unsigned int v17; // r14d
  char updated; // r14
  char v19; // r15
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // [rsp+30h] [rbp-D0h]
  bool v26; // [rsp+34h] [rbp-CCh]
  unsigned int v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _OWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[264]; // [rsp+88h] [rbp-78h] BYREF

  memset_0(&v33, 0, 0x108uLL);
  v6 = 0LL;
  v27 = 32;
  v29 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v8 = 0LL;
  v9 = 1LL;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  v23 = 0;
  v10 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v11 = 1;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    v12 = *a4;
    v13 = a4[1];
    if ( v11 && v12 )
    {
      LOBYTE(v31) = 8;
      v29 = v12;
      v30 = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(
                             a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ v13),
                             KiWaitNever));
    }
    v9 = KiWaitNever;
    v8 = KiWaitNever ^ __ROR8__(
                         a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ v12),
                         KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(
                          a1 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ v13),
                          KiWaitNever);
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 2;
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, v9);
  }
  v26 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v26 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v8;
      *(_QWORD *)(a1 + 120) = v10;
    }
    v16 = a2;
    if ( !a2 )
      goto LABEL_16;
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_16:
        v17 = 6;
LABEL_17:
        if ( v11 )
          EtwGetKernelTraceTimestamp((unsigned __int64)v32, 0x40020000uLL, v15);
        updated = KiUpdateTimer2Flags(a1, v27, v17);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v19 = a3;
        if ( a3 && !updated )
        {
          v33 = 2097153LL;
          memset_0(v34, 0, 0x100uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)&v33, KiClockTimerOwner);
          KeGenericProcessorCallback(&v33, (__int64)xHalTimerWatchdogStop, 0LL, 2);
        }
        goto LABEL_24;
      }
      v27 = 36;
    }
    v23 = 1;
    v17 = 4;
    goto LABEL_17;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  updated = 0;
  v19 = a3;
  v16 = a2;
LABEL_24:
  if ( v11 && !v26 )
  {
    v21 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v7, KiWaitNever));
    if ( v23 )
      KiTraceCancelTimer2(a1, v21);
    v22 = v31;
    v28 = 0x7E35C6C7F3DD7277LL
        * (KiWaitNever ^ __ROR8__(
                           v21 ^ _byteswap_uint64((__int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ a1),
                           KiWaitNever));
    if ( v16 )
    {
      v22 = v31 | 1;
      LOBYTE(v31) = v31 | 1;
    }
    if ( v19 )
    {
      v22 |= 2u;
      LOBYTE(v31) = v22;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v28, 32, 5246466, (__int64)v32);
    }
    else
    {
      LOBYTE(v31) = v22 | 4;
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v28, 32, 1538, (__int64)v32);
    }
  }
  return v23;
}
