/*
 * XREFs of VmpPrefetchForVirtualFault @ 0x14082313C
 * Callers:
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 * Callees:
 *     MmPrefetchVirtualAddresses @ 0x140A57CE0 (MmPrefetchVirtualAddresses.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchForVirtualFault(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  __int64 Pool2; // rax
  void *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a3;
    v9 = (_QWORD *)((Pool2 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)Pool2 = 1LL;
    *(_DWORD *)(Pool2 + 4) &= 0xFFFFFFF9;
    *(_QWORD *)(Pool2 + 24) = v9;
    v10 = a1 + 16 * a3;
    *(_QWORD *)(Pool2 + 8) = -1LL;
    while ( a1 < v10 )
    {
      v11 = *a2++;
      *v9 = v11 << 12;
      v9 += 2;
      *(v9 - 1) = *(_QWORD *)(a1 + 8) << 12;
      a1 += 16LL;
    }
    v8 = MmPrefetchVirtualAddresses(v7);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
