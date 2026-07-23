/*
 * XREFs of RtlComputeImportTableHash @ 0x180121820
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushSecureMemoryCache @ 0x180002600 (RtlFlushSecureMemoryCache.c)
 *     ImportTablepHashCanonicalLists @ 0x180022944 (ImportTablepHashCanonicalLists.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18002FF90 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     ImportTablepFreeModuleSorted @ 0x180121AA0 (ImportTablepFreeModuleSorted.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013AF90 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B054 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepInsertFunctionSorted @ 0x18013B11C (ImportTablepInsertFunctionSorted.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 */

NTSTATUS __cdecl RtlComputeImportTableHash(HANDLE FileHandle, PCHAR Hash, ULONG ImportTableHashRevision)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  PIMAGE_NT_HEADERS v8; // rdi
  PIMAGE_NT_HEADERS v9; // rsi
  ULONG PointerToSymbolTable; // r8d
  PVOID v11; // r14
  _QWORD *Heap_0; // rax
  _QWORD *v13; // rbx
  int inserted; // eax
  HANDLE SectionHandle; // [rsp+50h] [rbp-30h] BYREF
  PVOID v17; // [rsp+58h] [rbp-28h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+48h] BYREF

  v17 = 0LL;
  SectionHandle = (HANDLE)-1LL;
  BaseAddress = 0LL;
  OutHeaders = 0LL;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  if ( ImportTableHashRevision == 1 )
  {
    v5 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( SectionHandle == (HANDLE)-1LL || v5 < 0 )
    {
      v4 = -1073741816;
      goto LABEL_28;
    }
    v6 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           &SectionOffset,
           &ViewSize,
           ViewShare,
           0,
           2u);
    NtClose(SectionHandle);
    if ( !BaseAddress || v6 < 0 )
    {
      v4 = -1073741799;
      goto LABEL_28;
    }
    v7 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 0, 1u, &v21, (PIMAGE_NT_HEADERS)&OutHeaders);
    if ( v7 >= 0 )
    {
      v8 = OutHeaders;
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
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
    v9 = OutHeaders;
    while ( v8 )
    {
      PointerToSymbolTable = v8->FileHeader.PointerToSymbolTable;
      if ( !PointerToSymbolTable || !v8->FileHeader.NumberOfSymbols )
        break;
      v11 = RtlAddressInSectionTable(v9, BaseAddress, PointerToSymbolTable);
      if ( !v11 )
      {
        v4 = -1073741685;
        goto LABEL_28;
      }
      Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
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
      if ( v9->OptionalHeader.Magic == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v13, BaseAddress, v9, v8);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                     v13,
                     BaseAddress,
                     v9,
                     v8);
      v4 = inserted;
      if ( inserted < 0 )
        goto LABEL_28;
      v8 = (PIMAGE_NT_HEADERS)((char *)v8 + 20);
    }
    v4 = ImportTablepHashCanonicalLists(v17, (__int64)Hash);
  }
  else
  {
    v4 = -1073741736;
  }
LABEL_28:
  ImportTablepFreeModuleSorted(v17);
  if ( BaseAddress
    && NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress) == -1073741755
    && RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return v4;
}
