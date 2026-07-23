/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x1403679D0
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // r15
  unsigned __int64 ContainingPageTable; // r14
  unsigned __int64 DemandZeroPte; // rbx
  unsigned __int64 ValidPte; // r12
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rsi
  unsigned int v12; // ebp
  signed __int64 v13; // rcx
  signed __int64 v14; // rdx
  signed __int64 i; // rax
  __int64 v16; // rbx
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v4);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  ValidPte = MiMakeValidPte(
               (unsigned __int64)v4,
               0LL,
               (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F | ((*(_WORD *)(a1 + 100) & 0x800 | 0xFFFA0000) << 12));
  if ( _bittest16((const signed __int16 *)(a1 + 100), 8u) )
  {
    v12 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    v8 = MiUnlinkPageChainHead(a1 + 16);
    v11 = (v8 - v10) / 48;
    if ( (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
    {
      v12 = 0;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = DemandZeroPte;
      v12 = 1;
      *(_QWORD *)(v8 + 40) &= v9;
    }
    v13 = *(_QWORD *)(v8 + 40);
    v14 = v13;
    for ( i = v13; ; v14 = i )
    {
      i = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v8 + 40),
            ContainingPageTable ^ (ContainingPageTable ^ v14) & 0xFFFFFF0000000000uLL,
            i);
      if ( v13 == i )
        break;
      v13 = i;
    }
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_QWORD *)(v8 + 40) &= ~0x8000000000000000uLL;
    *(_QWORD *)v8 = 0LL;
    if ( (*(_DWORD *)(v8 + 32) & 0xC00000) != 0x400000 )
      MiChangePageAttribute(v8, 1u);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFF0000 | 1;
    *(_QWORD *)(v8 + 8) = v4;
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x60000;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *v4 = (v11 << 12) ^ (ValidPte ^ (v11 << 12)) & 0xFFF0000000000FFFuLL;
  v16 = 48 * ContainingPageTable;
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(__int64 *)(v16 - 0x220000000000LL + 24) < 0 );
  }
  *(_QWORD *)(v16 - 0x220000000000LL + 24) = (*(_QWORD *)(v16 - 0x220000000000LL + 24) + 1LL) ^ (*(_QWORD *)(v16 - 0x220000000000LL + 24) ^ (*(_QWORD *)(v16 - 0x220000000000LL + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
