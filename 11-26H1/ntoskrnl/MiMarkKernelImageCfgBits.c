/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140AC705C
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404F8C10 (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfgImages @ 0x140CFEAB0 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     RtlLookupImageSectionByName @ 0x1404E4CB0 (RtlLookupImageSectionByName.c)
 *     MmGetLoadedModuleDriverProxyEndpointTableAddress @ 0x1406E6FE8 (MmGetLoadedModuleDriverProxyEndpointTableAddress.c)
 *     MiAcquireKernelCfgLock @ 0x140770CD8 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x140AC722C (MiReleaseKernelCfgLock.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC7290 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiCompleteSecureDriverLoad @ 0x140AC7384 (MiCompleteSecureDriverLoad.c)
 *     VslUnloadSecureDriver @ 0x140AC7D80 (VslUnloadSecureDriver.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, int a2)
{
  bool v3; // si
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r9
  int KernelCfgBitmapPageTables; // ebx
  unsigned int QuantumTarget; // ebx
  unsigned __int64 LoadedModuleDriverProxyEndpointTableAddress; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // r8
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v19 = 0;
  if ( !a2 )
  {
    if ( (MiFlags & 0x10000) != 0 )
      return (unsigned int)VslUnloadSecureDriver(*(_QWORD *)(a1 + 48));
    else
      return 0;
  }
  v3 = 0;
  v4 = RtlImageNtHeader(*(_QWORD *)(a1 + 48));
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
  if ( (stru_140E36558.QuantumTarget & 0x200000000LL) != 0 )
  {
    QuantumTarget = stru_140E36558.QuantumTarget;
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
    v14 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xAu, &v19);
    v15 = v14;
    if ( v14 && v19 >= 0xB0 && *(_QWORD *)(v14 + 168) )
    {
      v16 = 0;
      while ( 1 )
      {
        v16 = MiSnapDriverRange(a1, v16, 2, 0, (__int64)&v20, (__int64)&v21);
        if ( v20 )
        {
          v17 = *(_QWORD *)(v15 + 160);
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
