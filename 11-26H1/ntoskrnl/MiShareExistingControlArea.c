/*
 * XREFs of MiShareExistingControlArea @ 0x140A63F80
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140447A40 (IoSetTopLevelIrp.c)
 *     MmChangeSectionBackingFile @ 0x14047B03C (MmChangeSectionBackingFile.c)
 *     MiValidateControlAreaPartition @ 0x140491A04 (MiValidateControlAreaPartition.c)
 *     PsIsCurrentThreadPrefetching @ 0x140494CE0 (PsIsCurrentThreadPrefetching.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     MiValidateExistingImage @ 0x140A64508 (MiValidateExistingImage.c)
 */

__int64 __fastcall MiShareExistingControlArea(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebp
  struct _FILE_OBJECT *v3; // r14
  int v5; // esi
  int v6; // edx
  bool v7; // zf
  __int64 v8; // rsi
  NTSTATUS v9; // edi
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // rcx
  __int64 result; // rax
  LARGE_INTEGER FileSize; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  FileSize.QuadPart = 0LL;
  v5 = MiValidateControlAreaPartition(a1, v1);
  if ( v5 < 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v5;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    {
      LOBYTE(v2) = (*(_DWORD *)(a1 + 16) & 0x1000000) != 0;
      MmChangeSectionBackingFile(0LL, (__int64 **)v3, v2 + 1);
    }
    v6 = *(_DWORD *)a1 | 4;
    v7 = (*(_BYTE *)a1 & 1) == 0;
    *(_DWORD *)a1 = v6;
    v8 = *(_QWORD *)v1;
    if ( v7 && (*(_BYTE *)(v1 + 56) & 0x20) == 0 )
    {
      v9 = FsRtlGetFileSize(v3, &FileSize);
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = FileSize;
      if ( !FileSize.QuadPart && !*(_QWORD *)(a1 + 152) )
        return 3221225758LL;
    }
    else
    {
      if ( (v6 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v3);
        *(_DWORD *)a1 &= ~2u;
      }
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        result = MiValidateExistingImage(a1);
        if ( (int)result < 0 )
          return result;
      }
      v10.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL);
    }
    v11 = *(LARGE_INTEGER *)(a1 + 152);
    if ( v11.QuadPart )
    {
      if ( v10.QuadPart < (unsigned __int64)v11.QuadPart )
      {
        if ( (*(_DWORD *)(a1 + 28) & 0x44) == 0 )
          return 3221225536LL;
      }
      else
      {
        *(_DWORD *)a1 |= 8u;
      }
      *(LARGE_INTEGER *)(a1 + 128) = v11;
    }
    else
    {
      *(_DWORD *)a1 |= 8u;
      *(LARGE_INTEGER *)(a1 + 128) = v10;
    }
    return 0LL;
  }
}
