/*
 * XREFs of ImportTablepInsertFunctionSorted @ 0x18013B11C
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013AF90 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B054 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 * Callees:
 *     _stricmp @ 0x1801285A0 (_stricmp.c)
 */

int __fastcall ImportTablepInsertFunctionSorted(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // rax
  __int64 **v5; // rsi
  __int64 *i; // rdi

  if ( *a2 && (LODWORD(v4) = stricmp((const char *)(*a2)[1], *(const char **)(a1 + 8)), (int)v4 <= 0) )
  {
    v5 = *a2;
    for ( i = **a2; i; i = (__int64 *)*i )
    {
      LODWORD(v4) = stricmp((const char *)i[1], *(const char **)(a1 + 8));
      if ( (int)v4 >= 0 )
      {
        *(_QWORD *)a1 = i;
        goto LABEL_8;
      }
      v5 = (__int64 **)i;
    }
    *(_QWORD *)a1 = 0LL;
LABEL_8:
    *v5 = (__int64 *)a1;
  }
  else
  {
    v4 = *a2;
    *(_QWORD *)a1 = *a2;
    *a2 = (__int64 **)a1;
  }
  return (int)v4;
}
