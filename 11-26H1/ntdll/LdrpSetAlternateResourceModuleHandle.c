/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x1800175C0
 * Callers:
 *     LdrIsResItemExist @ 0x180017A70 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18013BC40 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180113FC0 (LdrpSpecialCacheTypeHandle.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
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
  __int64 v15; // rdx
  _QWORD *v16; // r8
  unsigned __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 i; // rbx
  char *v22; // rcx
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 CheckSum; // rdx
  char *v26; // r8
  char *v27; // rcx
  _QWORD *v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *Heap_0; // rax
  __int64 v32; // rbx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp+10h]

  v35 = a2;
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
    v18 = (_QWORD *)((char *)v16 + v17);
    if ( *(_QWORD *)((char *)v16 + v17 + 8) != a1 )
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
        if ( v14 && *(_WORD *)((char *)v16 + v17) == v14 )
          break;
      }
    }
LABEL_10:
    ++v13;
  }
  if ( *v35 == -1LL )
  {
LABEL_17:
    v20 = (unsigned __int64)v13 << 6;
    *v35 = *(_QWORD *)((char *)v16 + v20 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)((char *)v16 + v20 + 40);
    goto LABEL_72;
  }
  if ( (v11 & 0x20) == 0 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*v35 & 0xFFFFFFFFFFFFFFFCuLL));
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
               8u,
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
    v30 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x800uLL);
    v16 = v30;
    if ( !v30 )
      goto LABEL_72;
    AlternateResourceModules = v30;
    AltResMemBlockCount = 32;
  }
  v15 = (unsigned int)AlternateResourceModuleCount;
LABEL_24:
  for ( i = 0LL; (unsigned int)i < (unsigned int)v15; i = (unsigned int)(i + 1) )
  {
    v22 = (char *)&v16[8 * (unsigned __int64)(unsigned int)i];
    if ( *((_QWORD *)v22 + 1) == a1 )
    {
      if ( (v11 & 2) != 0 && !*((_QWORD *)v22 + 2) )
      {
        *((_QWORD *)v22 + 2) = a4;
        *((_DWORD *)v22 + 14) = a7;
        goto LABEL_72;
      }
      if ( (v11 & 1) != 0 && !*((_QWORD *)v22 + 4) && (*(_WORD *)v22 == v14 || !*(_WORD *)v22) )
      {
        v23 = v35;
        *((_QWORD *)v22 + 4) = *v35;
        if ( a3 )
          v12 = *a3;
        v16[8 * (unsigned __int64)(unsigned int)i + 5] = v12;
        LOWORD(v16[8 * (unsigned __int64)(unsigned int)i]) = v14;
        LODWORD(v16[8 * (unsigned __int64)(unsigned int)i + 7]) = a7;
        v16[8 * (unsigned __int64)(unsigned int)i + 6] = a8;
        if ( gMUICacheType )
        {
          LOBYTE(v15) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(&v16[8 * (unsigned __int64)(unsigned int)i], v15) >= 0
            && (gMUICacheType & 2) != 0 )
          {
            v24 = (unsigned __int64)(unsigned int)i << 6;
            if ( *(_DWORD *)((char *)AlternateResourceModules + v24 + 56) == -1073741799 )
              *v23 = *(_QWORD *)((char *)AlternateResourceModules + v24 + 32);
          }
        }
        goto LABEL_72;
      }
    }
  }
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    CheckSum = OutHeaders->OptionalHeader.CheckSum;
    v26 = (char *)AlternateResourceModules;
    v27 = (char *)AlternateResourceModules + 64 * (unsigned __int64)(unsigned int)AlternateResourceModuleCount;
    *((_QWORD *)v27 + 1) = a1;
    *((_QWORD *)v27 + 2) = a4;
    if ( (v11 & 1) != 0 )
    {
      v28 = v35;
      if ( v35 )
        v29 = *v35;
      else
        v29 = 0LL;
      *((_QWORD *)v27 + 4) = v29;
      if ( a3 )
        v12 = *a3;
      *((_QWORD *)v27 + 5) = v12;
      *((_QWORD *)v27 + 6) = a8;
    }
    else
    {
      *((_QWORD *)v27 + 4) = 0LL;
      *((_QWORD *)v27 + 5) = 0LL;
      *((_QWORD *)v27 + 6) = 0LL;
      v28 = v35;
    }
    *(_WORD *)v27 = v14;
    *((_DWORD *)v27 + 6) = CheckSum;
    *((_DWORD *)v27 + 14) = a7;
    if ( gMUICacheType )
    {
      if ( (v11 & 1) != 0 )
      {
        v32 = i << 6;
        LOBYTE(CheckSum) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(&v26[v32], CheckSum) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)((char *)AlternateResourceModules + v32 + 56) == -1073741799 )
        {
          *v28 = *(_QWORD *)((char *)AlternateResourceModules + v32 + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_72:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
