/*
 * XREFs of MiForcedTrim @ 0x1403C3240
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140532044 (MiPreUnlockWorkingSetShared.c)
 * Callees:
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     MiGetTrimPageCandidateCount @ 0x1403C31EC (MiGetTrimPageCandidateCount.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 *     MiComputeForceTrimAmount @ 0x1403C3B44 (MiComputeForceTrimAmount.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 */

unsigned __int64 __fastcall MiForcedTrim(__int64 a1, char a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // bp
  __int64 AvailablePagesForTrimPass; // rax
  unsigned __int64 v11; // rax
  int v12; // r9d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 TrimPageCandidateCount; // rax
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  result = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(result + 32);
  if ( v4 > v7 )
  {
    v8 = v4 - v7;
    v9 = 0;
    v16 = 0;
    AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(v5);
    v11 = MiComputeForceTrimAmount(a1, v8, AvailablePagesForTrimPass);
    if ( v11 < 0x200
      || (TrimPageCandidateCount = MiGetTrimPageCandidateCount(a1, v11, (char *)&v16),
          v9 = v16,
          v13 = TrimPageCandidateCount,
          v8 < TrimPageCandidateCount) )
    {
      v13 = 0LL;
    }
    else if ( TrimPageCandidateCount < 0x200 )
    {
      v13 = 0LL;
    }
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0x10) != 0
      && (result = MiComputeHardTrimSize(*(_QWORD *)(a1 + 128), 0x55u, 0x78u), v8 > result)
      && v8 - result >= 0x10
      && v13 < v8 - result )
    {
      v13 = v8 - result;
      v9 = 0;
    }
    else if ( !v13 )
    {
      return result;
    }
    v14 = v8;
    if ( v13 <= v8 )
      v14 = v13;
    LOBYTE(v12) = a2;
    if ( v14 > 0x200 )
      LODWORD(v14) = 512;
    return MiTrimWorkingSet(a1, 0, (int)v8 - (int)v14, v12, v9, 89);
  }
  return result;
}
