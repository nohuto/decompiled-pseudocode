/*
 * XREFs of LdrpCallTlsInitializers @ 0x1800365C0
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011AE58 (LdrpProcessDetachNode.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     LdrpCallInitRoutine @ 0x1800369EC (LdrpCallInitRoutine.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

int __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  char *v4; // r9
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  volatile signed __int64 *v7; // rax
  char v8; // cl
  _UNKNOWN **v9; // rbx
  _UNKNOWN **j; // rax
  signed __int64 v11; // rax
  _BYTE *v12; // rsi
  struct _TEB *v13; // rax
  _QWORD *v14; // rdx
  unsigned int n; // ecx
  __int64 *v16; // rbx
  __int64 v17; // rsi
  signed __int64 v18; // r8
  signed __int64 v19; // rtt
  _QWORD *v20; // rcx
  __int64 k; // r8
  __int64 v22; // rdx
  signed __int64 v23; // r8
  __int64 v24; // rcx
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  _RTL_SRWLOCK *v27; // r15
  _QWORD *v28; // r8
  __int64 m; // rdx
  __int64 v30; // rax
  bool v31; // zf
  signed __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  signed __int64 v36; // rax
  _QWORD ThreadInformation[3]; // [rsp+58h] [rbp-30h] BYREF

  v4 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v4 = (char *)&SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v4 )
    *(_QWORD *)v4 = &LdrpTlsLock;
  v7 = (volatile signed __int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 17LL, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockSharedContended((volatile signed __int64 *)&LdrpTlsLock, (unsigned __int64)v4, v7, v4);
  v8 = 0;
  v9 = 0LL;
  for ( j = (_UNKNOWN **)LdrpTlsList; j != &LdrpTlsList; j = (_UNKNOWN **)*j )
  {
    v9 = j;
    if ( j[7] == (_UNKNOWN *)a2 )
    {
      v8 = 1;
      break;
    }
  }
  if ( !v8 )
    v9 = 0LL;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 0LL, 17LL);
  if ( v11 != 17 )
  {
    if ( (v11 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v11 & 2) == 0 )
    {
      v18 = 0LL;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v18 = v11 - 16;
      v19 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v18, v11);
      if ( v19 == v11 )
        goto LABEL_19;
    }
    if ( (v11 & 8) != 0 )
    {
      v20 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( k = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v20[1] )
        v20 = (_QWORD *)*v20;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_19;
      v22 = -9LL;
    }
    else
    {
      v22 = -1LL;
    }
    do
    {
      v23 = v11 & 6;
      v24 = v22 + 4;
      if ( v23 != 2 )
        v24 = v22;
      v25 = v11 + v24;
      v26 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v25, v11);
    }
    while ( v26 != v11 );
    if ( v23 == 2 )
    {
      v27 = &LdrpTlsLock;
      while ( 1 )
      {
        while ( (v25 & 1) != 0 )
        {
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v25 - 4, v25);
          v31 = v25 == v36;
          v25 = v36;
          if ( v31 )
            goto LABEL_19;
        }
        v28 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( m = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !m; m = v28[1] )
        {
          v33 = v28;
          v28 = (_QWORD *)*v28;
          v28[2] = v33;
        }
        if ( v28 != (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = m;
        if ( (*(_DWORD *)(m + 36) & 1) != 0 )
        {
          v30 = *(_QWORD *)(m + 16);
          if ( v30 )
            break;
        }
        v27 = 0LL;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 0LL, v25);
        v31 = v25 == v32;
        v25 = v32;
        if ( v31 )
          goto LABEL_64;
      }
      *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
      *(_QWORD *)(m + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpTlsLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_64:
        v34 = *(_QWORD *)(m + 16);
        v35 = *(_QWORD *)(m + 24);
        _interlockedbittestandset((volatile signed __int32 *)(m + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(m + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v35, v27, v28);
        m = v34;
      }
      while ( v34 );
    }
  }
LABEL_19:
  v12 = 0LL;
  v13 = NtCurrentTeb();
  v14 = v13->SchedulerSharedDataSlot;
  if ( v14 )
  {
    for ( n = 0; n < 8; ++n )
    {
      v13 = (struct _TEB *)(v14[n] & 0x7FFFFFFFFFFFFFFCLL);
      if ( v13 == (struct _TEB *)((unsigned __int64)&LdrpTlsLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        v12 = &v14[n];
        break;
      }
    }
  }
  if ( v12 )
  {
    *v12 |= 2u;
    if ( (char)v12[7] < 0 )
    {
      ThreadInformation[1] = 0LL;
      ThreadInformation[0] = (v12 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      LODWORD(v13) = NtSetInformationThread(
                       (HANDLE)0xFFFFFFFFFFFFFFFELL,
                       ThreadUpdateLockOwnership,
                       ThreadInformation,
                       0x10u);
    }
    *(_QWORD *)v12 = 0LL;
  }
  if ( v9 )
  {
    v16 = (__int64 *)v9[5];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          break;
        ++v16;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrtls.c",
          1187,
          (__int64)"LdrpCallTlsInitializers",
          2,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v17,
          a2 + 72,
          *(_QWORD *)(a2 + 48));
        LODWORD(v13) = LdrpCallInitRoutine(ImageTlsCallbackCaller, *(_QWORD *)(a2 + 48), a1, v17);
      }
    }
  }
  return (int)v13;
}
