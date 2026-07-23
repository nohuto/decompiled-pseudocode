/*
 * XREFs of MiAllocateEntireImageFileExtents @ 0x1408730F8
 * Callers:
 *     MiEnableImageDirectMap @ 0x1406FE504 (MiEnableImageDirectMap.c)
 *     MiCreateImageMapSectionHeaders @ 0x140A630B4 (MiCreateImageMapSectionHeaders.c)
 *     MiCreateImageMapReadNtHeader @ 0x140A632A0 (MiCreateImageMapReadNtHeader.c)
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     MiInsertCopyExtents @ 0x1406FF27C (MiInsertCopyExtents.c)
 *     MiNewPfnsSuitable @ 0x14086D01C (MiNewPfnsSuitable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEntireImageFileExtents(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  struct _FILE_OBJECT *v7; // rbx
  int v8; // r15d
  unsigned int v9; // esi
  int CurrentProcessorColor; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v12; // rdi
  int FileExtents; // ebx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 inserted; // rax

  *a4 = 0LL;
  v7 = a1;
  v8 = 1;
  v9 = ((__rdtsc() >> 4) & 7) + 8;
  while ( v9 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_DWORD *)ExAllocatePoolMm(64LL, 16LL * (v9 - 1) + 24, 893806925, CurrentProcessorColor | 0x80000000);
    v12 = PoolMm;
    if ( PoolMm )
    {
      v8 = 0;
      *PoolMm = v9;
      PoolMm[1] = 0;
      a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      FileExtents = FsRtlGetFileExtents(v7, 1, 0LL, a2, PoolMm);
      if ( FileExtents < 0 )
        goto LABEL_16;
      v14 = v12[1];
      if ( v14 <= v9 )
      {
        if ( (unsigned int)MiNewPfnsSuitable((__int64)v12) )
        {
          if ( v14 )
          {
            inserted = MiInsertCopyExtents(v15, a3, 0);
            if ( inserted )
              *a4 = inserted;
            else
              FileExtents = -1073741670;
          }
          else
          {
            FileExtents = -1073741823;
          }
        }
        else
        {
          FileExtents = -1073740761;
        }
LABEL_16:
        ExFreePoolWithTag(v12, 0);
        return (unsigned int)FileExtents;
      }
      v12[1] = v9;
      ExFreePoolWithTag(v12, 0);
      v7 = a1;
      v9 = v14;
    }
    else
    {
      if ( !v8 )
        return 3221225626LL;
      v9 >>= 1;
    }
  }
  return 3221225626LL;
}
