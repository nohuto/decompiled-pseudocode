/*
 * XREFs of MiJoinHugeContext @ 0x140358884
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x14035A1D0 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     MiCompleteJoinHugeContext @ 0x14035A938 (MiCompleteJoinHugeContext.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 */

__int64 __fastcall MiJoinHugeContext(__int64 a1, __int64 a2, int a3)
{
  ULONG ClearBitsAndSet; // r14d
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = 0LL;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 88), 1u, 0);
  if ( ClearBitsAndSet == -1 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(a1 + 68) )
  {
    v12 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (*(_QWORD *)(a1 + 168) & 0x3FFFFFLL);
    *(_QWORD *)&v13 = v12;
    MiLockHugePfnAtDpc(v12);
    if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
      goto LABEL_4;
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4 * ((((v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    return 0LL;
  }
  v8 = 48 * v7 - 0x220000000000LL;
  BYTE8(v13) = 1;
  *(_QWORD *)&v13 = v8;
  v9 = MiSafeLockPageAtDpc(v7);
  v10 = *(_QWORD *)(a1 + 24);
  if ( (v10 & 1) != 0 )
  {
    if ( v9 != 17 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
LABEL_4:
  if ( !a3 )
  {
    ++*(_DWORD *)(a1 + 316);
    *(_QWORD *)(a2 + 328) = a1;
  }
  MiCompleteJoinHugeContext(v10, a2, &v13, ClearBitsAndSet);
  return 1LL;
}
