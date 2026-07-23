/*
 * XREFs of KeSetSystemServiceCallback @ 0x140B71110
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KiGetSystemServiceTraceTable @ 0x14077CFA0 (KiGetSystemServiceTraceTable.c)
 */

__int64 __fastcall KeSetSystemServiceCallback(_BYTE *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 SystemServiceTraceTable; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // edx
  unsigned int i; // ecx
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // rbp
  unsigned __int64 v19; // rcx
  char v20; // r14
  char v21; // al
  int v22; // eax
  signed __int32 v24[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  if ( !a3
    || a3 == *(_QWORD *)((char *)&stru_140FC11F0.ForegroundLossTime + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL)) )
  {
    SystemServiceTraceTable = KiGetSystemServiceTraceTable();
    if ( SystemServiceTraceTable )
    {
      v11 = 0;
      while ( *a1 )
      {
        v11 = (1025 * (v11 + (char)*a1)) ^ ((1025 * (v11 + (char)*a1)) >> 6);
        ++a1;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= 0x1EA )
          return (unsigned int)-1073741275;
        v13 = SystemServiceTraceTable + ((unsigned __int64)i << 6);
        if ( v11 == *(_DWORD *)(v13 + 52) )
          break;
      }
      if ( v13 == -16LL )
        return (unsigned int)-1073741275;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSystemServiceTraceCallbackLock, 0LL, 0LL, v10);
      v17 = _interlockedbittestandset64(&KiSystemServiceTraceCallbackLock.Header.Lock, 0LL);
      v18 = v15;
      if ( v17 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&KiSystemServiceTraceCallbackLock,
          v15,
          (__int64)&KiSystemServiceTraceCallbackLock);
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v16);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      v19 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
      v20 = -a2;
      v21 = *(_BYTE *)(v13 - (v20 != 0) + 57);
      if ( a3 )
      {
        if ( v21 )
        {
          v4 = -1073740008;
        }
        else
        {
          *(_QWORD *)(v19 + v13 + 72) = a4;
          _InterlockedOr(v24, 0);
          v22 = LODWORD(PspSiloMonitorLock.KernelStack) + 1;
          *(_BYTE *)(v13 - (v20 != 0) + 57) = 1;
          LODWORD(PspSiloMonitorLock.KernelStack) = v22;
          if ( v22 == 1 )
            _InterlockedOr(&KiDynamicTraceMask, 1u);
        }
      }
      else if ( v21 )
      {
        if ( !--LODWORD(PspSiloMonitorLock.KernelStack) )
          _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFE);
        *(_BYTE *)(v13 - (v20 != 0) + 57) = 0;
        _InterlockedOr(v24, 0);
        while ( KiSystemServiceTraceCallbacksActive )
          _mm_pause();
        *(_QWORD *)(v19 + v13 + 72) = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.Header.Lock);
      KeAbPostRelease((unsigned __int64)&KiSystemServiceTraceCallbackLock);
      KeLeaveCriticalRegion();
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
