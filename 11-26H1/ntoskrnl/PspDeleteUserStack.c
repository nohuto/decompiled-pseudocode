/*
 * XREFs of PspDeleteUserStack @ 0x140A04714
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+40h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  KiStackAttachProcess(a1, 0, (__int64)v9);
  if ( (*a4 & 2) != 0 )
  {
    BaseAddress = *(PVOID *)(a3 + 32);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a4 & 4) != 0 )
  {
    RegionSize = *(_QWORD *)(a3 + 56);
    BaseAddress = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  if ( (*a4 & 8) != 0 )
  {
    RegionSize = *(_QWORD *)(a3 + 64);
    BaseAddress = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  return KiUnstackDetachProcess((__int64)v9, 0);
}
