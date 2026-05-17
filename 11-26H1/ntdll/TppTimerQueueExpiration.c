/*
 * XREFs of TppTimerQueueExpiration @ 0x180068340
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppETWTimerSetNtTimer @ 0x180068084 (TppETWTimerSetNtTimer.c)
 *     TppPHExtractMin @ 0x1800689E0 (TppPHExtractMin.c)
 *     TppETWTimerExpirationBegin @ 0x180068A8C (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x180068B14 (TppETWTimerExpirationEnd.c)
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160170 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x180162750 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
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
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int128 v33; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-58h] BYREF
  __int64 v35; // [rsp+58h] [rbp-50h] BYREF
  __int64 v36; // [rsp+60h] [rbp-48h]

  v4 = a3;
  v34 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
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
    a3 = (volatile signed __int64 *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
  }
  v8 = (unsigned __int64)&v4[v6];
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
  RtlAcquireSRWLockExclusive(v4, a2);
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
    v28 = *(_QWORD *)(v12 + 32);
    v29 = v7 - v28;
    v30 = *(_QWORD *)(v23 + 32) - v28;
    *(_QWORD *)v8 = v28;
    v31 = (unsigned int)((int)v30 / 10000);
    *(_DWORD *)(v8 + 112) = v31;
    v36 = 10000 * v31;
    if ( !v5 )
      v28 = v29;
    v34 = v28;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v28 = v34;
      v32 = (__int64)NtCurrentPeb()->SharedData + 556;
    }
    else
    {
      v32 = 2147353478LL;
    }
    if ( *(_BYTE *)v32 )
      TppETWTimerSetNtTimer(v8, v28, v31);
    ZwSetTimer2(*(_QWORD *)(v8 + 24), &v34, 0LL, &v35);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v24 = (__int128 *)v33;
  while ( v24 != &v33 )
  {
    v25 = (char *)v24 - 248;
    v24 = *(__int128 **)v24;
    TppSingleTimerExpiration(v25, v4, v5);
  }
  v26 = NtCurrentPeb()->SharedData;
  if ( v26 && *v26 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v9 )
    TppETWTimerExpirationEnd(v8);
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v8 + 32),
           *((_QWORD *)v4 - 6),
           *(_QWORD *)(v8 + 24),
           v8 + 40,
           v4,
           0,
           v5,
           0LL);
}
