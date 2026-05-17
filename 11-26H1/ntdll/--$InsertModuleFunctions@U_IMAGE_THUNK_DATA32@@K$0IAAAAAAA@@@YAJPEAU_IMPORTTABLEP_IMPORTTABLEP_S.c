/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B220
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     ImportTablepInsertFunctionSorted @ 0x18013B3AC (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  signed int *i; // rbx
  signed int v8; // r8d
  _DWORD *v9; // rax
  char *v10; // rdi
  _QWORD *Heap_0; // rax

  for ( i = RtlAddressInSectionTable(a3, a2, *a4); i; ++i )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 >= 0 )
    {
      v9 = RtlAddressInSectionTable(a3, a2, v8);
      if ( !v9 )
        return 3221225611LL;
      v10 = (char *)v9 + 2;
      if ( v9 == (_DWORD *)-2LL )
        return 3221225611LL;
      Heap_0 = (_QWORD *)RtlAllocateHeap_0();
      if ( !Heap_0 )
        return 3221225495LL;
      *Heap_0 = 0LL;
      Heap_0[1] = v10;
      ImportTablepInsertFunctionSorted(Heap_0, a1 + 16);
    }
  }
  return 0LL;
}
