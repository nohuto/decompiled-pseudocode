/*
 * XREFs of NvmeAllocateContiguousMemoryWithPreferredNode @ 0x14008F590
 * Callers:
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     NvmeControllerAllocateExtendedCommand @ 0x140058910 (NvmeControllerAllocateExtendedCommand.c)
 *     CreateNVMePrpListBufferPool @ 0x1401192A8 (CreateNVMePrpListBufferPool.c)
 * Callees:
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void *__fastcall NvmeAllocateContiguousMemoryWithPreferredNode(
        unsigned int a1,
        _QWORD *a2,
        int a3,
        PHYSICAL_ADDRESS *a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ContiguousNodeMemory; // rax
  void *v14; // rdi
  int v15; // edx
  __int64 v16; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF
  PHYSICAL_ADDRESS v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v4 = a2[145];
  v6 = a2[175];
  v9 = a1;
  v10 = a2[174];
  v22 = a2[176];
  v21.QuadPart = 0LL;
  v19[0] = v6;
  if ( IsDmarEnabled((__int64)a2) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)(v4 + 8) + 272LL))(
                             v4,
                             v19,
                             &v22);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v9, v11, v12, v10, 4, a3);
  v14 = (void *)ContiguousNodeMemory;
  if ( ContiguousNodeMemory
    || a3 != 0x80000000
    && (!IsDmarEnabled((__int64)a2)
      ? (v16 = MmAllocateContiguousNodeMemory(v9, v19[0], v22, v10, 4, v15))
      : (v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, _QWORD, int, PHYSICAL_ADDRESS *))(*(_QWORD *)(v4 + 8) + 272LL))(
                 v4,
                 v19,
                 &v22,
                 a1,
                 0,
                 0LL,
                 v15,
                 &v21)),
        (v14 = (void *)v16) != 0LL) )
  {
    PhysicalAddress = v21;
    if ( !v21.QuadPart )
      PhysicalAddress = MmGetPhysicalAddress(v14);
  }
  else
  {
    PhysicalAddress = v21;
  }
  if ( a4 )
    *a4 = PhysicalAddress;
  return v14;
}
