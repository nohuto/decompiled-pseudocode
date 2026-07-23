/*
 * XREFs of ObpSetCurrentProcessDeviceMap @ 0x140A21FFC
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A221F0 (ObpReferenceDeviceMapFastRef.c)
 */

__int64 __fastcall ObpSetCurrentProcessDeviceMap(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v6; // rax
  void *v7; // r14
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v10; // rbp
  int v11; // edx
  struct _KLOCK_ENTRIES *v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Blink; // rbp
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, a3, a4);
  v7 = (void *)v6;
  if ( v6 )
  {
    v19 = *(_QWORD *)(v6 + 24);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = CurrentServerSiloGlobals;
    if ( v11 != 999 || HIDWORD(v19) )
    {
      v19 = 0LL;
      if ( SeGetTokenDeviceMap((__int64)v7, &v19) < 0 )
      {
LABEL_17:
        ObfDereferenceObject(v7);
        return v4;
      }
      v4 = v19;
    }
    else
    {
      v4 = ObpReferenceDeviceMapFastRef(CurrentServerSiloGlobals);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      p_Blink = (unsigned __int64 *)&v10[7].Blink;
      --CurrentThread->SpecialApcDisable;
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)p_Blink, 0LL, 0LL, v12);
      v17 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Blink, v15, (__int64)p_Blink);
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v17, v16);
        else
          *((_BYTE *)v17 + 10) = 1;
      }
      v18 = _InterlockedExchange64((volatile __int64 *)&Process[1].FreezeCount, v4 | 0xF);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)p_Blink);
      KeAbPostRelease((unsigned __int64)p_Blink);
      KeLeaveGuardedRegion();
      if ( v18 )
        ObDereferenceDeviceMap((volatile signed __int64 *)(v18 & 0xFFFFFFFFFFFFFFF0uLL), (v18 & 0xF) + 1);
    }
    goto LABEL_17;
  }
  return v4;
}
