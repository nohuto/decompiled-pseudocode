/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1800790B4
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x1800127C4 (EtwpAllocateFreeBuffers.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
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
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 188);
  v3 = *(_DWORD *)(a1 + 200);
  v11 = 0LL;
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
  v10 = v3 * v7;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v10, 0x2000, 4) < 0 )
    return 8LL;
  v9 = *(_DWORD *)(a1 + 204);
  *(_QWORD *)(a1 + 408) = v11;
  if ( (unsigned int)EtwpAllocateFreeBuffers(a1, v9) != v9 )
  {
    v10 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 408, &v10, 0x8000LL);
    *(_QWORD *)(a1 + 408) = 0LL;
    return 8LL;
  }
  return 0LL;
}
