/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x140B025FC
 * Callers:
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409DEF90 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r13
  __int64 v4; // r12
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rsi
  unsigned __int64 *p_Blink; // rdi
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // r14
  int v13; // ebp
  __int64 v14; // rax
  volatile signed __int64 *v15; // r14
  int v16; // eax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v4 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v7 = CurrentServerSiloGlobals;
      p_Blink = (unsigned __int64 *)&CurrentServerSiloGlobals[7].Blink;
      --CurrentThread->SpecialApcDisable;
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL, 0LL, v9);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Blink, v10, (__int64)p_Blink);
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v12, v11);
        else
          *((_BYTE *)v12 + 10) = 1;
      }
      v13 = ~(1 << v3);
      *(_DWORD *)(v4 + 256) &= v13;
      *(_BYTE *)(v3 + v4 + 260) = 0;
      v14 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v3 + 32), 0LL);
      v15 = (volatile signed __int64 *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v16 = v14 & 0xF;
        if ( v16 )
          _InterlockedAdd64(v15 - 6, -v16);
      }
      if ( v4 == ((unsigned __int64)v7->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
        LODWORD(v7->Blink) &= v13;
      else
        --*((_DWORD *)&v7->Blink + v3 + 1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)p_Blink);
      KeAbPostRelease((unsigned __int64)p_Blink);
      KeLeaveGuardedRegion();
      if ( v15 )
        ObDereferenceObjectDeferDelete((PVOID)v15);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
