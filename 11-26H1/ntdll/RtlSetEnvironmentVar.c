/*
 * XREFs of RtlSetEnvironmentVar @ 0x18009D730
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x18009A29C (RtlpResetDriveEnvironment.c)
 *     RtlSetEnvironmentVariable @ 0x18009D580 (RtlSetEnvironmentVariable.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18009D5C0 (RtlpWow64ThunkEnvironmentTo64.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpClearEnvironmentHashTable @ 0x18009E00C (RtlpClearEnvironmentHashTable.c)
 *     RtlpAllocationSize @ 0x18009E108 (RtlpAllocationSize.c)
 *     RtlpAllocateEnvBlock @ 0x18009E128 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  SIZE_T v6; // r10
  __int64 FastPebLock; // rdx
  SIZE_T v9; // r12
  SIZE_T i; // rax
  WCHAR v11; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  char *v15; // rbx
  _BYTE *v16; // r15
  char *v17; // rsi
  char *v18; // r14
  char *v19; // r15
  unsigned __int64 v20; // rdi
  char *v21; // r9
  PCWSTR v22; // r8
  char *v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  int v28; // ecx
  char *v29; // rax
  SIZE_T v30; // rdi
  char *v31; // r14
  __int16 v32; // ax
  unsigned __int64 v33; // rcx
  SIZE_T v34; // rbx
  SIZE_T v35; // rdx
  SIZE_T v36; // r12
  char *v37; // rax
  char *v38; // r15
  __int64 v39; // rbx
  char *v40; // rdi
  char *v41; // rdi
  NTSTATUS v42; // r13d
  char *v43; // rax
  __int64 v44; // rcx
  char v45; // r14
  _RTL_USER_PROCESS_PARAMETERS *v46; // rax
  char *v47; // r14
  __int16 v48; // ax
  char *v49; // rcx
  SIZE_T v50; // r15
  char *EnvBlock; // r12
  size_t v52; // rbx
  char *v53; // rdi
  size_t v54; // rbx
  __int64 v55; // rcx
  char *v56; // rsi
  char v58; // [rsp+20h] [rbp-A8h]
  char v59; // [rsp+21h] [rbp-A7h]
  _BYTE *Src; // [rsp+28h] [rbp-A0h]
  _RTL_USER_PROCESS_PARAMETERS *v61; // [rsp+30h] [rbp-98h]
  char *v62; // [rsp+38h] [rbp-90h]
  char *v63; // [rsp+58h] [rbp-70h]

  v6 = NameLength;
  FastPebLock = (__int64)Environment;
  v63 = 0LL;
  v9 = 0LL;
  v58 = 0;
  v59 = 0;
  if ( !NameLength || !*Name )
    return -1073741811;
  for ( i = 1LL; i < NameLength; ++i )
  {
    v11 = Name[i];
    if ( !v11 || v11 == 61 )
      return -1073741811;
  }
  if ( Value )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !Value[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v61 = ProcessParameters;
  v15 = 0LL;
  v62 = 0LL;
  if ( FastPebLock )
  {
    v16 = *(_BYTE **)FastPebLock;
    Src = *(_BYTE **)FastPebLock;
    if ( ProcessParameters->Environment == *(void **)FastPebLock )
    {
      FastPebLock = (__int64)ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock || *(void **)(FastPebLock + 16) == NtCurrentTeb()->ClientId.UniqueThread )
        v58 = 1;
    }
  }
  else
  {
    v59 = 1;
    v58 = 1;
    RtlEnterCriticalSection(&::FastPebLock);
    v16 = ProcessParameters->Environment;
    Src = v16;
    v6 = NameLength;
  }
  v17 = v16;
  v18 = 0LL;
  if ( !v16 )
  {
    v30 = ValueLength;
    goto LABEL_53;
  }
  FastPebLock = 192LL;
  while ( 1 )
  {
    if ( !*(_WORD *)v17 )
    {
      v30 = ValueLength;
LABEL_51:
      v15 = v62;
      goto LABEL_53;
    }
    v19 = v17;
    v20 = 0LL;
    while ( 1 )
    {
      v17 += 2;
      if ( !*(_WORD *)v17 )
        break;
      if ( *(_WORD *)v17 == 61 )
      {
        v20 = (v17 - v19) >> 1;
        v17 += 2;
        v21 = v17;
        v63 = v17;
        while ( *(_WORD *)v17 )
          v17 += 2;
        v9 = (v17 - v21) >> 1;
        break;
      }
    }
    v17 += 2;
    v22 = Name;
    v23 = v19;
    v24 = v20;
    if ( v6 <= v20 )
      v24 = v6;
    while ( v22 < &Name[v24] )
    {
      v25 = *v22;
      v26 = *(unsigned __int16 *)v23;
      if ( (_WORD)v25 != (_WORD)v26 )
      {
        v27 = qword_1801C5038;
        if ( (unsigned int)v25 >= 0x61 )
        {
          if ( (unsigned int)v25 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v25 >= 0xC0u )
            {
              v27 = qword_1801C5038;
              LOWORD(v25) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v25 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (*(unsigned __int16 *)(qword_1801C5038 + 2 * (v25 >> 8))
                                                             + (unsigned int)((unsigned __int8)v25 >> 4)))))
                          + v25;
            }
          }
          else
          {
            LOWORD(v25) = v25 - 32;
          }
        }
        if ( (unsigned int)v26 >= 0x61 )
        {
          if ( (unsigned int)v26 > 0x7A )
          {
            if ( v27 && (unsigned __int16)v26 >= 0xC0u )
              LOWORD(v26) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v26 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (*(unsigned __int16 *)(v27 + 2 * (v26 >> 8))
                                                             + (unsigned int)((unsigned __int8)v26 >> 4)))))
                          + v26;
          }
          else
          {
            LOWORD(v26) = v26 - 32;
          }
        }
        FastPebLock = 192LL;
        if ( (_WORD)v25 != (_WORD)v26 )
        {
          v28 = (unsigned __int16)v25 - (unsigned __int16)v26;
          v6 = NameLength;
          goto LABEL_38;
        }
      }
      ++v22;
      v23 += 2;
    }
    v6 = NameLength;
    v28 = NameLength - v20;
LABEL_38:
    if ( !v28 )
      break;
    if ( v28 < 0 )
    {
      v29 = v62;
      if ( !v62 )
        v29 = v19;
      v62 = v29;
    }
    v16 = Src;
  }
  v47 = v17;
  while ( *(_WORD *)v47 )
  {
    do
    {
      v48 = *(_WORD *)v47;
      v47 += 2;
    }
    while ( v48 );
  }
  v18 = v47 + 2;
  if ( !Value )
  {
    memmove(v19, v17, 2 * (unsigned int)((v18 - v17) >> 1));
LABEL_104:
    if ( v58 )
      ((void (*)(void))RtlpClearEnvironmentHashTable)();
    v30 = ValueLength;
    v16 = Src;
    goto LABEL_51;
  }
  v30 = ValueLength;
  if ( ValueLength <= v9 )
  {
    memmove(v63, Value, 2 * ValueLength);
    *(_WORD *)&v63[2 * ValueLength] = 0;
    v49 = &v63[2 * ValueLength + 2];
    if ( ValueLength != v9 )
      memmove(v49, v17, 2 * (unsigned int)((v18 - v17) >> 1));
    if ( v58 )
      RtlpClearEnvironmentHashTable(v49);
    v16 = Src;
    goto LABEL_51;
  }
  v50 = 2 * (ValueLength + ((v18 - Src) >> 1) - v9);
  if ( v50 < RtlpAllocationSize(Src, 192LL) )
  {
    v53 = &v63[2 * ValueLength];
    memmove(v53 + 2, v17, 2 * (unsigned int)((v18 - v17) >> 1));
    *(_WORD *)v53 = 0;
    memmove(v63, Value, 2 * ValueLength);
    if ( !Environment )
    {
      v61->Environment = Src;
      v61->EnvironmentSize = v50;
      ++v61->EnvironmentVersion;
    }
    goto LABEL_104;
  }
  EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v18 - Src) >> 1) - v9));
  if ( !EnvBlock )
  {
    v42 = -1073741670;
    v45 = v58;
    v46 = v61;
    goto LABEL_116;
  }
  v52 = 2LL * (unsigned int)((v63 - Src) >> 1);
  memmove(EnvBlock, Src, v52);
  memmove(&EnvBlock[v52], Value, 2 * ValueLength);
  *(_WORD *)&EnvBlock[2 * ValueLength + v52] = 0;
  memmove(&EnvBlock[2 * ValueLength + 2 + v52], v17, 2 * (unsigned int)((v18 - v17) >> 1));
  if ( Environment )
  {
    *Environment = EnvBlock;
  }
  else
  {
    v61->Environment = EnvBlock;
    v61->EnvironmentSize = v50;
    ++v61->EnvironmentVersion;
  }
  if ( v58 )
    ((void (*)(void))RtlpClearEnvironmentHashTable)();
  if ( v59 )
  {
    RtlLeaveCriticalSection(&::FastPebLock);
    v59 = 0;
  }
  v16 = Src;
  RtlpSysVolFree(Src);
  v30 = ValueLength;
  v15 = v62;
LABEL_53:
  if ( v15 )
    v17 = v15;
  if ( v18 || !Value )
  {
    v42 = 0;
LABEL_75:
    v45 = v58;
LABEL_76:
    v46 = v61;
    goto LABEL_116;
  }
  if ( v17 )
  {
    v31 = v17;
    while ( *(_WORD *)v31 )
    {
      do
      {
        v32 = *(_WORD *)v31;
        v31 += 2;
      }
      while ( v32 );
    }
    v18 = v31 + 2;
    v33 = RtlpAllocationSize(v16, FastPebLock);
    v34 = NameLength;
    v35 = NameLength + v30;
    v36 = 2 * (v30 + NameLength + ((v18 - v16) >> 1)) + 4;
  }
  else
  {
    v34 = NameLength;
    v35 = NameLength + v30;
    v33 = 0LL;
    v36 = 2 * (NameLength + v30) + 6;
  }
  if ( v36 < v33 )
  {
    memmove(&v17[2 * v35 + 4], v17, 2 * (unsigned int)((v18 - v17) >> 1));
    v54 = 2 * v34;
    memmove(v17, Name, v54);
    v45 = v58;
    if ( v58 )
      RtlpClearEnvironmentHashTable(v55);
    v56 = &v17[v54];
    *(_WORD *)v56 = 61;
    memmove(v56 + 2, Value, 2 * ValueLength);
    v42 = 0;
    *(_WORD *)&v56[2 * ValueLength + 2] = 0;
    if ( Environment )
      goto LABEL_76;
    v46 = v61;
    v61->Environment = v16;
    v61->EnvironmentSize = v36;
    ++v61->EnvironmentVersion;
  }
  else
  {
    v37 = (char *)RtlpAllocateEnvBlock(v36);
    v38 = v37;
    if ( v37 )
    {
      if ( v17 )
      {
        v39 = (unsigned int)((v17 - Src) >> 1);
        memmove(v37, Src, 2 * v39);
      }
      else
      {
        v39 = 0LL;
      }
      v40 = &v38[2 * v39];
      memmove(v40, Name, 2 * NameLength);
      *(_WORD *)&v40[2 * NameLength] = 61;
      v41 = &v40[2 * NameLength + 2];
      memmove(v41, Value, 2 * ValueLength);
      v42 = 0;
      *(_WORD *)&v41[2 * ValueLength] = 0;
      v43 = &v41[2 * ValueLength];
      if ( v17 )
      {
        memmove(v43 + 2, v17, 2 * (unsigned int)((v18 - v17) >> 1));
        if ( v58 )
          RtlpClearEnvironmentHashTable(v44);
      }
      else
      {
        *((_WORD *)v43 + 1) = 0;
      }
      if ( Environment )
      {
        *Environment = v38;
      }
      else
      {
        v61->Environment = v38;
        v61->EnvironmentSize = v36;
        ++v61->EnvironmentVersion;
      }
      if ( v59 )
      {
        RtlLeaveCriticalSection(&::FastPebLock);
        v59 = 0;
      }
      RtlpSysVolFree(Src);
      goto LABEL_75;
    }
    v42 = -1073741670;
    v45 = v58;
    v46 = v61;
  }
LABEL_116:
  if ( v42 >= 0 && v45 )
    ++v46->EnvironmentVersion;
  if ( v59 )
    RtlLeaveCriticalSection(&::FastPebLock);
  return v42;
}
