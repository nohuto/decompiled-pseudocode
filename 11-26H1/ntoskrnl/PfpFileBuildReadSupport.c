/*
 * XREFs of PfpFileBuildReadSupport @ 0x140A589EC
 * Callers:
 *     PfpPrefetchFiles @ 0x140A5819C (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140A59AEC (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1404A0570 (PfpFileCheckAttributesForPrefetch.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     PfpFileBuildReadList @ 0x140A58708 (PfpFileBuildReadList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  void *v5; // r15
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v11; // rcx
  int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int16 v17; // cx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  int List; // edi
  __int64 v24; // r12
  __m128i v25; // xmm6
  __m128i v26; // xmm0
  unsigned __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int128 v33; // xmm0
  int v34; // [rsp+30h] [rbp-99h]
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-81h]
  _OWORD v36[2]; // [rsp+68h] [rbp-61h] BYREF
  __m256i v37; // [rsp+88h] [rbp-41h] BYREF
  int v38[4]; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-11h]
  __int128 v40; // [rsp+C8h] [rbp-1h]
  HANDLE Handle; // [rsp+128h] [rbp+5Fh] BYREF
  void *v42; // [rsp+130h] [rbp+67h] BYREF
  int v43; // [rsp+140h] [rbp+77h]

  v5 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v40 = 0LL;
  DWORD2(v40) = 0;
  memset(&v37, 0, 24);
  v8 = a3;
  v9 = a1[1];
  v11 = *a1;
  v37.m256i_i64[3] = 0x200000000LL;
  v42 = 0LL;
  *(_OWORD *)v38 = 0LL;
  v12 = a4 != 0 ? 285212672 : 0x4000000;
  v39 = 0LL;
  v43 = v12;
  v36[0] = 0LL;
  v13 = (unsigned __int128)((a2 - *(unsigned int *)(v11 + 40) - v11) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v14 = v9 + 32 * (((unsigned __int64)v13 >> 63) + (v13 >> 3));
  if ( v9 && _bittest64((const signed __int64 *)(v14 + 24), 0x22u) )
  {
    v25 = *(__m128i *)v14;
    v33 = *(_OWORD *)(v14 + 16);
    v27 = *(_QWORD *)(v14 + 24) | 0x1000000000LL;
    v24 = v25.m128i_i64[0];
    v37.m256i_i64[2] = v33;
    v37.m256i_i64[3] = v27;
    *(__m128i *)v37.m256i_i8 = v25;
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 32);
    v16 = (*(_DWORD *)a2 & 2) != 0 ? 16417 : 96;
    if ( !v15 || (*(_DWORD *)a2 & 4) != 0 )
    {
      v19 = a1[2];
      *((_QWORD *)&v36[0] + 1) = a2 + 8;
      v16 |= 0x2000u;
      LODWORD(v36[0]) = 524296;
      v20 = v8 << 6;
      v21 = *(_QWORD *)(v19 + (v8 << 6));
    }
    else
    {
      v17 = 2 * *(_WORD *)(a2 + 40);
      *((_QWORD *)&v36[0] + 1) = v15 + 2;
      WORD1(v36[0]) = v17;
      v18 = v17 - 2;
      v19 = a1[2];
      LOWORD(v36[0]) = v18;
      v20 = v8 << 6;
      v21 = *(_QWORD *)(v19 + (v8 << 6) + 32);
    }
    v38[0] = 48;
    v34 = v16;
    v22 = a1[5];
    *(_QWORD *)&v39 = v36;
    *(_QWORD *)&v38[2] = v21;
    DWORD2(v39) = 576;
    v40 = 0LL;
    List = PfpOpenHandleCreate((__int64)&v37, v22, (__int64)v36, v21, a4 != 0 ? 32 : 129, v34, 128, v19 + v20);
    if ( List < 0 )
    {
      v27 = v37.m256i_u64[3];
      goto LABEL_14;
    }
    v24 = v37.m256i_i64[0];
    List = PfpFileCheckAttributesForPrefetch((void *)v37.m256i_i64[0], 21248);
    if ( List < 0 )
    {
      v27 = v37.m256i_u64[3];
      goto LABEL_29;
    }
    v12 = v43;
    v25 = *(__m128i *)v37.m256i_i8;
    if ( a1[1] )
    {
      v26 = *(__m128i *)&v37.m256i_u64[2];
      *(_OWORD *)v14 = *(_OWORD *)v37.m256i_i8;
      *(__m128i *)(v14 + 16) = v26;
      v27 = _mm_srli_si128(v26, 8).m128i_u64[0] | 0x1000000000LL;
      v37.m256i_i64[3] = v27;
    }
    else
    {
      v27 = v37.m256i_u64[3];
    }
  }
  if ( (*(_DWORD *)a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v25, 8).m128i_u64[0] + 40) + 16LL) )
  {
    List = -1073741791;
    goto LABEL_14;
  }
  v38[0] = 48;
  v40 = 0LL;
  *(_QWORD *)&v38[2] = 0LL;
  v36[1] = 0LL;
  DWORD2(v39) = 576;
  *(_QWORD *)&v39 = 0LL;
  LODWORD(ullMultiplicand) = 0;
  v28 = MiCreateSectionCommon(
          &Handle,
          5,
          (int)v38,
          0LL,
          2,
          v12,
          v24,
          0LL,
          ullMultiplicand,
          1,
          KeGetCurrentThread()->PreviousMode);
  List = v28;
  if ( v28 >= 0 )
  {
    List = PfpFileBuildReadList((__int64)a1, a2, a4, (__int64 *)&v42);
    if ( List < 0 )
    {
      v5 = v42;
    }
    else
    {
      v29 = a5;
      v27 = 0x200000000LL;
      v30 = *(_OWORD *)&v37.m256i_u64[2];
      v37.m256i_i64[0] = 0LL;
      List = 0;
      *(_QWORD *)(a5 + 40) = Handle;
      v31 = (__int64)v42;
      *(__m128i *)(v29 + 8) = v25;
      *(_QWORD *)v29 = v31;
      *(_OWORD *)(v29 + 24) = v30;
      v37.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)&v37.m256i_u64[1] = 0LL;
      Handle = 0LL;
      *(_QWORD *)(v29 + 48) = a2;
    }
    goto LABEL_14;
  }
  if ( a4 && v28 == -1073740749 )
  {
LABEL_14:
    if ( (v27 & 0x100000000LL) == 0 )
      goto LABEL_15;
  }
LABEL_29:
  if ( (*(_DWORD *)a2 & 8) == 0 )
  {
    *(_DWORD *)a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_15:
  if ( Handle )
    NtClose(Handle);
  if ( (v27 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v37, a1[5]);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)List;
}
