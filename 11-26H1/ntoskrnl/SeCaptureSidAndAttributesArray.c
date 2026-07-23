/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x1409E2E88
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     NtAdjustGroupsToken @ 0x1409E0F30 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 *     SepLengthSidAndAttributesArray @ 0x1409E2BA4 (SepLengthSidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     NtFilterToken @ 0x1409E32D0 (NtFilterToken.c)
 *     SepCreateClaimAttributes @ 0x140AF2AAC (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *a1,
        unsigned int a2,
        char a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        size_t Sizeb,
        PVOID *a8,
        unsigned int *a9)
{
  char *v9; // r10
  __int64 v10; // rbx
  char *v11; // rdx
  char *PoolWithTag; // rsi
  int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // r8
  char v16; // r8
  PVOID *v17; // r15
  char *v18; // r14
  char *v19; // r13
  const void **v20; // r14
  __int64 v21; // r12
  unsigned int v22; // ebx
  char *v24; // r9
  unsigned int v25; // r14d
  void *v26; // r13
  unsigned int i; // r14d
  __int64 v28; // r12
  unsigned __int8 UCharFromUser; // al
  ULONG v30; // eax
  char *v31; // [rsp+30h] [rbp-58h]
  _QWORD *v32; // [rsp+48h] [rbp-40h]
  __int64 ULong64FromUser; // [rsp+48h] [rbp-40h]
  unsigned int Size; // [rsp+C0h] [rbp+38h]
  int Sizea; // [rsp+C0h] [rbp+38h]

  v9 = a4;
  v10 = a2;
  v11 = a1;
  PoolWithTag = 0LL;
  v13 = 0;
  if ( !(_DWORD)v10 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( (unsigned int)v10 > 0x1000 )
    return 3221225485LL;
  Size = 16 * v10;
  v14 = 16 * v10;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, (unsigned int)(16 * v10), 0x61546553u);
    if ( !PoolWithTag )
      return 3221225626LL;
    for ( i = 0; i < (unsigned int)v10; ++i )
    {
      v28 = 16LL * i;
      ULong64FromUser = RtlReadULong64FromUser(&a1[v28]);
      UCharFromUser = RtlReadUCharFromUser((volatile void *)(ULong64FromUser + 1));
      if ( UCharFromUser > 0xFu )
      {
        v13 = -1073741704;
        break;
      }
      *(_QWORD *)&PoolWithTag[v28] = ULong64FromUser;
      v30 = RtlLengthRequiredSid(UCharFromUser);
      *(_DWORD *)&PoolWithTag[v28 + 8] = v30;
      v14 += (v30 + 3) & 0xFFFFFFFC;
    }
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v13;
    }
    v16 = a3;
    v9 = a4;
  }
  else
  {
    v15 = (unsigned int)v10;
    do
    {
      v14 += (4 * *(unsigned __int8 *)(*(_QWORD *)v11 + 1LL) + 11) & 0xFFFFFFFC;
      v11 += 16;
      --v15;
    }
    while ( v15 );
    v16 = a3;
  }
  *a9 = v14;
  if ( !v9 )
  {
    v18 = (char *)ExAllocatePoolWithTag((POOL_TYPE)1025, v14, 0x61536553u);
    v17 = a8;
    *a8 = v18;
    if ( v18 )
      goto LABEL_10;
    if ( a3 )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( v14 <= a5 )
  {
    v17 = a8;
    *a8 = v9;
    v18 = v9;
LABEL_10:
    if ( a3 )
    {
      RtlCopyFromUser(v18, a1, Size);
      v24 = &v18[(16 * (_DWORD)v10 + 3) & 0xFFFFFFFC];
      v31 = v24;
      v25 = 0;
      v32 = *v17;
      while ( v25 < (unsigned int)v10 && !v13 )
      {
        RtlCopyFromUser(v24, *(void **)&PoolWithTag[16 * v25], *(unsigned int *)&PoolWithTag[16 * v25 + 8]);
        v32[2 * v25] = v31;
        Sizea = *(_DWORD *)&PoolWithTag[16 * v25 + 8];
        v24 = &v31[(Sizea + 3) & 0xFFFFFFFC];
        v31 = v24;
        if ( (v32[2 * v25 + 1] & 0x1FFFFF80) != 0 )
        {
          v13 = -1073741811;
        }
        else
        {
          v26 = (void *)v32[2 * v25];
          if ( RtlValidSid(v26) )
          {
            if ( RtlLengthSid(v26) != Sizea )
              v13 = -1073741704;
          }
          else
          {
            v13 = -1073741704;
          }
          v24 = v31;
        }
        ++v25;
      }
    }
    else
    {
      memmove(v18, a1, Size);
      v19 = &v18[(16 * (_DWORD)v10 + 3) & 0xFFFFFFFC];
      v20 = (const void **)*v17;
      v21 = v10;
      do
      {
        v22 = 4 * *((unsigned __int8 *)*v20 + 1) + 8;
        memmove(v19, *v20, v22);
        *v20 = v19;
        v20 += 2;
        v19 += (v22 + 3) & 0xFFFFFFFC;
        --v21;
      }
      while ( v21 );
      v17 = a8;
    }
    if ( a3 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( !a4 && v13 < 0 )
    {
      ExFreePoolWithTag(*v17, 0);
      *v17 = 0LL;
    }
    return (unsigned int)v13;
  }
  if ( v16 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}
