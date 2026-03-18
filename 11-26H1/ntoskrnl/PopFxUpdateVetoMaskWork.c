/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x140B40080
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1404D5274 (PoFxActivateDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404E21D8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxUpdateVetoMaskWork(PVOID P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  _QWORD *StackLimit; // rax
  __int64 v11; // rdi
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi

  v4 = *((_QWORD *)P + 2);
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.QuantumTarget, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F12420.QuantumTarget, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&stru_140F12420.QuantumTarget, v6, (__int64)&stru_140F12420.QuantumTarget);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( LOBYTE(stru_140F12420.StackBase) )
  {
    StackLimit = stru_140F12420.StackLimit;
    if ( *(struct _KTHREAD **)stru_140F12420.StackLimit != (struct _KTHREAD *)&stru_140F12420.InitialStack )
      __fastfail(3u);
    *(_QWORD *)P = &stru_140F12420.InitialStack;
    *((_QWORD *)P + 1) = StackLimit;
    *StackLimit = P;
    stru_140F12420.StackLimit = P;
  }
  else
  {
    ++HIDWORD(stru_140F12420.StackBase);
    KeResetEvent((PRKEVENT)&stru_140F12420.ThreadLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.QuantumTarget);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.QuantumTarget);
    v11 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
    PoFxActivateDevice(v11);
    PopPepUpdateDripsDeviceVetoMask(v4, *((_DWORD *)P + 6));
    PoFxIdleDevice(v11);
    PopFxDereferenceDevice(v4, 2);
    ExFreePoolWithTag(P, 0x4D584650u);
    ZwUpdateWnfStateData((__int64)&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL);
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.QuantumTarget, 0LL, 0LL, v12);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F12420.QuantumTarget, 0LL);
    v15 = v13;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&stru_140F12420.QuantumTarget, v13, (__int64)&stru_140F12420.QuantumTarget);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( !--HIDWORD(stru_140F12420.StackBase) )
      KeSetEvent((PRKEVENT)&stru_140F12420.ThreadLock, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.QuantumTarget);
  KeAbPostRelease((unsigned __int64)&stru_140F12420.QuantumTarget);
}
