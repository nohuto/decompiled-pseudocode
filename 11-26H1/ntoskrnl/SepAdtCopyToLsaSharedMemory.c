/*
 * XREFs of SepAdtCopyToLsaSharedMemory @ 0x140B7102C
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x140728700 (ZwWriteVirtualMemory.c)
 */

__int64 __fastcall SepAdtCopyToLsaSharedMemory(HANDLE ProcessHandle, PVOID Buffer, SIZE_T BufferSize, PVOID *a4)
{
  __int64 v4; // rdi
  NTSTATUS v8; // ebx
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesWritten[2]; // [rsp+40h] [rbp-10h] BYREF

  v4 = (unsigned int)BufferSize;
  RegionSize = (unsigned int)BufferSize;
  BaseAddress = 0LL;
  NumberOfBytesWritten[0] = 0LL;
  v8 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v8 >= 0 )
  {
    v8 = ZwWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, (unsigned int)v4, NumberOfBytesWritten);
    if ( v8 >= 0 )
    {
      if ( v4 == NumberOfBytesWritten[0] )
      {
        *a4 = BaseAddress;
        return (unsigned int)v8;
      }
      v8 = -1073741823;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v8;
}
