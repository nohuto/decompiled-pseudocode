/*
 * XREFs of VmCreateMemoryRange @ 0x14078F640
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     VmpInsertMemoryRange @ 0x14063EA20 (VmpInsertMemoryRange.c)
 *     VmpDecodePreallocationRangeHandle @ 0x14078FE1C (VmpDecodePreallocationRangeHandle.c)
 *     VmpProcessContextSetup @ 0x140790230 (VmpProcessContextSetup.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140790898 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x140A5BA40 (VmpAllocateMemoryRanges.c)
 *     VmpFreeMemoryRanges @ 0x140A5BB24 (VmpFreeMemoryRanges.c)
 *     VmpValidateMemoryRangeParameters @ 0x140A6151C (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmCreateMemoryRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 MemoryRanges; // rdi
  unsigned __int64 v10; // r11
  _KPROCESS *Process; // rbp
  __int64 Blink; // rsi
  int v13; // eax
  int inserted; // ebx
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // r11d

  MemoryRanges = 0LL;
  v10 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  Blink = (__int64)Process[3].ProcessListEntry.Blink;
  if ( !Blink )
  {
    v13 = VmpProcessContextSetup(a4);
    v10 = a1;
    inserted = v13;
    if ( v13 < 0 )
    {
LABEL_10:
      v15 = 0;
      goto LABEL_22;
    }
    Blink = (__int64)Process[3].ProcessListEntry.Blink;
  }
  if ( a5 )
    MemoryRanges = VmpDecodePreallocationRangeHandle(Blink, a5);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(v10, a2, a3, a4) || (a6 & 0xFFFFFFFE) != 0 )
  {
    inserted = -1073741811;
    goto LABEL_10;
  }
  v16 = *(_QWORD *)(Blink + 104);
  if ( v16 != -1 && v16 != a4 )
  {
    inserted = -1073740007;
    goto LABEL_10;
  }
  if ( MemoryRanges || (MemoryRanges = VmpAllocateMemoryRanges(1LL)) != 0 )
  {
    v15 = 1;
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)(Blink + 120));
    *(_QWORD *)(MemoryRanges + 24) = a2 >> 12;
    *(_QWORD *)(MemoryRanges + 32) = a3 + (a2 >> 12) - 1;
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(MemoryRanges + 72) |= 2u;
    v17 = *(_QWORD *)(MemoryRanges + 40);
    *(_QWORD *)(v17 + 48) = a1 >> 12;
    *(_QWORD *)(v17 + 56) = a3 + (a1 >> 12) - 1;
    inserted = VmpInsertMemoryRange(Blink, MemoryRanges, a4);
    if ( inserted >= 0 )
    {
      MemoryRanges = 0LL;
      inserted = 0;
    }
  }
  else
  {
    v15 = 0;
    inserted = -1073741670;
  }
LABEL_22:
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 128LL) )
  {
    VmpLogCreateDeleteMemoryRange(v18, 0, v19, a2, a3, a5, a4, inserted);
  }
  if ( v15 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)(Blink + 120));
  if ( MemoryRanges )
    VmpFreeMemoryRanges((PVOID)MemoryRanges);
  return (unsigned int)inserted;
}
