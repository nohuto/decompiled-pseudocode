/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140CFFBC8
 * Callers:
 *     MiInitializeSystemVa @ 0x140D10EF8 (MiInitializeSystemVa.c)
 * Callees:
 *     KeFlushEntireTb @ 0x1405F3530 (KeFlushEntireTb.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140D01134 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiApplyDynamicRelocations @ 0x140D03FA8 (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  int v7; // ebp
  unsigned __int64 v8; // r14
  unsigned __int64 i; // r13
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140E37DC0;
  v5 = qword_140E37CF0[0];
  if ( (MiFlags & 0x10000) != 0 || qword_140E37DC0 != 0xFFFFF68000000000uLL )
  {
    v6 = ((unsigned __int64)qword_140E37DC0 >> 39) & 0x1FF;
    if ( 8 * v6 != 3944 )
    {
      *(_QWORD *)(8 * v6 - 0x90482413000LL) = MEMORY[0xFFFFF6FB7DBEDF68];
      if ( (MiFlags & 0x400000) == 0 )
        MEMORY[0xFFFFF6FB7DBEDF68] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      KeFlushEntireTb();
    }
    v7 = 0;
    v8 = v4;
    for ( i = 39LL; ; i -= 9LL )
    {
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( i >= 0xC )
        MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( (unsigned int)++v7 > 4 )
        break;
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = v4 + ((v8 >> 9) & 0x7FFFFFFFF8LL);
    }
    v1 = a1;
  }
  if ( (MiFlags & 0x10000) != 0 || v5 != 0xFFFFDE0000000000uLL )
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  result = MiPrepareScpFixupsForNtAndHal(v1);
  MmPteBase = v4;
  qword_140E013D0 = v4;
  return result;
}
