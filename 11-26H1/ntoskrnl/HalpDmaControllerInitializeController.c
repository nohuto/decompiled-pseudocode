/*
 * XREFs of HalpDmaControllerInitializeController @ 0x14058F088
 * Callers:
 *     HalpDmaInitializeControllers @ 0x14058E0AC (HalpDmaInitializeControllers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerInitializeController(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  void *ContiguousNodeMemory; // rax

  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2);
  v4 = *(_DWORD *)(a1 + 76);
  if ( v4 < 0x40 )
    v5 = (1LL << v4) - 1;
  else
    LODWORD(v5) = -1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v8 = 160 * i;
    result = *(unsigned int *)(v7 + 160 * i + 120);
    if ( (_DWORD)result )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory((unsigned int)result, 0, v5, 0, 516, 0x80000000);
      *(_QWORD *)(v7 + v8 + 128) = ContiguousNodeMemory;
      *(PHYSICAL_ADDRESS *)(v7 + v8 + 136) = MmGetPhysicalAddress(ContiguousNodeMemory);
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), (unsigned int)i);
    }
  }
  return result;
}
