/*
 * XREFs of PfSnGetSectionObject @ 0x14098A718
 * Callers:
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x1404A0570 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtWaitForSingleObject @ 0x14092A200 (NtWaitForSingleObject.c)
 *     NtResetEvent @ 0x140989AA0 (NtResetEvent.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x140A96D5C (PfSnIsSectionPrefetchedAfterPhase.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        HANDLE EventHandle,
        _QWORD *a9,
        _BYTE *a10)
{
  NTSTATUS SectionCommon; // ebx
  __int128 v11; // xmm0
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  void *v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm1
  unsigned int v27; // r8d
  bool v28; // zf
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // edx
  size_t Size; // [rsp+38h] [rbp-C8h]
  volatile void *Address; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43[2]; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v46; // [rsp+88h] [rbp-78h] BYREF
  __m256i BugCheckParameter2; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _OWORD v49[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v50; // [rsp+D8h] [rbp-28h]
  int v51[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+100h] [rbp+0h]
  __int128 Src; // [rsp+110h] [rbp+10h] BYREF
  __int64 v55; // [rsp+120h] [rbp+20h]

  SectionCommon = 0;
  v11 = 0LL;
  v50 = a9;
  v14 = 0x200000000LL;
  *a9 = 0LL;
  *a10 = 0;
  *(_QWORD *)&v49[0] = a3;
  v15 = 0LL;
  v55 = 0LL;
  v16 = *a1;
  *(_QWORD *)&v53 = 0LL;
  DWORD2(v53) = 0;
  v17 = a7 != 0 ? 285212672 : 0x4000000;
  v45 = 0LL;
  Src = 0LL;
  v46 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v48 = a2;
  v52 = 0LL;
  Handle = EventHandle;
  v43[0] = 0LL;
  memset(&BugCheckParameter2, 0, 24);
  BugCheckParameter2.m256i_i64[3] = 0x200000000LL;
  v44 = v17;
  if ( a6 >= *(_DWORD *)(v16 + 88) )
  {
    SectionCommon = -1073741811;
    goto LABEL_35;
  }
  v18 = a1[7];
  v19 = 56LL * a6;
  if ( (*(_QWORD *)(v19 + v18 + 24) & 0x400000000LL) != 0 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
  {
    v20 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)&Src = 0x100000003LL;
    v55 = v20;
    if ( v20 )
    {
      v21 = *(void **)(a2 + 32);
      *((_QWORD *)&Src + 1) = a1[12] & 7 | (8 * (*((_DWORD *)a1 + 25) & 7 | 8u));
      *(_OWORD *)v43 = 0LL;
      NtResetEvent(EventHandle, 0LL);
      LODWORD(Size) = 24;
      if ( (unsigned int)IopXxxControlFile(v21, Handle, 0LL, 0LL, v43, 0x90120u, (unsigned int *)&Src, Size, 0LL, 0, 0) == 259 )
        NtWaitForSingleObject(Handle, 0, 0LL);
      a2 = v48;
      DWORD1(Src) = 1;
    }
  }
  SectionCommon = PfpOpenHandleCreate(
                    (unsigned int)&BugCheckParameter2,
                    a1[1],
                    v49[0],
                    *(_QWORD *)(a2 + 64),
                    161,
                    64,
                    128,
                    a2 + 32);
  if ( SectionCommon >= 0 )
  {
    v43[0] = BugCheckParameter2.m256i_i64[0];
    SectionCommon = PfpFileCheckAttributesForPrefetch(
                      (void *)BugCheckParameter2.m256i_i64[0],
                      (((stru_140E66D40.AbCompletedIoQoSBoostCount & 0x10) == 0) << 14) + 4864);
    if ( SectionCommon < 0 )
    {
      v14 = BugCheckParameter2.m256i_i64[3];
      goto LABEL_32;
    }
    if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31) )
    {
      v22 = BugCheckParameter2.m256i_i64[1];
      if ( (int)IopQueryXxxInformation(
                  (struct _FILE_OBJECT *)BugCheckParameter2.m256i_i64[1],
                  6,
                  8,
                  0,
                  (__int64)&v45,
                  &Handle,
                  1) >= 0 )
      {
        v23 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1 + 30, 1u);
        v24 = a1[14];
        v25 = 3 * v23;
        *(_QWORD *)(v24 + 8 * v25 + 12) = v45;
        *(_QWORD *)(v24 + 8 * v25) = *(_QWORD *)(v22 + 24);
        *(_DWORD *)(v24 + 8 * v25 + 8) = BugCheckParameter2.m256i_i32[6];
      }
    }
    v17 = v44;
    SectionCommon = 0;
    v26 = *(_OWORD *)&BugCheckParameter2.m256i_u64[2];
    v43[0] = 0LL;
    *(_OWORD *)(v19 + v18) = *(_OWORD *)BugCheckParameter2.m256i_i8;
    v11 = 0LL;
    *(_OWORD *)&BugCheckParameter2.m256i_u64[1] = 0LL;
    *(_OWORD *)(v19 + v18 + 16) = v26;
LABEL_14:
    if ( a7 )
    {
      if ( !*(_QWORD *)(v19 + v18 + 32) )
        goto LABEL_16;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
      {
        *(_DWORD *)(v19 + v18 + 48) |= v39;
LABEL_51:
        *a10 = v39;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v19 + v18 + 40) )
      {
LABEL_16:
        v51[0] = 48;
        *(_QWORD *)&v51[2] = 0LL;
        DWORD2(v52) = 576;
        *(_QWORD *)&v52 = 0LL;
        v53 = v11;
        v49[0] = v11;
        LODWORD(Address) = 0;
        SectionCommon = MiCreateSectionCommon(
                          (int)&v46,
                          5,
                          (int)v51,
                          0,
                          2,
                          v17,
                          *(_QWORD *)(v19 + v18),
                          0LL,
                          (ULONGLONG)Address,
                          1,
                          KeGetCurrentThread()->PreviousMode);
        if ( SectionCommon >= 0 )
        {
          Handle = 0LL;
          SectionCommon = ObReferenceObjectByHandle(v46, 5u, MmSectionObjectType, 0, &Handle, 0LL);
          if ( SectionCommon < 0 )
          {
            if ( Handle )
              ObfDereferenceObject(Handle);
            goto LABEL_32;
          }
          v27 = a5;
          SectionCommon = 0;
          if ( a7 )
          {
            *(_QWORD *)(v19 + v18 + 32) = Handle;
            v28 = !_BitScanReverse(&v37, (*(_DWORD *)(a4 + 20) >> 8) & 0x7F);
            if ( !v28 )
            {
              _BitScanReverse(&v38, a5);
              if ( v37 > v38 )
                goto LABEL_23;
            }
            *(_DWORD *)(v19 + v18 + 48) |= 1u;
            goto LABEL_22;
          }
          *(_QWORD *)(v19 + v18 + 40) = Handle;
          v28 = !_BitScanReverse(&v29, (*(_DWORD *)(a4 + 20) >> 1) & 0x7F);
          if ( v28 || (_BitScanReverse(&v30, a5), v29 <= v30) )
          {
LABEL_21:
            *(_DWORD *)(v19 + v18 + 48) |= 2u;
LABEL_22:
            *a10 = 1;
            goto LABEL_23;
          }
          if ( *(_QWORD *)(v19 + v18 + 32)
            || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5)
            && ((unsigned __int8)v27 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 )
          {
            goto LABEL_23;
          }
          *(_DWORD *)(v19 + v18 + 48) |= 2u;
          goto LABEL_51;
        }
LABEL_32:
        v15 = v43[0];
        goto LABEL_33;
      }
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
        goto LABEL_21;
    }
LABEL_23:
    *v50 = *(_QWORD *)(v19 + v18 + 8);
    a2 = *(unsigned int *)(a4 + 20);
    v28 = !_BitScanReverse(&v31, BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F);
    if ( v28 || (_BitScanReverse(&v32, v27), v31 <= v32) )
    {
      a2 = (unsigned __int8)a2 >> 1;
      v28 = !_BitScanReverse(&v33, a2);
      if ( v28 || (_BitScanReverse(&v34, v27), v33 <= v34) )
      {
        if ( ((unsigned __int8)v27 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 || a7 )
          *(_DWORD *)(v19 + v18 + 48) |= 4u;
      }
    }
    goto LABEL_32;
  }
  v15 = BugCheckParameter2.m256i_i64[0];
  v14 = BugCheckParameter2.m256i_i64[3];
  v43[0] = BugCheckParameter2.m256i_i64[0];
LABEL_33:
  if ( v46 )
  {
    NtClose(v46);
    v15 = v43[0];
  }
LABEL_35:
  if ( (v14 & 0x400000000LL) != 0 )
  {
    v35 = a1[1];
    if ( (v14 & 0x1000000000LL) == 0 )
    {
      v49[1] = *(_OWORD *)&BugCheckParameter2.m256i_u64[1];
      *(_QWORD *)&v49[0] = v35 + 40;
      *((_QWORD *)&v49[0] + 1) = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 84));
      guard_dispatch_icall_no_overrides((__int64)v49, a2);
    }
  }
  return (unsigned int)SectionCommon;
}
