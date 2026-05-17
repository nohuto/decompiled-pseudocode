/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0
 * Callers:
 *     LdrIsResItemExist @ 0x18002C970 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18013BD80 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1801147C4 (LdrpSpecialCacheTypeHandle.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        _QWORD *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v11; // di
  HANDLE v12; // r14
  unsigned int v13; // ebx
  __int16 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 i; // rbx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 Heap_0; // rax
  __int64 v31; // rbx
  __int64 v33; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v34; // [rsp+68h] [rbp+10h]

  v34 = a2;
  if ( !a1 )
    return 0;
  v11 = a6;
  if ( (a6 & 0xFFFFFFCC) != 0 || (a6 & 2) != 0 && (a6 & 1) != 0 )
    return 0;
  if ( (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v12 = 0LL;
  v13 = 0;
  v14 = a5;
  v15 = (unsigned int)AlternateResourceModuleCount;
  v16 = AlternateResourceModules;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v15 )
      goto LABEL_21;
    v17 = (unsigned __int64)v13 << 6;
    v18 = (_QWORD *)(v17 + v16);
    if ( *(_QWORD *)(v17 + v16 + 8) != a1 )
    {
      if ( (v11 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(v18[5] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LdrpSpecialCacheTypeHandle(v18, 0LL);
        v15 = (unsigned int)AlternateResourceModuleCount;
        v16 = AlternateResourceModules;
      }
      goto LABEL_10;
    }
    if ( (v11 & 2) != 0 && v18[2] )
      goto LABEL_72;
    if ( (v11 & 1) != 0 )
    {
      v19 = v18[4];
      if ( v19 )
      {
        if ( v14 && *(_WORD *)(v17 + v16) == v14 )
          break;
      }
    }
LABEL_10:
    ++v13;
  }
  if ( *v34 == -1LL )
  {
LABEL_17:
    v20 = (unsigned __int64)v13 << 6;
    v15 = (unsigned __int64)v34;
    *v34 = *(_QWORD *)(v20 + v16 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)(v20 + v16 + 40);
    goto LABEL_72;
  }
  if ( (v11 & 0x20) == 0 )
  {
    NtUnmapViewOfSection(-1LL, *v34 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( a3 )
      NtClose(*a3);
    v16 = AlternateResourceModules;
    goto LABEL_17;
  }
  if ( v19 == -1 )
    v18[4] = 0LL;
LABEL_21:
  if ( (v11 & 0x10) != 0 )
    goto LABEL_72;
  if ( v16 )
  {
    if ( (unsigned int)v15 < AltResMemBlockCount )
      goto LABEL_24;
    Heap_0 = RtlReAllocateHeap_0(
               NtCurrentPeb()->ProcessHeap,
               8LL,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
    v16 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_72;
    AlternateResourceModules = Heap_0;
    AltResMemBlockCount += 32;
  }
  else
  {
    v29 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 2048LL);
    v16 = v29;
    if ( !v29 )
      goto LABEL_72;
    AlternateResourceModules = v29;
    AltResMemBlockCount = 32;
  }
  v15 = (unsigned int)AlternateResourceModuleCount;
LABEL_24:
  for ( i = 0LL; (unsigned int)i < (unsigned int)v15; i = (unsigned int)(i + 1) )
  {
    v22 = ((unsigned __int64)(unsigned int)i << 6) + v16;
    if ( *(_QWORD *)(v22 + 8) == a1 )
    {
      if ( (v11 & 2) != 0 && !*(_QWORD *)(v22 + 16) )
      {
        *(_QWORD *)(v22 + 16) = a4;
        *(_DWORD *)(v22 + 56) = a7;
        goto LABEL_72;
      }
      if ( (v11 & 1) != 0 && !*(_QWORD *)(v22 + 32) && (*(_WORD *)v22 == v14 || !*(_WORD *)v22) )
      {
        v23 = v34;
        *(_QWORD *)(v22 + 32) = *v34;
        if ( a3 )
          v12 = *a3;
        *(_QWORD *)(((unsigned __int64)(unsigned int)i << 6) + v16 + 40) = v12;
        *(_WORD *)(((unsigned __int64)(unsigned int)i << 6) + v16) = v14;
        *(_DWORD *)(((unsigned __int64)(unsigned int)i << 6) + v16 + 56) = a7;
        *(_QWORD *)(((unsigned __int64)(unsigned int)i << 6) + v16 + 48) = a8;
        if ( gMUICacheType )
        {
          LOBYTE(v15) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(v16 + ((unsigned __int64)(unsigned int)i << 6), v15) >= 0
            && (gMUICacheType & 2) != 0 )
          {
            v24 = (unsigned __int64)(unsigned int)i << 6;
            if ( *(_DWORD *)(v24 + AlternateResourceModules + 56) == -1073741799 )
              *v23 = *(_QWORD *)(v24 + AlternateResourceModules + 32);
          }
        }
        goto LABEL_72;
      }
    }
  }
  v33 = 0LL;
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v33, i);
  if ( v33 )
  {
    v15 = *(unsigned int *)(v33 + 88);
    v25 = AlternateResourceModules;
    v26 = AlternateResourceModules + ((unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6);
    *(_QWORD *)(v26 + 8) = a1;
    *(_QWORD *)(v26 + 16) = a4;
    if ( (v11 & 1) != 0 )
    {
      v27 = v34;
      if ( v34 )
        v28 = *v34;
      else
        v28 = 0LL;
      *(_QWORD *)(v26 + 32) = v28;
      if ( a3 )
        v12 = *a3;
      *(_QWORD *)(v26 + 40) = v12;
      *(_QWORD *)(v26 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v26 + 32) = 0LL;
      *(_QWORD *)(v26 + 40) = 0LL;
      *(_QWORD *)(v26 + 48) = 0LL;
      v27 = v34;
    }
    *(_WORD *)v26 = v14;
    *(_DWORD *)(v26 + 24) = v15;
    *(_DWORD *)(v26 + 56) = a7;
    if ( gMUICacheType )
    {
      if ( (v11 & 1) != 0 )
      {
        v31 = i << 6;
        LOBYTE(v15) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v31 + v25, v15) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)(v31 + AlternateResourceModules + 56) == -1073741799 )
        {
          *v27 = *(_QWORD *)(v31 + AlternateResourceModules + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_72:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock, v15);
  return 1;
}
