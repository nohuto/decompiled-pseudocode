/*
 * XREFs of RtlAddressInSectionTable @ 0x180076C30
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18002FF90 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlCaptureImageExceptionValues @ 0x180079550 (RtlCaptureImageExceptionValues.c)
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013AF90 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B054 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  char v3; // r11
  PVOID result; // rax
  unsigned int i; // r9d
  ULONG v7; // edx

  v3 = 0;
  result = (char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader;
  for ( i = 0; i < NtHeaders->FileHeader.NumberOfSections; ++i )
  {
    v7 = *((_DWORD *)result + 3);
    if ( VirtualAddress >= v7 && VirtualAddress < *((_DWORD *)result + 4) + v7 )
    {
      v3 = 1;
      break;
    }
    result = (char *)result + 40;
  }
  if ( !v3 )
    result = 0LL;
  if ( result )
    return (char *)BaseOfImage
         + *((unsigned int *)result + 5)
         - (unsigned __int64)*((unsigned int *)result + 3)
         + VirtualAddress;
  return result;
}
