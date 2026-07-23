/*
 * XREFs of PspReserveAndCommitUserShadowStack @ 0x1409EE630
 * Callers:
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x140B33888 (PspSetupUserFiberShadowStack.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspReserveAndCommitUserShadowStack(
        unsigned __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  int UserStack; // eax
  __int64 v8; // rbx
  NTSTATUS v9; // esi
  unsigned __int64 v10; // r14
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a1;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( a1 < 0x3000 || a3 > 0x40 || (a1 & 0xFFF) != 0 || a2 < 0x1000 || (a2 & 0xFFF) != 0 || a2 > a1 - 0x2000 )
    return 3221225485LL;
  v14[0] = 0LL;
  UserStack = MmAllocateUserStack((unsigned int)v14, 0, (unsigned int)&v15, a3, 1);
  v8 = v14[0];
  v9 = UserStack;
  if ( UserStack >= 0 )
  {
    v10 = v15;
    RegionSize = a2;
    BaseAddress = (PVOID)(v15 + v14[0] - a2 - 4096);
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 2u);
    if ( v9 >= 0 )
    {
      if ( v10 - a2 - 0x2000 < 0x1000
        || (BaseAddress = (char *)BaseAddress - 4096,
            RegionSize = 4096LL,
            v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u),
            v9 >= 0) )
      {
        *a5 = v8 + v10 - 4096;
        *a4 = v8;
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
  {
    v14[1] = v8;
    v14[0] = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  return (unsigned int)v9;
}
