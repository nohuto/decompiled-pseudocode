/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x140026E70
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008BB0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x140027010 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbp
  struct _SLIST_ENTRY *v2; // rsi
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  LARGE_INTEGER *v6; // rbx
  struct _SLIST_ENTRY *v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v10; // [rsp+50h] [rbp-28h]

  Next = ListEntry[2].Next;
  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[833], ListEntry);
  v10 = 256;
  v9[0] = v5 + 2016;
  AcquireSpinLock::Acquire((Acquire *)v9);
  v6 = (LARGE_INTEGER *)(*((_QWORD *)&v3[11].Next + 1) + 112LL * HIDWORD(v3[12].Next));
  memset(v6, 0, 0x70uLL);
  HIDWORD(v3[12].Next) = (HIDWORD(v3[12].Next) + 1) & (LODWORD(v3[12].Next) - 1);
  v6[1] = KeQueryPerformanceCounter(0LL);
  v6->LowPart = 12;
  v6[2].QuadPart = (LONGLONG)Next;
  v6[3] = (LARGE_INTEGER)*(&Next[14].Next + 1);
  v6[4] = (LARGE_INTEGER)Next[15].Next;
  v6[5].QuadPart = (LONGLONG)v2;
  v7 = Next[15].Next;
  if ( v2 != v7 )
  {
    v8 = *((_QWORD *)&Next[14].Next + 1);
    if ( (unsigned __int64)v2 > v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 17LL, v2, v7, v8);
      WdLogGlobalForLineNumber = 916;
      JUMPOUT(0x14002700ALL);
    }
    if ( v2 >= v7 )
    {
      _InterlockedExchange((volatile __int32 *)&v3[31].Next + 2, 1);
      _InterlockedIncrement64((volatile signed __int64 *)&v3[109]);
      Next[15].Next = v2;
      if ( v2 == *(&Next[14].Next + 1) )
      {
        --*(_DWORD *)(v5 + 80);
        --*((_DWORD *)&v3[108].Next + 2);
        VidSchiCheckHwSchNodeProgress((struct _VIDSCH_NODE *)v3, 0);
        VidSchiSignalRegisteredEvent(v5, v4 + 176);
      }
    }
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
