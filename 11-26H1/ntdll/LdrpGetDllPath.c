/*
 * XREFs of LdrpGetDllPath @ 0x18009B5E0
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x180099A0C (LdrpComputeLazyDllPath.c)
 *     LdrGetDllPath @ 0x18009B5B0 (LdrGetDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009BB50 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18009BBF0 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlpComputeDllPath @ 0x18009BCE0 (RtlpComputeDllPath.c)
 *     RtlpGetCachedPath @ 0x18009BDD0 (RtlpGetCachedPath.c)
 */

__int64 __fastcall LdrpGetDllPath(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _OWORD *a6, _QWORD *a7)
{
  bool v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // rbp
  char v12; // si
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 CachedPath; // rax
  __int64 v16; // rbx
  char v17; // si
  __int64 v18; // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // rsi

  v9 = (a2 & 0x2000) != 0;
  v10 = a2 & 0xFFFFDFFF;
  v11 = 0LL;
  if ( (a2 & 8) != 0 )
  {
    if ( v10 != 8 )
      return 3221225485LL;
    v10 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v10 )
      goto LABEL_4;
  }
  if ( LdrpDefaultDllDirectories )
  {
    v9 = (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v10 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v13 = 0LL;
  if ( (v10 & 0x100) != 0 || v12 )
  {
    v20 = RtlDetermineDosPathNameType_U(a1);
    if ( (unsigned int)(v20 - 1) <= 1 )
    {
      v23 = 0;
    }
    else
    {
      if ( v20 != 6 || *(_WORD *)(a1 + 4) != 63 )
      {
        v13 = a1;
LABEL_45:
        if ( v12 )
        {
          LdrpLogRelativePathWithAlteredSearchError(a1);
          if ( (LdrpPolicyBits & 0x40) != 0 )
          {
            v12 = 0;
            if ( (v10 & 0x100) == 0 )
              goto LABEL_6;
          }
        }
        if ( !v10 )
        {
LABEL_15:
          if ( v13 )
          {
            v17 = 0;
            v16 = 0LL;
          }
          else
          {
            v17 = 1;
            RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2);
            v16 = RtlpDllSearchPath;
            if ( RtlpDllSearchPath
              && *(_QWORD *)(RtlpDllSearchPath + 96) == LdrpAppPackagesPathVersion
              && (*(_BYTE *)(RtlpDllSearchPath + 116)
               || *(_QWORD *)(RtlpDllSearchPath + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
            {
              ++*(_QWORD *)(RtlpDllSearchPath + 80);
              RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
              v18 = v16;
              goto LABEL_21;
            }
            RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
          }
          v21 = RtlpComputeDllPath(v13, 0LL);
          v18 = v21;
          if ( !v21 )
            goto LABEL_61;
          *(_QWORD *)(v21 + 80) = 1LL;
          if ( v17 )
          {
            v24 = 0LL;
            RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v22);
            if ( RtlpDllSearchPath == v16 )
            {
              RtlpDllSearchPath = v18;
              ++*(_QWORD *)(v18 + 80);
              if ( v16 )
              {
                if ( (*(_QWORD *)(v16 + 80))-- == 1LL )
                  v24 = v16;
              }
            }
            RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
            if ( v24 )
              RtlFreeHeap_0();
          }
          v16 = v18;
LABEL_21:
          *a7 = *(_QWORD *)(v18 + 104);
          goto LABEL_22;
        }
        return 3221225485LL;
      }
      v23 = (unsigned int)RtlDetermineDosPathNameType_U(a1 + 8) != 2;
    }
    v13 = a1;
    if ( !v23 )
      goto LABEL_6;
    goto LABEL_45;
  }
LABEL_6:
  if ( !v10 )
    goto LABEL_15;
  if ( (v10 & 0x1000) != 0 )
  {
    v10 |= 0xA00u;
    if ( (LdrpPolicyBits & 4) != 0 )
      v10 |= 0x400u;
  }
  v14 = v10;
  LODWORD(v14) = v10 | 0x100;
  if ( !v12 )
    v14 = v10;
  CachedPath = RtlpGetCachedPath(&RtlpDllSearchPathWithOptions, RtlpComputeDllPathWithOptions, v14, v13);
  v16 = CachedPath;
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
LABEL_22:
    if ( a6 )
    {
      *a6 = *(_OWORD *)v16;
      a6[1] = *(_OWORD *)(v16 + 16);
      a6[2] = *(_OWORD *)(v16 + 32);
      a6[3] = *(_OWORD *)(v16 + 48);
      a6[4] = *(_OWORD *)(v16 + 64);
    }
    *a3 = v16 + 128;
    if ( a4 )
    {
      if ( v9 )
        v11 = *(_QWORD *)(v16 + 120);
      *a4 = v11;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v16 + 112);
    LdrpLogDllStateEx2(a5, a1, *a3, 5313LL);
    return 0LL;
  }
LABEL_61:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *a7 = 0LL;
  return 3221225495LL;
}
