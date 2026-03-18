/*
 * XREFs of MiCreateAcceleratorDescriptor @ 0x14070F408
 * Callers:
 *     MiAllocateAcceleratorDescriptor @ 0x1405319C8 (MiAllocateAcceleratorDescriptor.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiInitializeAcceleratorDescriptor @ 0x14070F72C (MiInitializeAcceleratorDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void *__fastcall MiCreateAcceleratorDescriptor(__int64 a1)
{
  __int64 PoolMm; // rax
  void *v3; // rbx

  PoolMm = ExAllocatePoolMm(64LL, *(_QWORD *)(a1 + 32) + 32LL, 1817143629, *(_DWORD *)(a1 + 24) | 0x80000000);
  v3 = (void *)PoolMm;
  if ( !PoolMm )
    return 0LL;
  if ( !MiInitializeAcceleratorDescriptor(a1, PoolMm) )
  {
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  return v3;
}
