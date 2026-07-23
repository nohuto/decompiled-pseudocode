/*
 * XREFs of RtlPcToFileImageInfo @ 0x14040DB90
 * Callers:
 *     KiLogFlushQueuedDpcsCalledAtDispatchLevel @ 0x1405F3B14 (KiLogFlushQueuedDpcsCalledAtDispatchLevel.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFileImageInfo(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int8 v7; // bp
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  struct _LIST_ENTRY *v9; // rsi
  UNICODE_STRING *v10; // rcx
  __int64 v11; // rdx
  UNICODE_STRING *v12; // rcx

  v2 = 0;
  if ( !a2 || *(_DWORD *)a2 != 40 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 && !*(_QWORD *)(v5 + 8) )
    return 3221225507LL;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 8) )
      return 3221225507LL;
  }
  v7 = MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v9 = DataTableEntryByAddress;
  if ( DataTableEntryByAddress )
  {
    v10 = *(UNICODE_STRING **)(a2 + 24);
    *(_QWORD *)(a2 + 8) = DataTableEntryByAddress[3].Flink;
    *(_DWORD *)(a2 + 16) = DataTableEntryByAddress[4].Flink;
    if ( v10 && v10->MaximumLength < LOWORD(DataTableEntryByAddress[5].Blink)
      || (v11 = *(_QWORD *)(a2 + 32)) != 0 && *(_WORD *)(v11 + 2) < LOWORD(DataTableEntryByAddress[4].Blink) )
    {
      v2 = -1073741789;
    }
    else
    {
      if ( v10 )
        RtlCopyUnicodeString(v10, (PCUNICODE_STRING)&DataTableEntryByAddress[5].Blink);
      v12 = *(UNICODE_STRING **)(a2 + 32);
      if ( v12 )
        RtlCopyUnicodeString(v12, (PCUNICODE_STRING)&v9[4].Blink);
    }
  }
  else
  {
    v2 = -1073741275;
  }
  MmUnlockLoadedModuleListShared(v7);
  return v2;
}
