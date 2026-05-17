/*
 * XREFs of RtlAddressInSectionTable @ 0x18007F890
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180045A20 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     RtlCaptureImageExceptionValues @ 0x1800821B0 (RtlCaptureImageExceptionValues.c)
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B220 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x18013B2E4 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlAddressInSectionTable(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r11
  _DWORD *result; // rax
  unsigned int i; // r9d
  unsigned int v7; // edx

  v3 = 0;
  result = (_DWORD *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    v7 = result[3];
    if ( a3 >= v7 && a3 < result[4] + v7 )
    {
      v3 = 1;
      break;
    }
    result += 10;
  }
  if ( !v3 )
    result = 0LL;
  if ( result )
    return (_DWORD *)(a2 + (unsigned int)result[5] - (unsigned __int64)(unsigned int)result[3] + a3);
  return result;
}
