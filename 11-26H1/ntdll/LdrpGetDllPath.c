/*
 * XREFs of LdrpGetDllPath @ 0x18009A710
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x180098B3C (LdrpComputeLazyDllPath.c)
 *     LdrGetDllPath @ 0x18009A6E0 (LdrGetDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009AC80 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18009AD20 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlpComputeDllPath @ 0x18009AE10 (RtlpComputeDllPath.c)
 *     RtlpGetCachedPath @ 0x18009AF00 (RtlpGetCachedPath.c)
 */

__int64 __fastcall LdrpGetDllPath(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  bool v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // rbp
  char v12; // si
  PCWSTR v13; // r14
  __int64 v14; // r8
  __int64 CachedPath; // rax
  _OWORD *v16; // rbx
  char v17; // si
  _QWORD *v18; // rdi
  RTL_PATH_TYPE v20; // eax
  __int64 v21; // rax
  bool v22; // al
  void *v23; // rsi

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
    v20 = RtlDetermineDosPathNameType_U(DosFileName);
    if ( (unsigned int)(v20 - 1) <= 1 )
    {
      v22 = 0;
    }
    else
    {
      if ( v20 != RtlPathTypeLocalDevice || DosFileName[2] != 63 )
      {
        v13 = DosFileName;
LABEL_45:
        if ( v12 )
        {
          LdrpLogRelativePathWithAlteredSearchError(DosFileName);
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
            RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
            v16 = RtlpDllSearchPath;
            if ( RtlpDllSearchPath
              && *((_QWORD *)RtlpDllSearchPath + 12) == LdrpAppPackagesPathVersion
              && (*((_BYTE *)RtlpDllSearchPath + 116)
               || *((_QWORD *)RtlpDllSearchPath + 11) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
            {
              ++*((_QWORD *)RtlpDllSearchPath + 10);
              RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
              v18 = v16;
              goto LABEL_21;
            }
            RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
          }
          v21 = RtlpComputeDllPath(v13, 0LL);
          v18 = (_QWORD *)v21;
          if ( !v21 )
            goto LABEL_61;
          *(_QWORD *)(v21 + 80) = 1LL;
          if ( v17 )
          {
            v23 = 0LL;
            RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
            if ( RtlpDllSearchPath == v16 )
            {
              RtlpDllSearchPath = v18;
              ++v18[10];
              if ( v16 )
              {
                if ( (*((_QWORD *)v16 + 10))-- == 1LL )
                  v23 = v16;
              }
            }
            RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
            if ( v23 )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v23);
          }
          v16 = v18;
LABEL_21:
          *a7 = v18[13];
          goto LABEL_22;
        }
        return 3221225485LL;
      }
      v22 = RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute;
    }
    v13 = DosFileName;
    if ( !v22 )
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
  v16 = (_OWORD *)CachedPath;
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
LABEL_22:
    if ( a6 )
    {
      *a6 = *v16;
      a6[1] = v16[1];
      a6[2] = v16[2];
      a6[3] = v16[3];
      a6[4] = v16[4];
    }
    *a3 = v16 + 8;
    if ( a4 )
    {
      if ( v9 )
        v11 = *((_QWORD *)v16 + 15);
      *a4 = v11;
    }
    if ( a5 )
      *a5 = *((_DWORD *)v16 + 28);
    LdrpLogDllStateEx2(a5, DosFileName, *a3, 5313LL);
    return 0LL;
  }
LABEL_61:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *a7 = 0LL;
  return 3221225495LL;
}
