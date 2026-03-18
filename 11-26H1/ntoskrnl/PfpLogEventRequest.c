/*
 * XREFs of PfpLogEventRequest @ 0x140B4F4BC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x1403829A0 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     PfpPartitionToParent @ 0x1404D5F40 (PfpPartitionToParent.c)
 *     PfGenerateTrace @ 0x1407794E8 (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x14086AD20 (MmIssueMemoryListCommand.c)
 *     PfTSetTracingPriority @ 0x140BF8F54 (PfTSetTracingPriority.c)
 */

__int64 __fastcall PfpLogEventRequest(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rdx
  __int64 DefaultPagePriority; // rdx
  int v7; // esi
  __int64 v8; // rax
  unsigned int v9; // r9d
  size_t Size; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a2 + 4) & 0x1F;
  if ( v3 == 2 || v3 == 3 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)v5 = *(_OWORD *)(a1 + 688);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a1 + 704);
    if ( (*(_DWORD *)(a2 + 4) & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v5 + 24) >> 5) & 7;
    else
      DefaultPagePriority = (unsigned int)MmGetDefaultPagePriority();
    PfTSetTracingPriority(a1, DefaultPagePriority);
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x1F) == 0x1B && (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 3) == 1 )
    _InterlockedAnd((_DWORD *)&stru_140F12D20.Padding[2] + 1, 0xFFFFFFFE);
  v7 = HIDWORD(stru_140E66B30.WriteOperationCount)
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
  {
    v8 = PfpPartitionToParent(a1);
    MmIssueMemoryListCommand((v9 >> 1) & 1, 0, v8);
    PfGenerateTrace(a1, 0);
  }
  LODWORD(Size) = *(_DWORD *)(a2 + 4) >> 7;
  return PfLogEvent(a1, *(_DWORD *)(a2 + 4) & 0x1F, v7, *(const void **)(a2 + 16), Size);
}
