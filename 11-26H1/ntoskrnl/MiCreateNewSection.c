/*
 * XREFs of MiCreateNewSection @ 0x140A63860
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140447A40 (IoSetTopLevelIrp.c)
 *     MiSectionCreated @ 0x14047EECC (MiSectionCreated.c)
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x1404AF940 (MiAllocateMappedWriterMdls.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 *     MiCreateImageMapSectionHeaders @ 0x140A630B4 (MiCreateImageMapSectionHeaders.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiCreateImageMapReadNtHeader @ 0x140A632A0 (MiCreateImageMapReadNtHeader.c)
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 *     MiCreateDataFileMap @ 0x140A63B60 (MiCreateDataFileMap.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     MiVerifyImageHeader @ 0x140A6492C (MiVerifyImageHeader.c)
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  ULONG **v7; // rsi
  struct _FILE_OBJECT *v8; // r15
  int v9; // r13d
  signed __int64 v10; // r12
  ULONG *v11; // rsi
  int MappedWriterMdls; // ebx
  bool v13; // zf
  int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  _QWORD *v20; // rsi
  __int64 result; // rax
  _QWORD *v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-B8h]
  struct _FILE_OBJECT *v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h]
  ULONG *v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  _QWORD *v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+D0h] [rbp-30h]
  _BYTE *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v33[200]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v34; // [rsp+1E0h] [rbp+E0h]
  int v35; // [rsp+1E8h] [rbp+E8h]

  v23 = a2;
  v3 = 0LL;
  v22 = 0LL;
  memset_0(v33, 0, 0xD8uLL);
  v7 = *(ULONG ***)(a1 + 176);
  v8 = *(struct _FILE_OBJECT **)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 152);
  v32 = a1;
  if ( v7 )
    v11 = *v7;
  else
    v11 = &MiSystemPartition;
  if ( (v11[1] & 0x20) != 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v8);
      *(_DWORD *)a1 &= ~2u;
    }
    return 3221225659LL;
  }
  else
  {
    MappedWriterMdls = MiAllocateMappedWriterMdls((__int64)v11, v4, v5, v6);
    if ( MappedWriterMdls < 0 )
    {
LABEL_7:
      v13 = (*(_DWORD *)a1 & 2) == 0;
      goto LABEL_24;
    }
    if ( !(unsigned int)MiMakePartitionActive((__int64)v11) )
    {
      MappedWriterMdls = -1073741523;
      goto LABEL_7;
    }
    v14 = *(_DWORD *)(a1 + 172);
    if ( (v9 & 0x1000000) != 0 )
    {
      memset_0(&v24, 0, 0xB8uLL);
      v25 = *(_DWORD *)a1;
      v31 = v33;
      v24 = v8;
      v26 = v11;
      v27 = v14;
      MappedWriterMdls = MiCreateImageMapHeader((__int64)&v24);
      if ( MappedWriterMdls >= 0 )
      {
        MappedWriterMdls = MiCreateImageMapReadNtHeader((__int64)&v24);
        if ( MappedWriterMdls >= 0 )
        {
          MappedWriterMdls = MiVerifyImageHeader(&v24);
          if ( !MappedWriterMdls )
          {
            MappedWriterMdls = MiCreateImageMapSectionHeaders(&v24);
            if ( MappedWriterMdls >= 0 )
            {
              MappedWriterMdls = MiBuildImageControlArea((__int64)&v24);
              if ( MappedWriterMdls >= 0 )
              {
                MappedWriterMdls = MiCreateImageMapFinish((__int64)&v24);
                if ( MappedWriterMdls >= 0 )
                {
                  MappedWriterMdls = 0;
                  v35 = v30;
                  v3 = (_QWORD *)*v28;
                  v34 = v29;
                }
              }
            }
          }
        }
      }
      MiCreateImageMapFreeResources((__int64)&v24, MappedWriterMdls);
    }
    else
    {
      v3 = v22;
      MappedWriterMdls = MiCreateDataFileMap(v8, *(_DWORD *)(a1 + 28), v9, v14, *(_DWORD *)a1);
    }
    if ( MappedWriterMdls < 0 )
    {
      v13 = (*(_DWORD *)a1 & 2) == 0;
LABEL_24:
      if ( !v13 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v8);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)MappedWriterMdls;
    }
    *v23 = v3;
    if ( !v10 )
      v10 = _InterlockedCompareExchange64(v3 + 3, -1LL, -1LL);
    *(_QWORD *)(a1 + 128) = v10;
    v15 = *v3;
    if ( (*(_DWORD *)a1 & 0x200000) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x100u;
    if ( (*(_DWORD *)a1 & 0x1000) != 0 )
      *(_DWORD *)(v15 + 56) |= 0x20000u;
    v16 = MiSectionCreated(a1, v15, v34);
    v19 = *(_DWORD *)a1;
    v20 = (_QWORD *)v16;
    v22 = (_QWORD *)v16;
    if ( (v19 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v8);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( (v9 & 0x1000000) == 0 )
    {
LABEL_20:
      MiReleaseControlAreaWaiters(v20, v17, v18);
      return (unsigned int)MappedWriterMdls;
    }
    result = MiReleaseImageSection(&v32, v15, &v22);
    MappedWriterMdls = result;
    if ( (int)result >= 0 )
    {
      v20 = v22;
      goto LABEL_20;
    }
  }
  return result;
}
