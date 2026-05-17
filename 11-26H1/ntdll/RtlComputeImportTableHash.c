/*
 * XREFs of RtlComputeImportTableHash @ 0x180121A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushSecureMemoryCache @ 0x180017520 (RtlFlushSecureMemoryCache.c)
 *     ImportTablepHashCanonicalLists @ 0x1800383D4 (ImportTablepHashCanonicalLists.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180045A20 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     ImportTablepFreeModuleSorted @ 0x180121D00 (ImportTablepFreeModuleSorted.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B220 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B2E4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepInsertFunctionSorted @ 0x18013B3AC (ImportTablepInsertFunctionSorted.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r8d
  _DWORD *v11; // r14
  _QWORD *Heap_0; // rax
  _QWORD *v13; // rbx
  int inserted; // eax
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  v17 = 0LL;
  Handle = (HANDLE)-1LL;
  v22 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( a3 == 1 )
  {
    v5 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, 2, 0x8000000, a1);
    if ( Handle == (HANDLE)-1LL || v5 < 0 )
    {
      v4 = -1073741816;
      goto LABEL_28;
    }
    v6 = ZwMapViewOfSection(Handle, -1LL, &v22, 0LL, 0LL, &v20, &v19, 1, 0, 2);
    NtClose(Handle);
    if ( !v22 || v6 < 0 )
    {
      v4 = -1073741799;
      goto LABEL_28;
    }
    v7 = RtlpImageDirectoryEntryToDataEx(v22, 0, 1u, &v21, (__int64)&v18);
    if ( v7 >= 0 )
    {
      v8 = v18;
    }
    else
    {
      if ( v7 != -1073741822 )
      {
        v4 = -1073741687;
        goto LABEL_28;
      }
      v8 = 0LL;
    }
    v18 = 0LL;
    RtlImageNtHeaderEx(1, v22, 0LL, &v18);
    v9 = v18;
    while ( v8 )
    {
      v10 = *(_DWORD *)(v8 + 12);
      if ( !v10 || !*(_DWORD *)(v8 + 16) )
        break;
      v11 = RtlAddressInSectionTable(v9, v22, v10);
      if ( !v11 )
      {
        v4 = -1073741685;
        goto LABEL_28;
      }
      Heap_0 = (_QWORD *)RtlAllocateHeap_0();
      v13 = Heap_0;
      if ( !Heap_0 )
      {
        v4 = -1073741801;
        goto LABEL_28;
      }
      Heap_0[1] = v11;
      Heap_0[2] = 0LL;
      *Heap_0 = 0LL;
      ImportTablepInsertFunctionSorted(Heap_0, &v17);
      if ( *(_WORD *)(v9 + 24) == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v13, v22, v9, v8);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(v13, v22, v9, v8);
      v4 = inserted;
      if ( inserted < 0 )
        goto LABEL_28;
      v8 += 20LL;
    }
    v4 = ImportTablepHashCanonicalLists(v17, a2);
  }
  else
  {
    v4 = -1073741736;
  }
LABEL_28:
  ImportTablepFreeModuleSorted(v17);
  if ( v22 && (unsigned int)NtUnmapViewOfSection(-1LL, v22) == -1073741755 && RtlFlushSecureMemoryCache(v22, 0LL) )
    NtUnmapViewOfSection(-1LL, v22);
  return v4;
}
