/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x14077E1F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslPathWildcardFindClose @ 0x14077C9BC (AslPathWildcardFindClose.c)
 *     SdbpInitializeSearchDBContext @ 0x140884BA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140889EE8 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x14088AC24 (AslpPathWildcardFreeFindContext.c)
 *     AslFileMappingCreate @ 0x1409E3894 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x1409E56C8 (AslFileMappingDelete.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 i; // r13
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 StringTagPtr; // rax
  __int64 v16; // rdx
  int v17; // r14d
  __int64 v18; // r8
  __int64 v19; // r12
  _DWORD *v20; // rdx
  int First; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v30; // [rsp+50h] [rbp-B0h]
  _DWORD *v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v34 = a3;
  v32 = a2;
  v7 = a1;
  v30 = a1;
  v8 = 0;
  v26 = 0;
  v9 = 0LL;
  v28 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  i = 0LL;
  v29 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v13, v14);
    v17 = 0;
    v33 = StringTagPtr;
    v18 = StringTagPtr;
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingWildcardFiles",
        3769,
        (unsigned int)"Failed to get the string from the database");
      goto LABEL_28;
    }
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(StringTagPtr + 2 * v19) );
    v8 = 1;
    if ( (*(_DWORD *)a6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(a6, v16, StringTagPtr) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          3783,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        v8 = 0;
LABEL_27:
        v7 = v30;
        goto LABEL_28;
      }
      v18 = v33;
    }
    v20 = *(_DWORD **)(a6 + 72);
    v31 = v20;
    while ( v17 < *v20 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(v32, a6, v18, (unsigned int)v19, &v20[12 * v17 + 2], &v28) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          3807,
          (unsigned int)"Failed to resolve matching file");
        v9 = v28;
        v8 = 0;
        goto LABEL_27;
      }
      AslPathWildcardFindClose(&v29);
      memset_0(pszDest, 0, 0x208uLL);
      v9 = v28;
      First = AslPathWildcardFindFirst(pszDest);
      for ( i = v29; ; First = AslPathWildcardFindNext(pszDest, v23, i) )
      {
        v22 = 0LL;
        if ( First < 0 )
          break;
        if ( v10 )
        {
          AslFileMappingDelete(v10);
          v27 = 0LL;
        }
        First = AslFileMappingCreate((unsigned int)&v27, (unsigned int)pszDest, 0, 0, 0LL);
        v10 = v27;
        if ( First < 0 )
          break;
        if ( (int)SdbpCheckAllAttributes((unsigned int)&v26, v32, v34, a5, v27) >= 0 )
          goto LABEL_26;
      }
      if ( First != -2147483642 )
        AslLogCallPrintf(
          3,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          3861,
          (unsigned int)"AslPathWildcardFindFirst/Next failed to find a file [%x]");
      if ( v9 )
      {
        AslFree(v22, v9);
        v9 = 0LL;
        v28 = 0LL;
      }
      v20 = v31;
      ++v17;
      v18 = v33;
    }
LABEL_26:
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_27;
  }
LABEL_28:
  if ( (unsigned __int64)(i - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v31 = (_DWORD *)i;
    AslpPathWildcardFreeFindContext(&v31);
  }
  AslFileMappingDelete(v10);
  if ( v9 )
    AslFree(v24, v9);
  result = v8;
  *v7 = v26;
  return result;
}
