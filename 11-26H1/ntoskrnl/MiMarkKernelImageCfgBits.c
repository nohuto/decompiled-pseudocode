/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140AC8C4C
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404F2220 (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfgImages @ 0x140D04E50 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x1404DE250 (RtlLookupImageSectionByName.c)
 *     MmGetLoadedModuleDriverProxyEndpointTableAddress @ 0x1406EBC98 (MmGetLoadedModuleDriverProxyEndpointTableAddress.c)
 *     MiAcquireKernelCfgLock @ 0x140773CD8 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x140AC8E1C (MiReleaseKernelCfgLock.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC8E80 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiCompleteSecureDriverLoad @ 0x140AC8F74 (MiCompleteSecureDriverLoad.c)
 *     VslUnloadSecureDriver @ 0x140AC9970 (VslUnloadSecureDriver.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, int a2)
{
  bool v3; // si
  PIMAGE_NT_HEADERS v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r9
  int KernelCfgBitmapPageTables; // ebx
  unsigned int QuantumTarget; // ebx
  unsigned __int64 LoadedModuleDriverProxyEndpointTableAddress; // rax
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // r8
  ULONG Size; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  Size = 0;
  if ( !a2 )
  {
    if ( (MiFlags & 0x10000) != 0 )
      return (unsigned int)VslUnloadSecureDriver(*(_QWORD *)(a1 + 48));
    else
      return 0;
  }
  v3 = 0;
  v4 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
  if ( v4 )
    v3 = RtlLookupImageSectionByName((__int64)v4, ".shsept") != 0LL;
  MiAcquireKernelCfgLock(v6, v5, v7, v8);
  KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                *(_QWORD *)(a1 + 48),
                                *(unsigned int *)(a1 + 64),
                                1LL,
                                v9);
  if ( KernelCfgBitmapPageTables < 0 || !v3 )
    goto LABEL_8;
  if ( (stru_140E366D8.QuantumTarget & 0x200000000LL) != 0 )
  {
    QuantumTarget = stru_140E366D8.QuantumTarget;
    LoadedModuleDriverProxyEndpointTableAddress = MmGetLoadedModuleDriverProxyEndpointTableAddress(a1);
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  LoadedModuleDriverProxyEndpointTableAddress,
                                  QuantumTarget,
                                  1LL,
                                  v13);
LABEL_8:
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables < 0 )
      return (unsigned int)KernelCfgBitmapPageTables;
    goto LABEL_9;
  }
  MiReleaseKernelCfgLock();
LABEL_9:
  KernelCfgBitmapPageTables = MiCompleteSecureDriverLoad(a1);
  if ( KernelCfgBitmapPageTables >= 0 )
  {
    v14 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
    v15 = v14;
    if ( v14 && Size >= 0xB0 && v14[21] )
    {
      v16 = 0;
      while ( 1 )
      {
        v16 = MiSnapDriverRange(a1, v16, 2, 0, (__int64)&v20, (__int64)&v21);
        if ( v20 )
        {
          v17 = v15[20];
          if ( v17 >= v20 << 25 >> 16 && v17 <= ((v21 << 25) | 0xFFF0000) >> 16 )
            break;
        }
        if ( !v16 )
          return (unsigned int)KernelCfgBitmapPageTables;
      }
      *(_DWORD *)(a1 + 104) |= 0x800u;
    }
    else
    {
      *(_DWORD *)(a1 + 104) |= 0x100u;
    }
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
