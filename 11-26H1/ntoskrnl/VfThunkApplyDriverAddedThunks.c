/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x140C35250
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140C284F8 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140C357CC (ViThunkFindAllSpecialTables.c)
 *     ViThunkFindDriverImportEntry @ 0x140C35940 (ViThunkFindDriverImportEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140C43750 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  void *Pool2; // rdi
  __int64 result; // rax
  __int64 *v6; // rsi
  unsigned int v7; // r14d
  __int64 *AllSpecialTables; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 DriverImportEntry; // rdx
  int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v14) = 0;
  v2 = 0LL;
  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, 24LL * (unsigned int)VfNumberOfClassDriverThunks, 0x6D4D7644u);
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, 24LL * (unsigned int)VfNumberOfClassDriverThunks);
  result = RtlImageDirectoryEntryToData(*(_QWORD *)(BugCheckParameter2 + 48), 1, 0xCu, &v14);
  v6 = (__int64 *)result;
  if ( result )
  {
    v7 = (unsigned int)v14 >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, (unsigned int)v14 >> 3);
    if ( !v7 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( AllSpecialTables )
      {
        v9 = *AllSpecialTables;
        LODWORD(v10) = 0;
        if ( *AllSpecialTables )
          break;
      }
LABEL_10:
      DriverImportEntry = ViThunkFindDriverImportEntry(&ViVerifierDriverAddedThunkListHead);
      if ( DriverImportEntry )
        goto LABEL_11;
LABEL_12:
      ++v6;
      if ( v12 + 1 >= v7 )
      {
        if ( (_DWORD)v2 )
          v3 = MmApplyVerifierToRunningImage(BugCheckParameter2);
LABEL_15:
        if ( AllSpecialTables )
          ExFreePoolWithTag(AllSpecialTables, 0);
        ExFreePoolWithTag(Pool2, 0);
        return v3;
      }
    }
    v14 = *v6;
    while ( 1 )
    {
      DriverImportEntry = ViThunkFindDriverImportEntry(v9 + 24);
      if ( DriverImportEntry )
        break;
      v10 = (unsigned int)(v10 + 1);
      v9 = AllSpecialTables[v10];
      if ( !v9 )
        goto LABEL_10;
    }
LABEL_11:
    v13 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    *((_DWORD *)Pool2 + 2 * v13) = v12;
    *((_QWORD *)Pool2 + v13 + 1) = DriverImportEntry;
    goto LABEL_12;
  }
  return result;
}
