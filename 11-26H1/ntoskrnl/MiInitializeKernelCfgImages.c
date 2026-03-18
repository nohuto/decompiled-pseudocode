/*
 * XREFs of MiInitializeKernelCfgImages @ 0x140CFEAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MiProcessKernelCfgImage @ 0x1404F8C10 (MiProcessKernelCfgImage.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC705C (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC7290 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B05B58 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiInitializeKernelCfgImages(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int KernelCfgBitmapPageTables; // eax
  unsigned __int64 v7; // rdx
  int Config; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x2000) != 0 )
      return 0LL;
    v7 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( v7 == PsNtosImageBase )
    {
      RtlImageNtHeaderEx(1, v7, 0LL, &v9);
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
