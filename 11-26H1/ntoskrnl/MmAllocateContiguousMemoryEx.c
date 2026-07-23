/*
 * XREFs of MmAllocateContiguousMemoryEx @ 0x14034B050
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14058B358 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     DifMmAllocateContiguousMemoryExWrapper @ 0x140668E10 (DifMmAllocateContiguousMemoryExWrapper.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     MiConvertContiguousMemoryParameters @ 0x14034C228 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousMemoryEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        ULONG **BugCheckParameter2,
        int a8,
        int a9,
        __int64 *a10)
{
  ULONG *v10; // rsi
  int v11; // r12d
  unsigned int v12; // ebx
  ULONG *v13; // rax
  __int64 ContiguousMemory; // rax
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v16[0] = 0;
  v11 = (int)a1;
  v17 = 0LL;
  *a10 = 0LL;
  v18 = 0LL;
  if ( (a9 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  if ( !a8 || a8 == 1416523587 || a8 == 1953394499 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = MiConvertContiguousMemoryParameters(*a1, a2, a3, a4, a6, a5, (__int64)&v17);
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    v13 = MiPartitionObjectToPartition(BugCheckParameter2, 0, v16);
    v10 = v13;
    if ( v13 )
    {
      ContiguousMemory = MiAllocateContiguousMemory(v11, v17, DWORD2(v17), v18, DWORD2(v18), a5, (__int64)v13, a8, a9);
      *a10 = ContiguousMemory;
      v12 = ContiguousMemory == 0 ? 0xC000009A : 0;
    }
    else
    {
      v12 = -1073740640;
    }
  }
  if ( v16[0] )
    PsDereferencePartition(*((_QWORD *)v10 + 32), a2);
  return v12;
}
