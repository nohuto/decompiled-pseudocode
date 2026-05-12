/*
 * XREFs of StorAllocateContiguousMemory @ 0x140188AD0
 * Callers:
 *     RaidDmaAllocateUncachedExtension @ 0x140072258 (RaidDmaAllocateUncachedExtension.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1400AAC8C (StorPortGetAdditionalCrashDumpArea.c)
 *     NvmeDumpGetAdditionalCrashDumpArea @ 0x1401A2484 (NvmeDumpGetAdditionalCrashDumpArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorAllocateContiguousMemory(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  __int64 v9; // rsi
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  void *ContiguousNodeMemory; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v9 = *a1;
  v21 = a3;
  v19.QuadPart = 0LL;
  v20 = a4;
  if ( a6 )
  {
    v12 = -a6 & (a2 + a6 - 1);
    v13 = v12;
  }
  else
  {
    v13 = a5;
    v12 = a2;
  }
  if ( !*((_BYTE *)a1 + 8) || *((_DWORD *)a1 + 7) != 3 )
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v12, a3, a4, v13, 4, a7);
    v14 = (__int64)ContiguousNodeMemory;
    if ( ContiguousNodeMemory )
    {
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      goto LABEL_11;
    }
    return 3221225495LL;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, int, PHYSICAL_ADDRESS *))(*(_QWORD *)(v9 + 8) + 272LL))(
          v9,
          &v21,
          &v20,
          v12,
          0,
          0LL,
          a7,
          &v19);
  if ( !v14 )
    return 3221225495LL;
  PhysicalAddress = v19;
LABEL_11:
  v18 = (__int64)a8;
  a8[1] = PhysicalAddress;
  result = 0LL;
  *(_QWORD *)v18 = v14;
  *(_DWORD *)(v18 + 16) = a2;
  return result;
}
