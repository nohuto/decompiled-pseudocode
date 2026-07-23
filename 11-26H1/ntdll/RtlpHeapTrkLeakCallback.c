/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x18005F450
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpHeapTrkFindStack @ 0x18005E340 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x18005F65C (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x180107EB4 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x180110240 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 Stack; // rbx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 0LL;
  if ( !byte_1801C6808 )
  {
    if ( !byte_1801C50D0
      || (byte_1801C50D0 = 0,
          _InterlockedExchange(&dword_1801C6828, 1),
          ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &TrkContext,
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewShare,
            0,
            4u) >= 0)
      && TrkContext
      && (*((_DWORD *)TrkContext + 12) = NtCurrentTeb()->ClientId.UniqueProcess, (unsigned __int8)RtlpHeapTrkDumpStacks()) )
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
          if ( *((_DWORD *)TrkContext + 15) )
          {
            if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
              return 0LL;
            *((_DWORD *)TrkContext + 15) = 0;
            dword_1801C50D4 = 0;
          }
          RtlpHeapTrkSyncWithDiagnoser();
        }
      }
    }
  }
  return 0LL;
}
