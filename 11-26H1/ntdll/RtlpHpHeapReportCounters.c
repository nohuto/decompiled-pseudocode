/*
 * XREFs of RtlpHpHeapReportCounters @ 0x180094F70
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpHeapReportCounters(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 128);
  v4 = *(_QWORD *)(a1 + 136);
  v2 <<= 12;
  v5 = v4 << 12;
  v6 = *(_QWORD *)(a1 + 600) + *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a2 + 144) = v6;
  *(_QWORD *)(a2 + 128) = v2;
  *(_QWORD *)(a2 + 136) = v4 << 12;
  v7 = ((v4 - 2 * v6) << 12) - 4096;
  *(_QWORD *)(a2 + 152) = v7;
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 88) << 12;
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a1 + 96) << 12;
  *(_QWORD *)(a2 + 80) = v7;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 20) = 2;
  *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(a1 + 28);
  LODWORD(v7) = NtCurrentPeb()->NumberOfHeaps;
  *(_QWORD *)(a2 + 40) = v2;
  *(_DWORD *)(a2 + 28) = v7 - 1;
  *(_QWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 100) = 0;
  result = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a2 + 120) = result;
  return result;
}
