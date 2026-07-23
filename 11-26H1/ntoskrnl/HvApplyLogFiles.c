/*
 * XREFs of HvApplyLogFiles @ 0x140AEE6F0
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpApplyLegacyLogFile @ 0x140868C18 (HvpApplyLegacyLogFile.c)
 *     HvpApplyIncrementalLogFile @ 0x140ADD93C (HvpApplyIncrementalLogFile.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvApplyLogFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        ULONG_PTR a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 i; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // r8
  __int64 v15; // rdx
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a4 + 60); i = (unsigned int)(i + 1) )
  {
    v13 = 24LL * *(unsigned int *)(a4 + 4 * i + 52);
    v14 = (_DWORD *)(a4 + 4 + v13);
    v15 = a2 + v13;
    if ( (*v14 & 2) != 0 )
      result = HvpApplyLegacyLogFile(a1, v15, (__int64)v14, a6, a7, a8, a9);
    else
      result = HvpApplyIncrementalLogFile((__int64)a1, v15, (__int64)v14);
    if ( (int)result < 0 )
      return result;
  }
  a1[1] = *(_DWORD *)(a4 + 80);
  a1[2] = *(_DWORD *)(a4 + 80);
  a1[127] = HvpHeaderCheckSum(a1);
  return 1073741833LL;
}
