/*
 * XREFs of LdrpFindOrPrepareEnclaveModule @ 0x1800D182C
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125528 (LdrpEnclaveAddDependentModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     LdrpFindLoadedEnclaveModule @ 0x1800D1928 (LdrpFindLoadedEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D1994 (LdrpCreatePendingEnclaveModule.c)
 */

__int64 __fastcall LdrpFindOrPrepareEnclaveModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  void *v9; // rbx
  bool v11; // al
  void *v12; // rcx
  __int64 result; // rax

  v9 = (void *)a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString(word_180171E20, a2, 1) )
    {
      if ( a5 == *(_QWORD *)(a1 + 120) || a5 == *(_QWORD *)(a1 + 128) )
        v9 = &unk_180171E00;
    }
    else
    {
      v11 = RtlPrefixUnicodeString(L"\b\n", (__int64)v9, 1);
      v12 = &unk_180171E00;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  result = LdrpFindLoadedEnclaveModule(a1, v9, a6);
  if ( (_DWORD)result == -1073741515 )
    return LdrpCreatePendingEnclaveModule(a1, (_DWORD)v9, a4, 8, a3, a5, (__int64)a6, a7);
  return result;
}
