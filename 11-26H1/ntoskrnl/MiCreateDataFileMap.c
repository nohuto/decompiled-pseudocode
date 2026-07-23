/*
 * XREFs of MiCreateDataFileMap @ 0x140A63B60
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiInsertSubsectionNode @ 0x140482AB0 (MiInsertSubsectionNode.c)
 *     Mi4KStartForSubsection @ 0x14048D2FC (Mi4KStartForSubsection.c)
 *     MiComputeIdealFirstSubsection @ 0x140873314 (MiComputeIdealFirstSubsection.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _WORD *a2,
        LARGE_INTEGER **a3,
        LARGE_INTEGER a4,
        char a5,
        int a6,
        int a7,
        __int16 a8)
{
  LARGE_INTEGER v11; // rbp
  unsigned __int64 v12; // r15
  int CurrentProcessorColor; // eax
  LARGE_INTEGER *PoolMm; // rsi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  unsigned int v22; // r14d
  int v23; // eax
  __int16 v24; // cx
  int v25; // edx
  int v26; // ecx
  __int16 v27; // ax
  __int64 *v28; // r9
  int v29; // r14d
  __int16 v30; // cx
  __int64 v31; // rbx
  __int64 v32; // r9
  __int64 **v33; // rsi
  unsigned int v34; // ecx
  int v35; // eax
  NTSTATUS result; // eax
  void *v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  __int16 v40; // ax
  _QWORD *v41; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-48h] BYREF
  int v45; // [rsp+A8h] [rbp+40h]

  FileSize.QuadPart = 0LL;
  v45 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v11 = a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    v11 = FileSize;
    if ( !FileSize.QuadPart && !a4.QuadPart )
      return -1073741538;
    if ( a4.QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = a4;
      v11 = a4;
      result = FsRtlSetFileSize(FileObject);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( v11.QuadPart <= 0x40000000000000uLL )
    {
      v12 = (unsigned __int64)(v11.QuadPart + 4095) >> 12;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (LARGE_INTEGER *)ExAllocatePoolMm(256LL, 0x30uLL, 1834184013, CurrentProcessorColor | 0x80000000);
      if ( !PoolMm )
        return -1073741670;
      v15 = MmGetCurrentProcessorColor();
      v16 = ExAllocatePoolMm(64LL, 0x138uLL, 1631808845, v15 | 0x80000000);
      if ( !v16 )
      {
        v37 = PoolMm;
        goto LABEL_29;
      }
      v17 = 0LL;
      v18 = a8 & 0x4000;
      if ( v18 )
      {
        if ( v12 > 0x200 )
          v17 = 8LL * (_QWORD)MiComputeIdealFirstSubsection(FileObject);
        v19 = 0x200000;
      }
      else
      {
        v19 = 0x100000;
      }
      v20 = 0LL;
      v21 = 8 * v12;
      FileSize.QuadPart = 0LL;
      if ( !v17 )
        LODWORD(v17) = v19;
      while ( 1 )
      {
        v22 = v21;
        if ( v21 >= (unsigned int)v17 )
          v22 = v17;
        if ( v20 )
        {
          v38 = MmGetCurrentProcessorColor();
          v20 = ExAllocatePoolMm(64LL, 0xA0uLL, 1666411853, v38 | 0x80000000);
          if ( !v20 )
          {
            ExFreePoolWithTag(PoolMm, 0);
            v39 = *(_QWORD **)(v16 + 144);
            if ( v39 )
            {
              do
              {
                v41 = (_QWORD *)v39[2];
                ExFreePoolWithTag(v39, 0);
                v39 = v41;
              }
              while ( v41 );
            }
            v37 = (void *)v16;
LABEL_29:
            ExFreePoolWithTag(v37, 0);
            return -1073741670;
          }
          *(_QWORD *)(FileSize.QuadPart + 16) = v20;
        }
        else
        {
          v20 = v16 + 128;
        }
        FileSize.QuadPart = v20;
        *(_DWORD *)(v20 + 44) = v22 >> 3;
        v21 -= v22;
        if ( v22 < v19 )
          v22 = v19;
        LODWORD(v17) = v22;
        if ( !v21 )
        {
          *(_OWORD *)&PoolMm->LowPart = 0LL;
          *(_OWORD *)&PoolMm[2].LowPart = 0LL;
          *a3 = PoolMm;
          *(_OWORD *)&PoolMm[4].LowPart = 0LL;
          *(_QWORD *)v16 = PoolMm;
          *(_QWORD *)(v16 + 16) = v16 + 8;
          *(_QWORD *)(v16 + 8) = v16 + 8;
          v23 = *(_DWORD *)(v16 + 60);
          *(_QWORD *)(v16 + 112) = 1LL;
          *(_QWORD *)(v16 + 24) = 1LL;
          v24 = v23 ^ *a2;
          *(_QWORD *)(v16 + 104) = 0LL;
          *(_DWORD *)(v16 + 60) = v23 ^ v24 & 0x3FF;
          if ( v45 )
            *(_DWORD *)(v16 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v16 + 48) = 1LL;
          *(_DWORD *)(v16 + 56) |= 2u;
          v25 = 6;
          v26 = (*(_DWORD *)(v16 + 56) | 0x80) ^ ((*(_DWORD *)(v16 + 56) | 0x80) ^ (a7 << 20)) & 0x7F00000;
          *(_DWORD *)(v16 + 56) = v26;
          if ( v18 )
          {
            *(_DWORD *)(v16 + 56) = v26 & 0xCFFFFFFF | 0x10000000;
          }
          else
          {
            if ( (a6 & 0x10000000) != 0 )
            {
              v40 = 0x2000;
              v25 = 14;
            }
            else
            {
              if ( (a6 & 0x40000000) == 0 )
                goto LABEL_22;
              v40 = 4096;
              v25 = 30;
            }
            WORD2(PoolMm[1].QuadPart) |= v40;
          }
LABEL_22:
          v27 = WORD2(PoolMm[1].QuadPart);
          v28 = (__int64 *)(v16 + 128);
          PoolMm->QuadPart = v16;
          v29 = 2 * v25;
          PoolMm[3] = v11;
          PoolMm[1].LowPart = v12;
          v30 = v27 ^ (v27 ^ WORD2(v12)) & 0x3FF;
          LOBYTE(v27) = BYTE6(PoolMm[1].QuadPart) & 0xE0;
          WORD2(PoolMm[1].QuadPart) = v30;
          BYTE6(PoolMm[1].QuadPart) = v25 | v27;
          v31 = 0LL;
          do
          {
            *v28 = v16;
            Mi4KStartForSubsection((__int64)v28, v31);
            v33 = (__int64 **)(v32 + 16);
            v34 = v29 | *(_DWORD *)(v32 + 32) & 0xFFFFFFC1;
            if ( *(_QWORD *)(v32 + 16) )
            {
              v35 = *(_DWORD *)(v32 + 44);
            }
            else
            {
              v34 = v29 & 0xFFFFF | *(_DWORD *)(v32 + 32) & 0xFFFC1 | (LOWORD(v11.LowPart) << 20);
              *(_DWORD *)(v32 + 52) = *(_DWORD *)(v32 + 44) + v31 - v12;
              v35 = ((unsigned __int64)v11.QuadPart >> 12) - v31;
            }
            *(_DWORD *)(v32 + 40) = v35;
            *(_DWORD *)(v32 + 32) = v34;
            v31 += *(unsigned int *)(v32 + 44);
            *(_QWORD *)(v32 + 96) = v32 + 88;
            *(_QWORD *)(v32 + 88) = v32 + 88;
            MiInsertSubsectionNode(v16, v32, 0);
            v28 = *v33;
          }
          while ( *v33 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
