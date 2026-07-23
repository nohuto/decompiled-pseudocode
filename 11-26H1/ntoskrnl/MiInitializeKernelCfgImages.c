/*
 * XREFs of MiInitializeKernelCfgImages @ 0x140D04E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MiProcessKernelCfgImage @ 0x1404F2220 (MiProcessKernelCfgImage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC8E80 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiInitializeKernelCfgImages(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int KernelCfgBitmapPageTables; // eax
  PVOID v7; // rdx
  int Config; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x2000) != 0 )
      return 0LL;
    v7 = *(PVOID *)(BugCheckParameter2 + 48);
    if ( v7 == PsNtosImageBase )
    {
      RtlImageNtHeaderEx(1u, v7, 0LL, &OutHeaders);
      Config = MiMarkKernelImageCfgBits(BugCheckParameter2, 1);
      *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2000u;
    }
    else
    {
      Config = MiProcessKernelCfgImageLoadConfig(BugCheckParameter2);
      if ( Config < 0 )
        goto LABEL_13;
      Config = MiProcessKernelCfgImage(BugCheckParameter2, 0, 0LL);
    }
    if ( Config >= 0 )
      return 0LL;
LABEL_13:
    KeBugCheckEx(0x422u, Config, BugCheckParameter2, 0LL, 0LL);
  }
  if ( _bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
  {
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  *(_QWORD *)(BugCheckParameter2 + 48),
                                  *(unsigned int *)(BugCheckParameter2 + 64),
                                  0LL,
                                  a4);
    if ( KernelCfgBitmapPageTables < 0 )
      KeBugCheckEx(0x422u, KernelCfgBitmapPageTables, BugCheckParameter2, 1uLL, 0LL);
    *(_DWORD *)(BugCheckParameter2 + 104) |= 0x2100u;
  }
  return 0LL;
}
