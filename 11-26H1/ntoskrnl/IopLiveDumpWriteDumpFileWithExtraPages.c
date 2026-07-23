/*
 * XREFs of IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x1403460E4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpWriteBuffer @ 0x140346114 (IopLiveDumpWriteBuffer.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetExtraMergePages @ 0x1405D23E4 (IopLiveDumpGetExtraMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1405D26D8 (IopLiveDumpGetNtMergePages.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1405D8E70 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x14061BB30 (RtlMergeBitMapsEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithExtraPages(__int64 a1)
{
  __int64 v1; // r15
  LARGE_INTEGER *v2; // rsi
  _OWORD *Pool2; // r13
  int SecureDumpHeader; // edi
  __int64 v6; // rdi
  LARGE_INTEGER v7; // rax
  void *v8; // r14
  __int64 v9; // rax
  char ExtraMergePages; // al
  int v11; // r12d
  __int64 *v12; // r8
  int v13; // r15d
  __int64 *v14; // rax
  unsigned __int64 *v15; // r8
  _QWORD *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // edi
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rdi
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  char *v29; // rdx
  char *v30; // rdx
  bool v31; // zf
  __int64 v32; // rdi
  unsigned int v33; // ecx
  int v34; // r15d
  __int32 v35; // eax
  __int128 v36; // xmm0
  int v37; // r12d
  unsigned int v38; // edi
  __int32 v39; // eax
  __int128 v40; // xmm0
  __int32 v41; // eax
  __int128 v42; // xmm0
  __int64 v43; // rax
  void *v44; // r15
  ULONG v45; // r8d
  char v47; // [rsp+38h] [rbp-D0h]
  char v48; // [rsp+39h] [rbp-CFh]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  char *v51; // [rsp+50h] [rbp-B8h] BYREF
  char *v52; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 *v53; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h]
  PVOID Buffer; // [rsp+90h] [rbp-78h]
  __int64 v59; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-40h]
  void *v65; // [rsp+D0h] [rbp-38h]
  __m256i v66; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v67; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 1128);
  v2 = *(LARGE_INTEGER **)(a1 + 560);
  ByteOffset.QuadPart = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  Pool2 = 0LL;
  v51 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  v65 = 0LL;
  v61 = v1;
  v67 = 0LL;
  memset(&v66, 0, sizeof(v66));
  if ( !v1 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 1136);
  v60 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 984) )
    v7.QuadPart = v2[1028].QuadPart + *(unsigned int *)(a1 + 992);
  else
    v7 = v2[1028];
  v8 = *(void **)(a1 + 64);
  ByteOffset = v7;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 624);
  v57 = 0LL;
  v47 = 0;
  v59 = -1LL;
  if ( *(_QWORD *)(a1 + 552) != v9 )
    memset_0(*(void **)(a1 + 624), 0, 4 * ((*(_QWORD *)(a1 + 616) >> 5) + ((*(_QWORD *)(a1 + 616) & 0x1F) != 0)));
  if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
    memset_0(*(void **)(a1 + 640), 0, 4 * ((*(_QWORD *)(a1 + 632) >> 5) + ((*(_QWORD *)(a1 + 632) & 0x1F) != 0)));
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  IopLiveDumpGetNtMergePages(a1, v6, &v51, (unsigned int *)&v50, &v54);
  v55 = (__int64 *)v6;
  ExtraMergePages = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v1, &v52, (_DWORD *)&v50 + 1, &v56);
  v11 = v50;
  v12 = (__int64 *)v1;
  v53 = (unsigned __int64 *)v1;
  v13 = HIDWORD(v50);
  v48 = ExtraMergePages;
  while ( v13 || v11 )
  {
    if ( v11 )
    {
      v14 = &v59;
      if ( v13 )
        v14 = v12;
      v53 = (unsigned __int64 *)v14;
    }
    else
    {
      v55 = &v59;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_90;
    if ( !v13 || v15[v13 - 1] >= *v16 )
    {
      if ( v11 && v16[v11 - 1] < *v15 )
      {
        v25 = v11;
        Buffer = v51;
        v26 = v60;
        v19 = v25 << 12;
        v57 = v54;
        v47 = 1;
        IopLiveDumpGetNtMergePages(a1, v60, &v51, (unsigned int *)&v50, &v54);
        v55 = (__int64 *)v26;
        v11 = v50;
        goto LABEL_24;
      }
      v27 = *v15;
      v28 = *v16;
      v63 = v27;
      v64 = v28;
      if ( v28 < v27 )
      {
        v29 = v51;
        Buffer = v51;
        goto LABEL_35;
      }
      v30 = v52;
      v19 = v18;
      Buffer = v52;
      if ( v28 == v27 )
      {
        v29 = v51;
LABEL_35:
        v31 = v11-- == 1;
        LODWORD(v50) = v11;
        if ( v31 )
        {
          v32 = v60;
          v47 = 1;
          v57 = v54;
          IopLiveDumpGetNtMergePages(a1, v60, &v51, (unsigned int *)&v50, &v54);
          v27 = v63;
          v18 = 4096LL;
          v28 = v64;
          v15 = v53;
          v17 = v48;
          v11 = v50;
          v55 = (__int64 *)v32;
        }
        else
        {
          v51 = &v29[v18];
          v55 = v16 + 1;
        }
        v19 = v18;
        if ( v28 < v27 )
          goto LABEL_24;
        v30 = v52;
      }
      v31 = v13-- == 1;
      HIDWORD(v50) = v13;
      if ( !v31 )
      {
        v52 = &v30[v18];
        v53 = v15 + 1;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    Buffer = v52;
    v19 = v13 << 12;
LABEL_23:
    v20 = v61;
    v47 = v17;
    v57 = v56;
    v21 = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v61, &v52, (_DWORD *)&v50 + 1, &v56);
    v53 = (unsigned __int64 *)v20;
    v13 = HIDWORD(v50);
    v48 = v21;
LABEL_24:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Buffer, v19, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_90;
    v12 = (__int64 *)v53;
    if ( v47 )
    {
      v22 = v57;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 760) + 8 * v57);
      if ( v23 )
      {
        MiFreePagesFromMdl(v23, 0, 0, 0);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v22), 0x706D644Cu);
        *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v22) = 0LL;
        v24 = *(_QWORD *)(a1 + 760);
LABEL_45:
        *(_QWORD *)(v24 + 8 * v22) = 0LL;
        goto LABEL_46;
      }
      if ( !*(_QWORD *)(a1 + 816) && !*(_QWORD *)(a1 + 856) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v57), BufferChunkSizeInBytes);
        v24 = *(_QWORD *)(a1 + 752);
        goto LABEL_45;
      }
LABEL_46:
      v12 = (__int64 *)v53;
      v47 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 984) )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
LABEL_2:
      SecureDumpHeader = -1073741670;
      goto LABEL_90;
    }
  }
  v33 = 1;
  LODWORD(v67) = 1886221636;
  *(_QWORD *)((char *)&v67 + 4) = 0x10626F6C42LL;
  HIDWORD(v67) = NtBuildNumber;
  if ( *(_BYTE *)(a1 + 984) )
  {
    *Pool2 = v67;
    goto LABEL_53;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v67, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v33 = 0;
LABEL_53:
    v34 = 32;
    v35 = *(_DWORD *)(a1 + 184);
    v36 = *(_OWORD *)(a1 + 160);
    v66.m256i_i32[0] = 32;
    v66.m256i_i32[5] = v35;
    *(_OWORD *)((char *)v66.m256i_i64 + 4) = v36;
    v66.m256i_i32[7] = 0;
    if ( *(_BYTE *)(a1 + 984) )
    {
      v37 = 4096;
      v66.m256i_i32[6] = 4064 - v33 * 16;
      *(__m256i *)&Pool2[v33] = v66;
      while ( v37 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Pool2, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_88;
        v37 -= 4096;
        memset_0(Pool2, 0, 0x1000uLL);
        if ( v34 != v66.m256i_i32[0] )
        {
          v38 = v66.m256i_i32[0] - v34;
          if ( (unsigned int)(v66.m256i_i32[0] - v34) > 0x1000 )
            v38 = 4096;
          memmove(Pool2, &v66.m256i_i8[v34], v38);
          v34 += v38;
        }
      }
LABEL_63:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, *(PVOID *)(a1 + 176), *(_DWORD *)(a1 + 184), &ByteOffset, a1, 0);
      if ( SecureDumpHeader >= 0 )
      {
        v39 = *(_DWORD *)(a1 + 1088);
        if ( !v39
          || (v40 = *(_OWORD *)(a1 + 1064),
              v66.m256i_i32[0] = 32,
              v66.m256i_i32[5] = v39,
              v66.m256i_i64[3] = 0LL,
              *(_OWORD *)((char *)v66.m256i_i64 + 4) = v40,
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v66, 0x20u, &ByteOffset, a1, 0),
              SecureDumpHeader >= 0)
          && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                   v8,
                                   *(PVOID *)(a1 + 1080),
                                   *(_DWORD *)(a1 + 1088),
                                   &ByteOffset,
                                   a1,
                                   0),
              SecureDumpHeader >= 0) )
        {
          v41 = *(_DWORD *)(a1 + 1040);
          if ( !v41
            || (v42 = *(_OWORD *)(a1 + 1016),
                v66.m256i_i32[0] = 32,
                v66.m256i_i32[5] = v41,
                v66.m256i_i64[3] = 0LL,
                *(_OWORD *)((char *)v66.m256i_i64 + 4) = v42,
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v66, 0x20u, &ByteOffset, a1, 0),
                SecureDumpHeader >= 0)
            && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                     v8,
                                     *(PVOID *)(a1 + 1032),
                                     *(_DWORD *)(a1 + 1040),
                                     &ByteOffset,
                                     a1,
                                     0),
                SecureDumpHeader >= 0) )
          {
            if ( *(_QWORD *)(a1 + 552) != *(_QWORD *)(a1 + 624) )
              RtlMergeBitMapsEx(a1 + 544, a1 + 616);
            if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
              RtlMergeBitMapsEx(a1 + 544, a1 + 632);
            v2[1024].LowPart = 1347241043;
            v2[1024].HighPart = 1347245380;
            v2[1029].QuadPart = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
            if ( *(_BYTE *)(a1 + 984) )
              v2[500].QuadPart = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
            else
              v2[500] = ByteOffset;
            v2[522].LowPart |= 0x10u;
            if ( !*(_BYTE *)(a1 + 984) )
            {
              v44 = v65;
              ByteOffset.QuadPart = 0LL;
              goto LABEL_83;
            }
            ByteOffset.QuadPart = *(unsigned int *)(a1 + 992);
            v43 = ExAllocatePool2(0x40uLL);
            v44 = (void *)v43;
            if ( !v43 )
            {
              SecureDumpHeader = -1073741670;
              goto LABEL_88;
            }
            SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v2, v43, *(unsigned int *)(a1 + 992));
            if ( SecureDumpHeader < 0 )
            {
LABEL_87:
              ExFreePoolWithTag(v44, 0);
              goto LABEL_88;
            }
LABEL_83:
            SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v2, v2[1028].LowPart, &ByteOffset, a1, 0);
            if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 984) )
            {
              v45 = *(_DWORD *)(a1 + 992);
              ByteOffset.QuadPart = 0LL;
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v44, v45, &ByteOffset, a1, 1);
            }
            if ( v44 )
              goto LABEL_87;
          }
        }
      }
    }
    else
    {
      v66.m256i_i32[6] = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v66, 0x20u, &ByteOffset, a1, 1);
      if ( SecureDumpHeader >= 0 )
      {
        ByteOffset.QuadPart += v66.m256i_u32[6];
        goto LABEL_63;
      }
    }
  }
LABEL_88:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_90:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
