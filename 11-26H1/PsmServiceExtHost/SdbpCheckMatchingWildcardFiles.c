/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x180095C10
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x180092108 (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x180096C14 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslPathWildcardFindClose @ 0x18009F310 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
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
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // r13
  __int64 v13; // r12
  _DWORD *v14; // rdx
  int v15; // r14d
  __int64 v16; // rdx
  int i; // eax
  __int64 result; // rax
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _DWORD *v26; // [rsp+68h] [rbp-98h]
  _BYTE v27[528]; // [rsp+70h] [rbp-90h] BYREF

  v25 = a3;
  v24 = a2;
  v7 = a1;
  v23 = a1;
  v8 = 0;
  v19 = 0;
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(StringTagPtr + 2 * v13) );
      v8 = 1;
      if ( (*(_BYTE *)a6 & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        v14 = *(_DWORD **)(a6 + 72);
        v15 = 0;
        v26 = v14;
        while ( v15 < *v14 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(
                                v24,
                                a6,
                                StringTagPtr,
                                (unsigned int)v13,
                                &v14[12 * v15 + 2],
                                &v21) )
          {
            AslLogCallPrintf(1LL, "SdbpCheckMatchingWildcardFiles", 3807LL, "Failed to resolve matching file");
            v9 = v21;
            v8 = 0;
            goto LABEL_26;
          }
          AslPathWildcardFindClose(&v22);
          memset_0(v27, 0, 0x208uLL);
          v9 = v21;
          for ( i = AslPathWildcardFindFirst(v27, v16, v21, &v22); i >= 0; i = AslPathWildcardFindNext(v27, 260LL, v22) )
          {
            if ( v10 )
            {
              AslFileMappingDelete(v10);
              v20 = 0LL;
            }
            i = AslFileMappingCreate(&v20, v27);
            v10 = v20;
            if ( i < 0 )
              break;
            if ( (int)SdbpCheckAllAttributes(&v19, v24, v25, a5, v20) >= 0 )
              goto LABEL_25;
          }
          if ( i != -2147483642 )
            AslLogCallPrintf(
              3LL,
              "SdbpCheckMatchingWildcardFiles",
              3861LL,
              "AslPathWildcardFindFirst/Next failed to find a file [%x]",
              i);
          if ( v9 )
          {
            AslFree(NtCurrentPeb()->ProcessHeap, v9);
            v9 = 0LL;
            v21 = 0LL;
          }
          v14 = v26;
          ++v15;
        }
LABEL_25:
        *(_DWORD *)(a6 + 80) = 1;
      }
      else
      {
        AslLogCallPrintf(1LL, "SdbpCheckMatchingWildcardFiles", 3783LL, "Failed to initialize SEARCHDBCONTEXT");
        v8 = 0;
      }
LABEL_26:
      v7 = v23;
    }
    else
    {
      AslLogCallPrintf(1LL, "SdbpCheckMatchingWildcardFiles", 3769LL, "Failed to get the string from the database");
    }
  }
  AslPathWildcardFindClose(&v22);
  AslFileMappingDelete(v10);
  if ( v9 )
    AslFree(NtCurrentPeb()->ProcessHeap, v9);
  result = v8;
  *v7 = v19;
  return result;
}
