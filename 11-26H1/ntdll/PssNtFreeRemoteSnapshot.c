/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x18010F160
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180159FD8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PssNtFreeRemoteSnapshot(HANDLE ProcessHandle, PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-B8h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+54h] [rbp-ACh]
  HANDLE v9; // [rsp+3B8h] [rbp+2B8h]
  HANDLE v10; // [rsp+3D0h] [rbp+2D0h]
  HANDLE v11; // [rsp+3E8h] [rbp+2E8h]
  HANDLE v12; // [rsp+400h] [rbp+300h]
  HANDLE v13; // [rsp+420h] [rbp+320h]
  HANDLE SourceHandle; // [rsp+440h] [rbp+340h]

  memset_thunk_772440563353939046(&Buffer, 0, 0x478uLL);
  BaseAddressa = 0LL;
  RegionSize = 0LL;
  result = ZwReadVirtualMemory(ProcessHandle, BaseAddress, &Buffer, 0x478uLL, &RegionSize);
  if ( result >= 0 )
  {
    if ( RegionSize == 1144 )
    {
      if ( Buffer == 1146311504 )
      {
        if ( (v8 & 1) == 0 || (v8 & 2) != 0 )
        {
          return -1073741637;
        }
        else
        {
          if ( (v8 & 4) != 0 )
          {
            BaseAddressa = BaseAddress[113];
            RegionSize = 0LL;
            ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, &RegionSize, 0x8000u);
          }
          if ( SourceHandle )
            ZwDuplicateObject(ProcessHandle, SourceHandle, 0LL, 0LL, 0, 0, 1u);
          if ( v13 )
            ZwDuplicateObject(ProcessHandle, v13, 0LL, 0LL, 0, 0, 1u);
          if ( v11 )
            ZwDuplicateObject(ProcessHandle, v11, 0LL, 0LL, 0, 0, 1u);
          if ( v12 )
            ZwDuplicateObject(ProcessHandle, v12, 0LL, 0LL, 0, 0, 1u);
          if ( v10 )
            ZwDuplicateObject(ProcessHandle, v10, 0LL, 0LL, 0, 0, 1u);
          if ( v9 )
            ZwDuplicateObject(ProcessHandle, v9, 0LL, 0LL, 0, 0, 1u);
          BaseAddressa = BaseAddress;
          RegionSize = 0LL;
          ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, &RegionSize, 0x8000u);
          return 0;
        }
      }
      else
      {
        return -1073741816;
      }
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
