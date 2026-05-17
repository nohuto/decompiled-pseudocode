/*
 * XREFs of LdrpFreeUnicodeString @ 0x1800E04A0
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpAppCompatRedirect @ 0x180085190 (LdrpAppCompatRedirect.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = RtlpSysVolFree(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
