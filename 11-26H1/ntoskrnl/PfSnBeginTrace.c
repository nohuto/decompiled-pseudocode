/*
 * XREFs of PfSnBeginTrace @ 0x1409D002C
 * Callers:
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PsGetThreadId @ 0x1404793F0 (PsGetThreadId.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     PfSnActivateTrace @ 0x1404CA628 (PfSnActivateTrace.c)
 *     PfSnTraceBufferAllocate @ 0x1404CB9C0 (PfSnTraceBufferAllocate.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnCleanupTrace @ 0x140AA69F4 (PfSnCleanupTrace.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r15
  void *Pool2; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int16 v13; // ax
  int v14; // ecx
  __int64 *v15; // rax
  __int64 **v16; // rcx
  int v17; // edi

  v8 = a2;
  if ( LODWORD(stru_140E67200.ThreadLock) >= LODWORD(stru_140E66D40.LastXStateSaveDebugInfo) )
    return (unsigned int)-1073741618;
  if ( !FsRtlpVolumeStartupApplicationsComplete )
    return (unsigned int)-1073741661;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v11 = (__int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x258uLL);
    *(_DWORD *)v11 = 1128485697;
    KeInitializeTimer((PKTIMER)(v11 + 136));
    v12 = v11 + 104;
    *(_QWORD *)(v11 + 112) = v11 + 104;
    *(_QWORD *)(v11 + 104) = v11 + 104;
    *(_QWORD *)(v11 + 128) = 0LL;
    *(_DWORD *)(v11 + 456) = -1073741779;
    *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v11 + 520) = 0LL;
    *(_QWORD *)(v11 + 528) = 0LL;
    *(_QWORD *)(v11 + 272) = 0LL;
    KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)PfSnTraceTimerRoutine, (PVOID)v11);
    *(_QWORD *)(v11 + 360) = 0LL;
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 360));
    ObfReferenceObjectWithTag(a3, 0x73576650u);
    *(_QWORD *)(v11 + 352) = a3;
    *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
    *(_QWORD *)(v11 + 392) = v11;
    *(_QWORD *)(v11 + 368) = 0LL;
    v13 = *(_WORD *)(v11 + 486);
    *(_DWORD *)(v11 + 400) = 0;
    *(_OWORD *)(v11 + 24) = *a1;
    *(_OWORD *)(v11 + 40) = a1[1];
    *(_OWORD *)(v11 + 56) = a1[2];
    *(_OWORD *)(v11 + 72) = a1[3];
    *(_DWORD *)(v11 + 88) = v8;
    *(_WORD *)(v11 + 486) = v13 & 0xFFFE | (a5 != 0);
    v14 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[16 * v8 + 152];
    *(_DWORD *)(v11 + 340) = v14;
    *(_QWORD *)(v11 + 200) = *(_QWORD *)&stru_140E66D40.WaitBlockFill11[16 * v8 + 160];
    if ( v14 )
    {
      if ( v14 > 0x100000 )
        *(_DWORD *)(v11 + 340) = 0x100000;
      *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
      if ( *(_QWORD *)(v11 + 96) )
      {
        v15 = *(__int64 **)(v11 + 96);
        v16 = *(__int64 ***)(v11 + 112);
        if ( *v16 != (__int64 *)v12 )
          __fastfail(3u);
        *v15 = v12;
        v15[1] = (__int64)v16;
        *v16 = v15;
        *(_QWORD *)(v11 + 112) = v15;
        *(_DWORD *)(v11 + 120) = 1;
        *(_QWORD *)(v11 + 424) = -1LL;
        *(_QWORD *)(v11 + 416) = -16LL;
        *(_QWORD *)(v11 + 408) = v11 + 416;
        if ( a4 )
        {
          *(_QWORD *)(v11 + 432) = a4;
          *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
        }
        v17 = PfSnActivateTrace(v11);
        if ( v17 >= 0 )
        {
          v17 = 0;
          *a6 = v11;
          return (unsigned int)v17;
        }
      }
      else
      {
        v17 = -1073741670;
      }
    }
    else
    {
      v17 = -1073741811;
    }
    PfSnCleanupTrace(v11);
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)v17;
  }
  return (unsigned int)-1073741670;
}
