/*
 * XREFs of LdrSetDllDirectory @ 0x18003DCA0
 * Callers:
 *     LdrpInitializePolicy @ 0x1800C1DF0 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     wcschr @ 0x18012D9A0 (wcschr.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  __int128 v1; // xmm0
  const wchar_t *v3; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  signed __int8 v7; // cf
  __int128 v8; // xmm1
  signed __int64 v9; // rax
  char *v10; // rcx
  unsigned int j; // edx
  char *v12; // rbx
  _QWORD *v13; // rdx
  unsigned int k; // ecx
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rdi
  signed __int64 v18; // rax
  char *v19; // rcx
  unsigned int m; // edx
  char *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  __int64 *v27; // rsi
  _QWORD *v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  signed __int64 v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rdx
  signed __int64 v35; // rcx
  signed __int64 v36; // rtt
  __int64 *v37; // r14
  _QWORD *v38; // r8
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rax
  signed __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rcx
  signed __int64 v47; // rax
  signed __int64 v48; // rax
  __int128 v49; // [rsp+20h] [rbp-48h] BYREF
  __int128 v50; // [rsp+30h] [rbp-38h]

  v1 = 0LL;
  v49 = 0LL;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v3 = *(const wchar_t **)(a1 + 8);
  if ( v3 )
  {
    if ( wcschr(v3, 0x3Bu) )
      return 3221225485LL;
    if ( !RtlCreateUnicodeString((__int64)&v49, *(const wchar_t **)(a1 + 8)) )
      return 3221225495LL;
    v1 = v49;
  }
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        SchedulerSharedDataSlot[i] = &LdrpDllDirectoryLock;
        break;
      }
    }
  }
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&LdrpDllDirectoryLock, 0LL);
  if ( v7 )
  {
    RtlpAcquireSRWLockExclusiveContended(&LdrpDllDirectoryLock, (__int64)SchedulerSharedDataSlot);
    v1 = v49;
  }
  v8 = LdrpDllDirectory;
  LdrpDllDirectory = v1;
  v50 = v8;
  v9 = _InterlockedCompareExchange64(&LdrpDllDirectoryLock, 0LL, 1LL);
  if ( v9 != 1 )
  {
    do
    {
      v23 = 3LL;
      v24 = v9 & 6;
      if ( v24 != 2 )
        v23 = -1LL;
      v25 = v9 + v23;
      v26 = v9;
      v9 = _InterlockedCompareExchange64(&LdrpDllDirectoryLock, v25, v9);
    }
    while ( v26 != v9 );
    if ( v24 == 2 )
    {
      v27 = &LdrpDllDirectoryLock;
      while ( 1 )
      {
        while ( (v25 & 1) != 0 )
        {
          v47 = _InterlockedCompareExchange64(&LdrpDllDirectoryLock, v25 - 4, v25);
          v16 = v25 == v47;
          v25 = v47;
          if ( v16 )
            goto LABEL_12;
        }
        v28 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
        v29 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v29 )
        {
          do
          {
            v30 = v28;
            v28 = (_QWORD *)*v28;
            v28[2] = v30;
            v29 = v28[1];
          }
          while ( !v29 );
          if ( v28 != (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v29;
        }
        if ( (*(_DWORD *)(v29 + 36) & 1) != 0 )
        {
          v31 = *(_QWORD *)(v29 + 16);
          if ( v31 )
            break;
        }
        v27 = 0LL;
        v32 = _InterlockedCompareExchange64(&LdrpDllDirectoryLock, 0LL, v25);
        v16 = v25 == v32;
        v25 = v32;
        if ( v16 )
          goto LABEL_86;
      }
      *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
      *(_QWORD *)(v29 + 16) = 0LL;
      _InterlockedAnd64(&LdrpDllDirectoryLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_86:
        v43 = *(_QWORD *)(v29 + 16);
        v44 = *(_QWORD *)(v29 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v29 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v29 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v44, v27, v28);
        v29 = v43;
      }
      while ( v43 );
    }
  }
LABEL_12:
  v10 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v10 )
  {
    for ( j = 0; j < 8; ++j )
    {
      v12 = &v10[8 * j];
      if ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpDllDirectoryLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v12 )
        {
          *v12 |= 2u;
          if ( v12[7] < 0 )
          {
            *((_QWORD *)&v49 + 1) = 0LL;
            *(_QWORD *)&v49 = (v12 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread(-2LL, 56LL, &v49, 16LL);
          }
          *(_QWORD *)v12 = 0LL;
        }
        break;
      }
    }
  }
  v13 = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v13 )
  {
    for ( k = 0; k < 8; ++k )
    {
      if ( !v13[k] )
      {
        v13[k] = &RtlpCachedPathLock;
        break;
      }
    }
  }
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&RtlpCachedPathLock, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockExclusiveContended(&RtlpCachedPathLock, (__int64)v13);
  v15 = RtlpDllSearchPath;
  RtlpDllSearchPath = 0LL;
  if ( !v15 || (v16 = *(_QWORD *)(v15 + 80) == 1LL, --*(_QWORD *)(v15 + 80), !v16) )
    v15 = 0LL;
  v17 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( !v17 || (v16 = *(_QWORD *)(v17 + 80) == 1LL, --*(_QWORD *)(v17 + 80), !v16) )
    v17 = 0LL;
  v18 = _InterlockedCompareExchange64(&RtlpCachedPathLock, 0LL, 1LL);
  if ( v18 != 1 )
  {
    do
    {
      v33 = 3LL;
      v34 = v18 & 6;
      if ( v34 != 2 )
        v33 = -1LL;
      v35 = v18 + v33;
      v36 = v18;
      v18 = _InterlockedCompareExchange64(&RtlpCachedPathLock, v35, v18);
    }
    while ( v36 != v18 );
    if ( v34 == 2 )
    {
      v37 = &RtlpCachedPathLock;
      while ( 1 )
      {
        while ( (v35 & 1) != 0 )
        {
          v48 = _InterlockedCompareExchange64(&RtlpCachedPathLock, v35 - 4, v35);
          v16 = v35 == v48;
          v35 = v48;
          if ( v16 )
            goto LABEL_31;
        }
        v38 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0uLL);
        v39 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v39 )
        {
          do
          {
            v40 = v38;
            v38 = (_QWORD *)*v38;
            v38[2] = v40;
            v39 = v38[1];
          }
          while ( !v39 );
          if ( v38 != (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v39;
        }
        if ( (*(_DWORD *)(v39 + 36) & 1) != 0 )
        {
          v41 = *(_QWORD *)(v39 + 16);
          if ( v41 )
            break;
        }
        v37 = 0LL;
        v42 = _InterlockedCompareExchange64(&RtlpCachedPathLock, 0LL, v35);
        v16 = v35 == v42;
        v35 = v42;
        if ( v16 )
          goto LABEL_91;
      }
      *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v41;
      *(_QWORD *)(v39 + 16) = 0LL;
      _InterlockedAnd64(&RtlpCachedPathLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_91:
        v45 = *(_QWORD *)(v39 + 16);
        v46 = *(_QWORD *)(v39 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v39 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v39 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v46, v37, v38);
        v39 = v45;
      }
      while ( v45 );
    }
  }
LABEL_31:
  v19 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v19 )
  {
    for ( m = 0; m < 8; ++m )
    {
      v21 = &v19[8 * m];
      if ( (*(_QWORD *)v21 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&RtlpCachedPathLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        if ( v21 )
        {
          *v21 |= 2u;
          if ( v21[7] < 0 )
          {
            *((_QWORD *)&v49 + 1) = 0LL;
            *(_QWORD *)&v49 = (v21 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread(-2LL, 56LL, &v49, 16LL);
          }
          *(_QWORD *)v21 = 0LL;
        }
        break;
      }
    }
  }
  v22 = _mm_srli_si128((__m128i)v50, 8).m128i_u64[0];
  if ( v22 )
    RtlpSysVolFree(v22);
  if ( v15 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v15);
  if ( v17 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v17);
  return 1LL;
}
