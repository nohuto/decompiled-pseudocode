/*
 * XREFs of PfSnLogPageFault @ 0x140376CA0
 * Callers:
 *     MiProtoFaultLog @ 0x14044EAB0 (MiProtoFaultLog.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 *     MiNotifyPfCheckCachedPages @ 0x140A89BE0 (MiNotifyPfCheckCachedPages.c)
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x1402650C0 (PfSnLogPageFaultCommon.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rbx
  signed __int64 v9; // rdi
  signed __int64 v10; // rdx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdi
  struct _KTHREAD *v13; // rax
  BOOLEAN v14; // r12
  KIRQL v15; // di
  struct _EX_RUNDOWN_REF *v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt

  v4 = a3;
  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    _m_prefetchw(&Process[2]);
    v9 = *(_QWORD *)&Process[2].Header.Lock;
    v10 = v9;
    if ( (v9 & 0xF) != 0 )
    {
      do
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].Header.Lock, v9 - 1, v9);
        if ( v9 == v11 )
          break;
        v9 = v11;
        v10 = v11;
      }
      while ( (v11 & 0xF) != 0 );
    }
    v12 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v12 )
    {
      v10 &= 0xFu;
      if ( (unsigned int)v10 > 1 )
        goto LABEL_12;
      if ( (_DWORD)v10 )
      {
        if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v12 + 360), 0xFu) )
        {
          _m_prefetchw(&Process[2]);
          v17 = *(_QWORD *)&Process[2].Header.Lock;
          while ( (v17 & 0xF) == 0 && v12 == (v17 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].Header.Lock, v17 + 15, v17);
            if ( v18 == v17 )
              goto LABEL_12;
          }
          ExpReleaseRundownProtection((PEX_RUNDOWN_REF)(v12 + 360), 0xFu);
        }
        goto LABEL_12;
      }
      v14 = 1;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
      v16 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&Process[2].Header.Lock & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v16 )
        v14 = ExAcquireRundownProtection_0(v16 + 45);
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v15);
      v12 = 0LL;
      if ( v14 )
        v12 = (unsigned __int64)v16;
    }
    if ( !v12 )
      return;
LABEL_12:
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x2000000) == 0 || (v4 & 2) != 0 )
    {
      if ( (int)PsGetIoPriorityThread(CurrentThread, v10, a3, a4) < 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 336));
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 360));
        return;
      }
      v13 = *(struct _KTHREAD **)(v12 + 432);
      if ( !v13 || v13 == CurrentThread && *(_QWORD *)(v12 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
        PfSnLogPageFaultCommon(v12, a1, *(_QWORD *)(a1 + 24), a2, v4);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 360));
  }
}
