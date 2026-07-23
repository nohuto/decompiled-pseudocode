/*
 * XREFs of MiMakeLargePageTable @ 0x14052D62C
 * Callers:
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r15
  volatile __int64 *v5; // rsi
  unsigned int v6; // r9d
  __int64 v7; // r10
  unsigned __int64 LeafVa; // r14
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // r15
  ULONG_PTR ValidPte; // rcx
  volatile __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp+10h]
  unsigned __int64 ContainingPageTable; // [rsp+98h] [rbp+20h]

  BugCheckParameter4 = a2;
  v3 = *(_QWORD *)(a1 + 184);
  v26 = v3;
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) == 0 || a3 != 2 && a3 != 1 )
    return 0LL;
  v5 = (volatile __int64 *)a2;
  LeafVa = MiGetLeafVa(a2);
  v9 = v6;
  v10 = MiPageSizes[v6] << 12;
  if ( ((v10 - 1) & LeafVa) != 0 )
    return 0LL;
  if ( v10 + LeafVa - 1 > *(_QWORD *)(v7 + 48) )
    return 0LL;
  v11 = (__int64 *)(v3 + 24LL * v6);
  v12 = *v11;
  if ( *v11 == 0x3FFFFFFFFFLL )
  {
    if ( !v6 )
      return 0LL;
    MiDemotePfnListChain(v3, v6);
    v12 = *v11;
    if ( *v11 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  MiSimpleUnlinkPageEx(v3 + 24 * v9, v12);
  v13 = 48 * v12 - 0x220000000000LL;
  ContainingPageTable = MiGetContainingPageTable(BugCheckParameter4);
  v14 = 48 * ContainingPageTable - 0x220000000000LL;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  *(_QWORD *)(v13 + 8) = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v16 = ContainingPageTable;
  *(_QWORD *)(v13 + 16) = DemandZeroPte;
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(v13 + 32) & 0xFFF8FFFF | 0x60000;
  MiSetPfnContainingFrame(48 * v12 - 0x220000000000LL, v16);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = 0;
  v19 = 0LL;
  if ( MiPtesToSupportLargePageSizes[v9] )
  {
    v20 = MiPtesToSupportLargePageSizes[v9];
    do
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v5, v12, -2080374780);
      v22 = *v5;
      if ( (*v5 & 1) != 0 )
      {
        MiTransformValidPteInPlace(v5, (int)v5, ValidPte, 96, a3);
      }
      else
      {
        *v5 = ValidPte;
        v23 = v18 + 1;
        if ( v22 )
          v23 = v18;
        v18 = v23;
        v17 = v19 + 1;
        if ( (v22 & 0xC00) == 0x800 )
          v17 = v19;
        v19 = v17;
      }
      ++v12;
      ++v5;
      --v20;
    }
    while ( v20 );
    v3 = v26;
  }
  if ( v19 | v18 )
  {
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( v19 )
    {
      v24 = *(_QWORD *)(v14 + 24);
      v17 = v24 + v19;
      *(_QWORD *)(v14 + 24) = (v24 + v19) ^ (v24 ^ (v24 + v19)) & 0xC000000000000000uLL;
    }
    if ( v18 )
      MiIncreaseUsedPtes(v17, BugCheckParameter4, v18, 3);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  result = 1LL;
  *(_QWORD *)(v3 + 112) += MiPageSizes[v9];
  return result;
}
