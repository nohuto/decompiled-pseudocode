/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x1800B3D74
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B2290 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B3E84 (PsspCaptureVaSpaceInformation2.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(int a1, void *a2, int a3)
{
  NTSTATUS VirtualMemory; // r9d
  ULONG_PTR v4; // rax
  unsigned int v8; // ebx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-10h] BYREF

  VirtualMemory = 0;
  v4 = 0x4000LL;
  *(_OWORD *)BaseAddress = 0LL;
  *(_OWORD *)RegionSize = 0LL;
  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, (_DWORD)a2, (unsigned int)ZwQueryVirtualMemory, (_DWORD)a2, a3);
  while ( 1 )
  {
    RegionSize[0] = v4;
    if ( !v4 )
      break;
    BaseAddress[1] = 0LL;
    VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress[1], 0LL, RegionSize, 0x1000u, 4u);
    if ( VirtualMemory >= 0 )
    {
      LODWORD(RegionSize[1]) = 0;
      *((_DWORD *)BaseAddress[1] + 1) = 0;
      goto LABEL_7;
    }
    v4 = RegionSize[0] - 4096;
  }
  if ( VirtualMemory < 0 )
    return PsspCaptureVaSpaceInformation2(a1, (_DWORD)a2, (unsigned int)ZwQueryVirtualMemory, (_DWORD)a2, a3);
LABEL_7:
  BaseAddress[0] = a2;
  v8 = PsspCaptureVaSpaceInformation2(a1, (_DWORD)a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)BaseAddress, a3);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress[1], RegionSize, 0x8000u);
  return v8;
}
