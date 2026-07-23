/*
 * XREFs of MiEnableNewPfns @ 0x1406ED114
 * Callers:
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 */

unsigned __int64 __fastcall MiEnableNewPfns(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // rbp
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  ULONG_PTR v7; // r15
  int v8; // r12d
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rbp
  unsigned int v15; // eax
  int v16; // edx
  unsigned __int8 v17; // si
  bool v18; // cf
  int v19; // r13d
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int8 CurrentIrql; // si
  char v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+B0h] [rbp+18h] BYREF
  BOOL v36; // [rsp+B8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 40);
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 32);
  v32 = v5;
  v29 = v2;
  v36 = (v2 & 0x100) == 0;
  v7 = v6 + v4;
  v8 = 2 - ((v2 & 0x100) != 0);
  v9 = 48 * v4 - 0x220000000000LL;
  if ( (v2 & 0x1800) == 0 )
  {
    if ( v4 >= v7 )
      goto LABEL_40;
    v19 = v36;
    v20 = (volatile signed __int32 *)(v9 + 24);
    v21 = v5;
    do
    {
      v22 = MiPageToNode(v4);
      v23 = MiDetermineNewPfnHeatState(v19, 3u, *(_QWORD *)(v21 + 16) + 56320LL * v22);
      v25 = v8;
      v8 |= 0x400u;
      v26 = v25 & 0xFFFFFBFF;
      if ( !v23 )
        v8 = v26;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != (_BYTE)v24 - 1 )
        __writecr8((unsigned int)(v24 - 1));
      if ( KiIrqlFlags )
      {
        LOBYTE(v24) = v24 - 1;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v24);
      }
      v35 = 0;
      while ( _interlockedbittestandset64(v20, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)v20 < 0 );
      }
      MiInsertPageInFreeOrZeroedList(v4);
      _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      ++v4;
      v20 += 12;
    }
    while ( v4 < v7 );
    goto LABEL_38;
  }
  v10 = (v2 & 0x800) != 0;
  v31 = v10;
  v11 = v6 >> *(int *)((char *)MiLargePageShifts + (-v10 & 4));
  if ( v11 )
  {
    v12 = 48 * v4 - 0x220000000000LL;
    v13 = 48 * *(__int64 *)((char *)MiPageSizes + (-v10 & 8));
    v14 = *(__int64 *)((char *)MiPageSizes + (-v10 & 8));
    do
    {
      v15 = MiPageToNode(v4);
      v35 = MiDetermineNewPfnHeatState(v36, v10, *(_QWORD *)(v32 + 16) + 56320LL * v15);
      v17 = KeGetCurrentIrql();
      if ( v17 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 2;
        KiRaiseIrqlProcessIrqlFlags(v17, v16);
      }
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v18 = v35 != 0;
      v35 = -v35;
      *(_QWORD *)(v9 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v9 + 16), v18 ? 0xFFFFFFFD : 0);
      if ( (*(_QWORD *)(v9 + 40) & 0x20000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertPossiblyBadPage(v4, v8);
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v4);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( v17 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
        __writecr8(v17);
      }
      v10 = v31;
      v12 += v13;
      v4 += v14;
      v9 = v12;
      --v11;
    }
    while ( v11 );
LABEL_38:
    LOBYTE(v2) = v29;
    v3 = a1;
  }
  v5 = v32;
LABEL_40:
  if ( (v2 & 8) != 0 && (*(_DWORD *)(v3 + 40) & 0x40000) == 0 )
    MiIncreaseCommitLimits(
      (unsigned int)&MiSystemPartition,
      *(_QWORD *)(v3 + 32),
      *(_QWORD *)(v3 + 32),
      *(_QWORD *)(v3 + 32),
      1,
      0LL);
  MiIncreaseCommitLimits(v5, *(_QWORD *)(v3 + 32), *(_QWORD *)(v3 + 32), a2, 1, 0LL);
  return MiReturnResident(v5, *(_QWORD *)(v3 + 32) - a2);
}
