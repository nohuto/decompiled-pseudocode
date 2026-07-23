/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1800678D4
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x18005DEF4 (EtwpAllocateFreeBuffers.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  unsigned int v9; // ebx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 188);
  v3 = *(_DWORD *)(a1 + 200);
  BaseAddress = 0LL;
  if ( v3 < 2 * v1 )
    v3 = 2 * v1 + 22;
  v4 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 200) = v3;
  if ( v4 < 2 * v1 || v4 > v3 )
    v4 = 2 * v1;
  *(_DWORD *)(a1 + 204) = v4;
  if ( v3 > 0x400 )
  {
    *(_DWORD *)(a1 + 200) = 1024;
    v3 = 1024;
  }
  if ( v4 > 0x400 )
  {
    *(_DWORD *)(a1 + 204) = 1024;
    v4 = 1024;
  }
  v5 = *(_DWORD *)(a1 + 352);
  if ( v5 )
  {
    v6 = v3 + ~v1;
    if ( v5 > v6 )
      *(_DWORD *)(a1 + 352) = v6;
  }
  if ( (*(_DWORD *)(a1 + 308) & 0x400) != 0 )
  {
    *(_DWORD *)(a1 + 200) = v4;
    v3 = v4;
  }
  v7 = *(unsigned int *)(a1 + 192);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < v7 )
    return 534LL;
  RegionSize = v3 * v7;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
    return 8LL;
  v9 = *(_DWORD *)(a1 + 204);
  *(_QWORD *)(a1 + 408) = BaseAddress;
  if ( (unsigned int)EtwpAllocateFreeBuffers(a1, v9) != v9 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 408), &RegionSize, 0x8000u);
    *(_QWORD *)(a1 + 408) = 0LL;
    return 8LL;
  }
  return 0LL;
}
