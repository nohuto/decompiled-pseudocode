/*
 * XREFs of LdrpUnmapModule @ 0x1801199AC
 * Callers:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800DB6CC (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48), a2);
    if ( (*(_DWORD *)(a1 + 104) & 0x200000) != 0 )
      RtlpInsertOrRemoveScpCfgFunctionTable(*(_QWORD *)(a1 + 48), a2, 0);
    result = NtUnmapViewOfSection(-1LL, *(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
