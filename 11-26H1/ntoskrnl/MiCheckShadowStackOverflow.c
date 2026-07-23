/*
 * XREFs of MiCheckShadowStackOverflow @ 0x140AA45B0
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall MiCheckShadowStackOverflow(unsigned __int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // r14d
  void *v10; // rdx
  int v11; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  *a2 = -1073741571;
  v11 = 0;
  if ( (MiFlags & 0x4000000) != 0 )
  {
    v6 = MiObtainReferencedVadEx(a1, 2LL, &v11);
    if ( v6 )
    {
      if ( (MiReadVadFlags(v6) & 0x1080000) == 0x1080000 )
      {
        v8 = *(unsigned int *)(v7 + 24);
        v2 = 1;
        v9 = *(unsigned __int8 *)(v7 + 32);
        MiUnlockAndDereferenceVadShared(v7);
        RegionSize = 4096LL;
        v10 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
        BaseAddress = v10;
        if ( (unsigned __int64)v10 <= a1
          && (unsigned __int64)v10 > (v8 | ((unsigned __int64)v9 << 32)) << 12
          && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u) >= 0 )
        {
          *a2 = 275;
        }
      }
      else
      {
        MiUnlockAndDereferenceVadShared(v7);
      }
    }
  }
  return v2;
}
