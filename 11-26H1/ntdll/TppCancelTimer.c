/*
 * XREFs of TppCancelTimer @ 0x180088B20
 * Callers:
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180088570 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     TppTimerpStopCallbackGeneration @ 0x180102050 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppPHExtractMin @ 0x180088E30 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180088FF0 (TppUpdateSubQueueTimer.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // al
  bool v7; // si
  __int64 v9; // r14
  __int64 v10; // rcx
  _RTL_SRWLOCK *v11; // r14
  _DWORD *SharedData; // rdx
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  unsigned __int64 Value; // rdx
  _RTL_SRWLOCK *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // r9
  unsigned __int64 v23; // rax
  _RTL_SRWLOCK *v24; // rcx
  _QWORD *v25; // r11
  __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r8
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  _QWORD v33[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD Fields[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v35; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  _RTL_SRWLOCK *v37; // [rsp+50h] [rbp-48h]
  __int64 v38; // [rsp+58h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 354);
  v7 = (v3 & 2) != 0;
  if ( (v3 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
  v9 = 1LL;
  if ( (v3 & 2) == 0 )
    v9 = 16LL;
  v10 = 2147353478LL;
  v11 = &a2[v9];
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
  {
    Fields[0] = 0;
    v35 = 0LL;
    Fields[1] = 472580096;
    v36 = 0LL;
    v37 = v11;
    v38 = a1;
    v14 = NtCurrentPeb()->SharedData;
    if ( v14 && *v14 )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x20402u, 0x10u, Fields);
  }
  RtlAcquireSRWLockExclusive(a2);
  if ( *(_BYTE *)(a1 + 352) )
  {
    Value = v11[2].Value;
    v16 = v11 + 2;
    v17 = (_QWORD *)(a1 + 248);
    if ( a1 + 248 != Value )
    {
      v18 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_17;
      v19 = *(_QWORD **)(a1 + 256);
      if ( (_QWORD *)*v19 != v17
        || (*v19 = v18,
            *(_QWORD *)(v18 + 8) = v19,
            v20 = (_QWORD *)(a1 + 264),
            *(_QWORD *)(a1 + 256) = a1 + 248,
            *v17 = v17,
            v21 = *(_QWORD *)(a1 + 264),
            v22 = (_QWORD *)v16->Value,
            *(_QWORD *)(v21 + 8) != a1 + 264) )
      {
LABEL_17:
        __fastfail(3u);
      }
      v22[1] = v20;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      *v20 = v22;
      Value = a1 + 248;
      v16->Value = (unsigned __int64)v17;
    }
    *(_QWORD *)(Value + 32) = 0LL;
    TppPHExtractMin(v16);
    v23 = v11[1].Value;
    v24 = v11 + 1;
    v25 = (_QWORD *)(a1 + 288);
    if ( a1 + 288 != v23 )
    {
      v26 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_17;
      v27 = *(_QWORD **)(a1 + 296);
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_17;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = (_QWORD *)(a1 + 304);
      *(_QWORD *)(a1 + 296) = a1 + 288;
      *v25 = v25;
      v29 = *(_QWORD *)(a1 + 304);
      v30 = (_QWORD *)v24->Value;
      if ( *(_QWORD *)(v29 + 8) != a1 + 304 )
        goto LABEL_17;
      v30[1] = v28;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      *v28 = v30;
      v23 = a1 + 288;
      v24->Value = (unsigned __int64)v25;
    }
    *(_QWORD *)(v23 + 32) = 0LL;
    TppPHExtractMin(v24);
    TppUpdateSubQueueTimer(v11, v7);
    *(_BYTE *)(a1 + 352) = 0;
    RtlReleaseSRWLockExclusive(a2);
    *(_DWORD *)(a1 + 348) = 0;
    *(_QWORD *)(a1 + 328) = 0LL;
    *(_BYTE *)(a1 + 354) = 0;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 1;
  }
  else
  {
    RtlReleaseSRWLockExclusive(a2);
    *(_BYTE *)(a1 + 354) |= 4u;
    v33[1] = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw((const void *)(a1 + 336));
    v31 = *(_QWORD *)(a1 + 336);
    do
    {
      v32 = v31;
      v33[0] = v31;
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 336), (signed __int64)v33, v31);
    }
    while ( v31 != v32 );
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    NtWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
    if ( a3 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
