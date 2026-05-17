/*
 * XREFs of LdrpCallTlsInitializers @ 0x18004C040
 * Callers:
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011B0A8 (LdrpProcessDetachNode.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     LdrpCallInitRoutine @ 0x18004C46C (LdrpCallInitRoutine.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

struct _TEB *__fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // r9
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  unsigned __int64 v7; // rax
  char v8; // cl
  _UNKNOWN **v9; // rbx
  _UNKNOWN **j; // rax
  signed __int64 v11; // rax
  _BYTE *v12; // rsi
  struct _TEB *result; // rax
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
  __int64 *v27; // r15
  _QWORD *v28; // r8
  __int64 m; // rdx
  __int64 v30; // rax
  bool v31; // zf
  signed __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  signed __int64 v36; // rax
  _QWORD v37[3]; // [rsp+58h] [rbp-30h] BYREF

  v4 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v4 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v4 )
    *v4 = &LdrpTlsLock;
  v7 = _InterlockedCompareExchange64(&LdrpTlsLock, 17LL, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockSharedContended(&LdrpTlsLock, (unsigned __int64)v4, v7, (unsigned __int64)v4);
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
  v11 = _InterlockedCompareExchange64(&LdrpTlsLock, 0LL, 17LL);
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
      v11 = _InterlockedCompareExchange64(&LdrpTlsLock, v18, v11);
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
      v11 = _InterlockedCompareExchange64(&LdrpTlsLock, v25, v11);
    }
    while ( v26 != v11 );
    if ( v23 == 2 )
    {
      v27 = &LdrpTlsLock;
      while ( 1 )
      {
        while ( (v25 & 1) != 0 )
        {
          v36 = _InterlockedCompareExchange64(&LdrpTlsLock, v25 - 4, v25);
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
        v32 = _InterlockedCompareExchange64(&LdrpTlsLock, 0LL, v25);
        v31 = v25 == v32;
        v25 = v32;
        if ( v31 )
          goto LABEL_64;
      }
      *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
      *(_QWORD *)(m + 16) = 0LL;
      _InterlockedAnd64(&LdrpTlsLock, 0xFFFFFFFFFFFFFFFBuLL);
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
  result = NtCurrentTeb();
  v14 = result->SchedulerSharedDataSlot;
  if ( v14 )
  {
    for ( n = 0; n < 8; ++n )
    {
      result = (struct _TEB *)(v14[n] & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)((unsigned __int64)&LdrpTlsLock & 0x7FFFFFFFFFFFFFFCLL) )
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
      v37[1] = 0LL;
      v37[0] = (v12 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v37, 16LL);
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
          (int)"minkernel\\ldr\\ldrtls.c",
          1187,
          (__int64)"LdrpCallTlsInitializers",
          2,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v17,
          a2 + 72,
          *(_QWORD *)(a2 + 48));
        result = (struct _TEB *)LdrpCallInitRoutine(ImageTlsCallbackCaller, *(_QWORD *)(a2 + 48), a1, v17);
      }
    }
  }
  return result;
}
