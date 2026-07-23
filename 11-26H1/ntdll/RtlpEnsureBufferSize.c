/*
 * XREFs of RtlpEnsureBufferSize @ 0x180099CB0
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_RespectDotLocal @ 0x180098C80 (sxsisol_RespectDotLocal.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180099740 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6190 (RtlNtPathNameToDosPathName.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID Atom; // rax
  PVOID v7; // rsi
  __int64 result; // rax

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  Atom = RtlpAllocateAtom(a3);
  v7 = Atom;
  if ( !Atom )
    return 3221225495LL;
  if ( (v5 & 1) == 0 )
    memmove(Atom, *(const void **)a2, *(_QWORD *)(a2 + 16));
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    RtlpSysVolFree(*(PVOID *)a2);
  *(_QWORD *)a2 = v7;
  result = 0LL;
  *(_QWORD *)(a2 + 16) = a3;
  return result;
}
