/*
 * XREFs of MiInitializeDummyPages @ 0x140CF9670
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406EBF70 (MiFillPhysicalPagesWithPtes.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  unsigned int v0; // ebp
  __int64 *v1; // r14
  unsigned __int64 DemandZeroPte; // rbx
  __int64 *v3; // r13
  unsigned __int64 v4; // r15
  int v5; // edi
  int v6; // edx
  __int64 v7; // r8
  __int64 DummyPage; // r12
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v11; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 result; // rax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+18h]

  v0 = 0;
  v1 = &qword_140E361B0;
  v16 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(1);
  do
  {
    v3 = v1 - 6;
    v4 = -(__int64)(v0 != 0);
    v5 = 0;
    v18 = v4;
    do
    {
      DummyPage = MiAllocateDummyPage();
      v9 = 48 * DummyPage - 0x220000000000LL;
      *(_QWORD *)(v9 + 16) = DemandZeroPte;
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v6) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
        }
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v17);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        *(_DWORD *)(v9 + 32) &= ~0x200000u;
        *(_DWORD *)(v9 + 32) &= ~0x80000u;
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xFFF8FFFF | 0x50000;
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 32) & 0xFFFF0000 | 1;
        *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 0x201;
        MiIncreaseUsedPtesInPfn(v9, 512);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        v11 = 134217729;
        if ( v5 == 1 )
          v11 = 1;
        ValidPte = MiMakeValidPte(
                     (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                     *(v3 - 1),
                     v11);
        if ( (MiFlags & 0x8000000) == 0 && ((unsigned __int8)(1 << v5) & (unsigned __int8)byte_140E2D809) != 0 )
          ValidPte &= ~0x20uLL;
        if ( v5 == 2 )
          *v1 = ValidPte;
        MiFillPhysicalPagesWithPtes(DummyPage, ValidPte);
        v4 = v18;
      }
      else
      {
        MiFillPhysicalPages(0LL, DummyPage, v7, v4);
      }
      *v3 = DummyPage;
      ++v5;
      ++v3;
    }
    while ( v5 <= 3 );
    v1 += 7;
    v0 = v16 + 1;
    v16 = v0;
  }
  while ( v0 < 2 );
  v13 = MiAllocateDummyPage();
  result = MiFillPhysicalPages(0LL, v13, v14, 0LL);
  qword_140E361F0 = v13;
  return result;
}
