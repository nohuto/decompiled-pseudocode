/*
 * XREFs of MiCheckSecuredVad @ 0x140A033E8
 * Callers:
 *     MiFindPlaceholderVadToReplace @ 0x1404C5AC8 (MiFindPlaceholderVadToReplace.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MiCheckResetDiscardVirtualMemory @ 0x140AAF800 (MiCheckResetDiscardVirtualMemory.c)
 * Callees:
 *     MiComparePteProtections @ 0x1402E8A6C (MiComparePteProtections.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 */

__int64 __fastcall MiCheckSecuredVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  unsigned int VadFlags; // eax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  unsigned __int64 i; // rsi
  __int64 v18; // rax
  int v19; // edx
  char v20; // dl
  bool v21; // cc
  __int64 result; // rax

  VadFlags = MiReadVadFlags(a1);
  v12 = VadFlags;
  if ( (VadFlags & 0x80000) != 0 && (VadFlags & 0x200000) != 0 )
    v11 = MiGetVadPageSize(VadFlags) << 12;
  v13 = 0;
  v14 = a2 + v10 - 1;
  v15 = a2 & ~(v11 - 1);
  v16 = (~(v11 - 1) & (v11 + v14)) - 1;
  if ( v15 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12
    || v16 > (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) )
  {
    return 3221225541LL;
  }
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 8) == 2 && i != a6 )
    {
      v18 = PfpPartitionToParent(i + 24);
      if ( ((v18 & 0x40) == 0 || a5 == 1) && v15 <= *(_QWORD *)(i + 32) && v16 >= (v18 & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( a4 >= 0x55 && (v18 & 8) != 0 )
          return 3221225541LL;
        if ( (v18 & 0x100) != 0 && (v12 & 0x1080000) == 0x1080000 )
        {
          if ( (a4 | 0x10) != 0x11
            || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
            || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v14 >> 12 )
          {
            return 3221225541LL;
          }
        }
        else if ( (v18 & 4) != 0 )
        {
          if ( a4 < 0x55 )
          {
            if ( (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFFFFFLL) == 0x7FFE0
               || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 == qword_140E2D7B8
               && qword_140E2D7B8)
              && (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
            {
              return 3221225541LL;
            }
            result = MiComparePteProtections(a1, a2, v14, a4, 1);
            v13 = result;
            if ( (int)result < 0 )
              return result;
          }
        }
        else
        {
          if ( (v19 & 0xFFFFFFF8) == 0x10 )
            return 3221225541LL;
          v20 = *((_BYTE *)&MiReadWrite + (v19 & 7));
          if ( (v18 & 1) != 0 )
          {
            v21 = v20 < 10;
          }
          else
          {
            if ( (v18 & 2) == 0 )
              continue;
            v21 = v20 < 11;
          }
          if ( v21 )
            return 3221225541LL;
        }
      }
    }
  }
  return v13;
}
