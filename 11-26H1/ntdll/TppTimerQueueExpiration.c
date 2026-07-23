/*
 * XREFs of TppTimerQueueExpiration @ 0x180088790
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppETWTimerSetNtTimer @ 0x1800884D4 (TppETWTimerSetNtTimer.c)
 *     TppPHExtractMin @ 0x180088E30 (TppPHExtractMin.c)
 *     TppETWTimerExpirationBegin @ 0x180088EDC (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x180088F64 (TppETWTimerExpirationEnd.c)
 *     TppSingleTimerExpiration @ 0x180089240 (TppSingleTimerExpiration.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160070 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x180162650 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  _RTL_SRWLOCK *ApcContext; // rsi
  unsigned __int8 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD **v14; // rcx
  _QWORD *v15; // r11
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r8
  _QWORD *v21; // r11
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int128 *v24; // rbx
  char *v25; // rcx
  _DWORD *v26; // rcx
  LARGE_INTEGER v28; // rbx
  LARGE_INTEGER v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int128 v33; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-58h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+58h] [rbp-50h] BYREF

  ApcContext = a3;
  DueTime.QuadPart = 0LL;
  v33 = 0LL;
  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.NoWakeTolerance = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  }
  v8 = (unsigned __int64)&ApcContext[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter();
  else
    *(_DWORD *)(a1 + 72) = 3;
  v9 = 2147353478LL;
  *((_QWORD *)&v33 + 1) = &v33;
  *(_QWORD *)&v33 = &v33;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v11 = 2147353478LL;
  if ( *(_BYTE *)v11 )
    TppETWTimerExpirationBegin(v8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(ApcContext);
  while ( 1 )
  {
    v12 = *(_QWORD *)(v8 + 8);
    if ( !v12 || *(_QWORD *)(v12 + 40) > v7 )
      break;
    *(_QWORD *)(v12 + 32) = 0LL;
    TppPHExtractMin(v8 + 8);
    v13 = *(_QWORD *)(v8 + 16);
    v14 = (_QWORD **)(v8 + 16);
    v15 = (_QWORD *)(v12 - 40);
    if ( v12 - 40 != v13 )
    {
      v16 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_19;
      v17 = *(_QWORD **)(v12 - 32);
      if ( (_QWORD *)*v17 != v15
        || (*v17 = v16,
            *(_QWORD *)(v16 + 8) = v17,
            v18 = (_QWORD *)(v12 - 24),
            *(_QWORD *)(v12 - 32) = v15,
            *v15 = v15,
            v19 = *(_QWORD *)(v12 - 24),
            v20 = *v14,
            *(_QWORD *)(v19 + 8) != v12 - 24) )
      {
LABEL_19:
        __fastfail(3u);
      }
      v20[1] = v18;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      *v18 = v20;
      v13 = v12 - 40;
      *v14 = v15;
    }
    *(_QWORD *)(v13 + 32) = 0LL;
    TppPHExtractMin(v14);
    *(_BYTE *)(v12 + 64) = 0;
    v22 = (_QWORD *)*((_QWORD *)&v33 + 1);
    if ( **((__int128 ***)&v33 + 1) != &v33 )
      goto LABEL_19;
    *(_QWORD *)(v12 - 32) = *((_QWORD *)&v33 + 1);
    *v21 = &v33;
    *v22 = v21;
    *((_QWORD *)&v33 + 1) = v21;
  }
  v23 = *(_QWORD *)(v8 + 16);
  if ( v23 )
  {
    v28 = *(LARGE_INTEGER *)(v12 + 32);
    v29.QuadPart = v7 - v28.QuadPart;
    v30 = *(_QWORD *)(v23 + 32) - v28.QuadPart;
    *(LARGE_INTEGER *)v8 = v28;
    v31 = (unsigned int)((int)v30 / 10000);
    *(_DWORD *)(v8 + 112) = v31;
    Parameters.NoWakeTolerance = 10000 * v31;
    if ( !v5 )
      v28 = v29;
    DueTime = v28;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v28 = DueTime;
      v32 = (__int64)NtCurrentPeb()->SharedData + 556;
    }
    else
    {
      v32 = 2147353478LL;
    }
    if ( *(_BYTE *)v32 )
      TppETWTimerSetNtTimer(v8, v28.QuadPart, v31);
    ZwSetTimer2(*(HANDLE *)(v8 + 24), &DueTime, 0LL, &Parameters);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v24 = (__int128 *)v33;
  while ( v24 != &v33 )
  {
    v25 = (char *)v24 - 248;
    v24 = *(__int128 **)v24;
    TppSingleTimerExpiration(v25, ApcContext, v5);
  }
  v26 = NtCurrentPeb()->SharedData;
  if ( v26 && *v26 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v9 )
    TppETWTimerExpirationEnd(v8);
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v8 + 32),
           ApcContext[-6].Ptr,
           *(HANDLE *)(v8 + 24),
           (PVOID)(v8 + 40),
           ApcContext,
           0,
           v5,
           0LL);
}
