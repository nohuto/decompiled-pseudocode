/*
 * XREFs of RtlpFindAndCommitPages @ 0x14061F4D4
 * Callers:
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140479020 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1406203C4 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1406207A0 (RtlpUpdateHeapRates.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindUCREntry @ 0x140628F60 (RtlpFindUCREntry.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(__int64 a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rsi
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rdx
  unsigned __int64 v19; // r9
  ULONG_PTR v20; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = UCREntry - 16;
  v7 = 0;
  v8 = *(unsigned __int8 *)(UCREntry - 16 + 14);
  if ( (_BYTE)v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpBootStatHandleLock.QuantumTarget != *(_QWORD *)(a1 + 360) )
  {
    updated = guard_dispatch_icall_no_overrides(a1, &BaseAddress);
  }
  else
  {
    v14 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *a2 = v14;
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         v14,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                         a1,
                         (unsigned __int8 *)(a1 + 376)) )
      ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v16 = v5 - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
    LOBYTE(v11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
    if ( *(_BYTE *)(v16 + 11) != (_BYTE)v11 )
      RtlpAnalyzeHeapFailure(a1, v5 - 16);
  }
  *(_BYTE *)(v16 + 10) = 0;
  *(_BYTE *)(v16 + 15) = 0;
  RtlpRemoveUCRBlock(v11, v5, v12, v13);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v17 = *(_QWORD *)(v5 + 40);
  if ( v17 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v17;
  v18 = *a2;
  v19 = *(_QWORD *)(v5 + 40);
  if ( v19 > *a2 || v19 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    RtlpCreateUCREntry(a1, v9, v18 - 48 + *(_QWORD *)(v5 + 32), v19 - v18, v5 - 16, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v18 + 16LL * *(unsigned __int16 *)(v16 + 8);
  }
  *(_BYTE *)(v16 + 11) = 0;
  v20 = *(_QWORD *)(v9 + 40);
  if ( v20 != v9 )
  {
    if ( ((unsigned __int64)(v16 - v9) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3u, v20, v5 - 16, (struct _KLOCK_ENTRIES *)v9, 0LL, 0LL);
    v7 = ((unsigned int)(v16 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v16 + 14) = v7;
  return v5 - 16;
}
