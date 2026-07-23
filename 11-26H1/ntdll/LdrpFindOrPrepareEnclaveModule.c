/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800CEF9C
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125298 (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     LdrpFindLoadedEnclaveModule @ 0x1800CF098 (LdrpFindLoadedEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF104 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        __int64 a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  _UNICODE_STRING *v9; // rbx
  BOOLEAN v11; // al
  _UNICODE_STRING *v12; // rcx
  __int64 result; // rax

  v9 = a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString((PUNICODE_STRING)&stru_180170E18, a2, 1u) )
    {
      if ( a5 == *(_QWORD *)(a1 + 120) || a5 == *(_QWORD *)(a1 + 128) )
        v9 = (_UNICODE_STRING *)&unk_180170DF8;
    }
    else
    {
      v11 = RtlPrefixUnicodeString((PUNICODE_STRING)&stru_180170E08, v9, 1u);
      v12 = (_UNICODE_STRING *)&unk_180170DF8;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  result = LdrpFindLoadedEnclaveModule(a1, v9, a6);
  if ( (_DWORD)result == -1073741515 )
    return LdrpCreatePendingEnclaveModule(a1, v9, a4, 8LL, a3, a5, a6, a7);
  return result;
}
