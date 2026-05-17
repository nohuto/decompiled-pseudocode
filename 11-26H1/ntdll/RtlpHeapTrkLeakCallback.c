/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x180013D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHeapTrkFindStack @ 0x180012C10 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x180013F2C (RtlpHeapTrkReportResult.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1801084B4 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801106B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 Stack; // rbx
  __int64 v9; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  v9 = 0x10000LL;
  v10 = 0LL;
  if ( !byte_1801C77C8 )
  {
    if ( !byte_1801C60D0
      || (byte_1801C60D0 = 0,
          _InterlockedExchange(&dword_1801C77D8, 1),
          (int)ZwMapViewOfSection(Handle, -1LL, &TrkContext, 0LL, 0LL, &v10, &v9, 1, 0, 4) >= 0)
      && TrkContext
      && (*(_DWORD *)(TrkContext + 48) = NtCurrentTeb()->ClientId.UniqueProcess, (unsigned __int8)RtlpHeapTrkDumpStacks()) )
    {
      if ( TrkContext )
      {
        if ( a2 )
        {
          Stack = RtlpHeapTrkFindStack((a3 >> 3) | 0xE000000000000000uLL);
          if ( (unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) && Stack )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
              Src,
              a4,
              (const void *)(Stack + 24),
              *(unsigned __int16 *)(Stack + 16));
          }
        }
        else
        {
          RtlpHeapTrkDumpOutstandingAllocs();
          if ( *(_DWORD *)(TrkContext + 60) )
          {
            if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
              return 0LL;
            *(_DWORD *)(TrkContext + 60) = 0;
            dword_1801C60D4 = 0;
          }
          RtlpHeapTrkSyncWithDiagnoser();
        }
      }
    }
  }
  return 0LL;
}
