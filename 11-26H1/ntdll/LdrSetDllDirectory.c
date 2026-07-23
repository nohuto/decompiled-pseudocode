/*
 * XREFs of LdrSetDllDirectory @ 0x180028210
 * Callers:
 *     LdrpInitializePolicy @ 0x1800EB844 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     wcschr @ 0x18012D710 (wcschr.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  UNICODE_STRING v1; // xmm0
  wchar_t *Buffer; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  signed __int8 v7; // cf
  UNICODE_STRING v8; // xmm1
  signed __int64 v9; // rax
  char *v10; // rcx
  unsigned int j; // edx
  char *v12; // rbx
  _QWORD *v13; // rdx
  unsigned int k; // ecx
  _QWORD *v15; // rsi
  bool v16; // zf
  _QWORD *v17; // rdi
  signed __int64 v18; // rax
  char *v19; // rcx
  unsigned int m; // edx
  char *v21; // rbx
  void *v22; // rcx
  __int64 v23; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  _RTL_SRWLOCK *v27; // rsi
  _QWORD *v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  signed __int64 v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rdx
  signed __int64 v35; // rcx
  signed __int64 v36; // rtt
  _RTL_SRWLOCK *v37; // r14
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
  _UNICODE_STRING ThreadInformation; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v50; // [rsp+30h] [rbp-38h]

  v1 = 0LL;
  ThreadInformation = 0LL;
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( Buffer )
  {
    if ( wcschr(Buffer, 0x3Bu) )
      return -1073741811;
    if ( !RtlCreateUnicodeString(&ThreadInformation, DllDirectory->Buffer) )
      return -1073741801;
    v1 = ThreadInformation;
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
    RtlpAcquireSRWLockExclusiveContended(
      (volatile signed __int64 *)&LdrpDllDirectoryLock,
      (unsigned __int64)SchedulerSharedDataSlot);
    v1 = ThreadInformation;
  }
  v8 = LdrpDllDirectory;
  LdrpDllDirectory = v1;
  v50 = v8;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0LL, 1LL);
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
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, v25, v9);
    }
    while ( v26 != v9 );
    if ( v24 == 2 )
    {
      v27 = &LdrpDllDirectoryLock;
      while ( 1 )
      {
        while ( (v25 & 1) != 0 )
        {
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, v25 - 4, v25);
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
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0LL, v25);
        v16 = v25 == v32;
        v25 = v32;
        if ( v16 )
          goto LABEL_86;
      }
      *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
      *(_QWORD *)(v29 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpDllDirectoryLock, 0xFFFFFFFFFFFFFFFBuLL);
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
            ThreadInformation.Buffer = 0LL;
            *(_QWORD *)&ThreadInformation.Length = (v12 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, &ThreadInformation, 0x10u);
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
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&RtlpCachedPathLock, (unsigned __int64)v13);
  v15 = RtlpDllSearchPath;
  RtlpDllSearchPath = 0LL;
  if ( !v15 || (v16 = v15[10] == 1LL, --v15[10], !v16) )
    v15 = 0LL;
  v17 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( !v17 || (v16 = v17[10] == 1LL, --v17[10], !v16) )
    v17 = 0LL;
  v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, 0LL, 1LL);
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
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, v35, v18);
    }
    while ( v36 != v18 );
    if ( v34 == 2 )
    {
      v37 = &RtlpCachedPathLock;
      while ( 1 )
      {
        while ( (v35 & 1) != 0 )
        {
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, v35 - 4, v35);
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
        v42 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpCachedPathLock, 0LL, v35);
        v16 = v35 == v42;
        v35 = v42;
        if ( v16 )
          goto LABEL_91;
      }
      *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v41;
      *(_QWORD *)(v39 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&RtlpCachedPathLock, 0xFFFFFFFFFFFFFFFBuLL);
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
            ThreadInformation.Buffer = 0LL;
            *(_QWORD *)&ThreadInformation.Length = (v21 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, &ThreadInformation, 0x10u);
          }
          *(_QWORD *)v21 = 0LL;
        }
        break;
      }
    }
  }
  v22 = (void *)_mm_srli_si128((__m128i)v50, 8).m128i_u64[0];
  if ( v22 )
    RtlpSysVolFree(v22);
  if ( v15 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( v17 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v17);
  return 1;
}
