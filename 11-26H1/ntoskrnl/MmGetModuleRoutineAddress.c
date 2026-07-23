/*
 * XREFs of MmGetModuleRoutineAddress @ 0x14086ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmEnumerateSystemImagesShared @ 0x1404DE708 (MmEnumerateSystemImagesShared.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiFindEntryInImportListRecursively @ 0x14087B3F4 (MiFindEntryInImportListRecursively.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 *     MiEnableExportCallers @ 0x140A8B640 (MiEnableExportCallers.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MmGetModuleRoutineAddress(
        unsigned __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        int a4,
        _QWORD *a5)
{
  _QWORD *v5; // r13
  NTSTATUS result; // eax
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rsi
  struct _LIST_ENTRY *Blink; // r12
  char *Buffer; // rdi
  __int64 v13; // rax
  size_t v14; // r14
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _WORD *v17; // r15
  _QWORD *v18; // rbx
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // r14
  int v21; // edi
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-18h]
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  v25 = 0;
  DestinationString = 0LL;
  *a5 = 0LL;
  if ( a4 )
    return -1073741582;
  v22 = a2;
  v23 = 0LL;
  MmEnumerateSystemImagesShared((__int64)MiFindModuleBaseName, (__int64)&v22);
  if ( !v23 )
    return -1073741584;
  v9 = MiLockLoadedDataTableEntryIfNecessary(a1, &v25);
  v10 = v9;
  if ( v25 )
    MmUnlockLoadedDataTableEntry((__int64)v9);
  if ( !v10 )
    return -1073741585;
  Blink = v10[8].Blink;
  if ( Blink == (struct _LIST_ENTRY *)1 || Blink == (struct _LIST_ENTRY *)-2LL )
    return -1073741275;
  result = RtlUnicodeStringToAnsiString(&DestinationString, a3, 1u);
  if ( result >= 0 )
  {
    Buffer = DestinationString.Buffer;
    v13 = -1LL;
    do
      ++v13;
    while ( DestinationString.Buffer[v13] );
    v14 = v13 + 1;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(256LL, v14 + 4, 538996045, CurrentProcessorColor | 0x80000000);
    v17 = (_WORD *)PoolMm;
    if ( PoolMm )
    {
      v18 = 0LL;
      memmove((void *)(PoolMm + 2), Buffer, v14);
      ExFreePoolWithTag(Buffer, 0);
      *v17 = 0;
      a5 = 0LL;
      v19 = MiLockLoadedDataTableEntryIfNecessary(v23, &v25);
      v20 = (__int64)v19;
      if ( !v19 )
      {
        ExFreePoolWithTag(v17, 0);
        return -1073741584;
      }
      v21 = MiSnapThunk(v19[3].Flink, 0, (unsigned int)&a5, (unsigned int)&a5, (__int64)v17);
      ExFreePoolWithTag(v17, 0);
      if ( v21 >= 0 )
      {
        v18 = a5;
        if ( (struct _LIST_ENTRY *)v20 == v10 || (unsigned int)MiFindEntryInImportListRecursively(Blink, v20) )
        {
          if ( v18 )
          {
            v21 = MiEnableExportCallers(v18);
            if ( v21 < 0 )
              v18 = 0LL;
          }
        }
        else
        {
          v18 = 0LL;
          v21 = -1073741800;
        }
      }
      if ( v25 )
        MmUnlockLoadedDataTableEntry(v20);
      *v5 = v18;
      return v21;
    }
    else
    {
      ExFreePoolWithTag(Buffer, 0);
      return -1073741670;
    }
  }
  return result;
}
