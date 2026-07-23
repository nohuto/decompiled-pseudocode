/*
 * XREFs of MiCommitPagefileBackedSection @ 0x14099A540
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r13
  int v6; // r12d
  unsigned __int8 VadFlags; // al
  __int64 ProtoPteAddress; // rbp
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 result; // rax
  ULONG_PTR i; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 44);
  v14 = v2;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  VadFlags = MiReadVadFlags(a2);
  if ( (v6 | MmCompatibleProtectionMask[VadFlags >> 5] | 0x700) != (MmCompatibleProtectionMask[VadFlags >> 5] | 0x700) )
    return 3221225550LL;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v4 >> 12, 0, (unsigned int **)&BugCheckParameter2);
  MiGetProtoPteAddress(a2, v2 >> 12, 0, &v13);
  if ( MiVadPureReserve(a2) )
  {
    for ( i = BugCheckParameter2; ; i = *(_QWORD *)(i + 16) )
    {
      result = MiAddViewsForSection((volatile LONG **)i, 1uLL, 4, v9);
      if ( (int)result < 0 )
        break;
      if ( (unsigned int *)i == v13 )
      {
        if ( !ProtoPteAddress )
          ProtoPteAddress = MiGetProtoPteAddress(a2, v4 >> 12, 0, (unsigned int **)&BugCheckParameter2);
        v2 = v14;
        goto LABEL_3;
      }
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(BugCheckParameter2, ProtoPteAddress) )
      return MiSetProtectionOnSection(*(_QWORD *)(a1 + 88), a2, v4, v2, v6, 0, &BugCheckParameter2, 0LL);
    else
      return 3221225773LL;
  }
  return result;
}
