/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18009CAD0
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  __int16 v9; // cx
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 2);
  v5 = *a2;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(_QWORD *)(a3 + 8);
  v10 = 0LL;
  result = RtlQueryEnvironmentVariable(a1, v6, v5 >> 1, v7, v3 >> 1, &v10);
  v9 = v10;
  if ( v10 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v9 = v10 - 1;
  *(_WORD *)a3 = 2 * v9;
  return result;
}
