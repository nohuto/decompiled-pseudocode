/*
 * XREFs of MiFinishPageTableForLargePage @ 0x1402A1A9C
 * Callers:
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

void __fastcall MiFinishPageTableForLargePage(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 *v4; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  bool v8; // zf
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v3
      || (MiIncreaseUsedPtes(a1, *(_QWORD *)(a1 + 8), v3, 6LL),
          v7 = *(unsigned int *)(a1 + 24),
          v8 = *(_QWORD *)(a1 + 16) == v7,
          *(_QWORD *)(a1 + 16) -= v7,
          *(_DWORD *)(a1 + 24) = 0,
          !v8) )
    {
      v4 = *(unsigned __int64 **)(a1 + 8);
      PteShadow = *v4;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v4, *v4);
      v6 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL);
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 - 0x220000000000LL + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(__int64 *)(v6 - 0x220000000000LL + 24) < 0 );
      }
      *(_QWORD *)(v6 - 0x220000000000LL + 24) = (*(_QWORD *)(v6 - 0x220000000000LL + 24) + *(_QWORD *)(a1 + 16)) ^ (*(_QWORD *)(v6 - 0x220000000000LL + 24) ^ (*(_QWORD *)(v6 - 0x220000000000LL + 24) + *(_QWORD *)(a1 + 16))) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v6 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockPageTableInternal(*(_QWORD *)a1, v2);
}
