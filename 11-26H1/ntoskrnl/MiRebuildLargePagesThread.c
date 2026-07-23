/*
 * XREFs of MiRebuildLargePagesThread @ 0x1403D1720
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     MiProcessLargeCoalesceCandidates @ 0x1403D2564 (MiProcessLargeCoalesceCandidates.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall MiRebuildLargePagesThread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  _BYTE *v4; // rax
  char *v5; // rcx
  __int64 v6; // rdx
  char *v7; // rcx
  PVOID *v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rsi
  struct _KEVENT *v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rbx
  struct _KEVENT *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  ULONG64 v17; // rax
  BOOLEAN result; // al
  struct _KTIMER *v19; // rbx
  signed __int32 v20[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  _BYTE v26[8]; // [rsp+98h] [rbp-70h] BYREF
  char v27; // [rsp+A0h] [rbp-68h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+158h] [rbp+50h] BYREF

  memset(&Object[1], 0, 24);
  v25 = 0LL;
  v24 = 0LL;
  KeSetPriorityThread(KeGetCurrentThread(), 12);
  v2 = 3LL;
  v3 = 3LL;
  v4 = v26;
  v5 = &v27;
  do
  {
    *(_QWORD *)v4 = 0LL;
    *v4 = 8;
    *((_QWORD *)v4 + 2) = v5;
    *((_QWORD *)v4 + 1) = v5;
    v5 += 64;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_DWORD *)v4 + 15) = 0;
    *((_WORD *)v4 + 28) = 0;
    v4[59] = 0;
    v4 += 64;
    --v3;
  }
  while ( v3 );
  v6 = 3LL;
  Object[0] = (PVOID)(a1 + 88);
  v7 = (char *)(a1 + 16864);
  v8 = &Object[1];
  do
  {
    *v8 = v7;
    v7 += 48;
    ++v8;
    --v6;
  }
  while ( v6 );
  while ( 1 )
  {
    v9 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
    v10 = v9;
    if ( !v9 )
      break;
    v21 = 0;
    while ( *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[32] )
      KeYieldProcessorEx(&v21);
    v11 = (struct _KEVENT *)Object[v10];
    v12 = (unsigned int)(v10 - 1);
    v21 = v10 - 1;
    v13 = (_QWORD *)(a1 + 48 * v12 + 16864);
    v14 = (struct _KEVENT *)&v26[64 * v12];
    v15 = v10;
    v16 = 8 * v12;
    if ( v11 == v14 )
    {
      v11 = (struct _KEVENT *)(a1 + 48 * v12 + 16864);
      Object[v15] = v13;
LABEL_12:
      v13[3] = -2LL;
      _InterlockedOr(v20, 0);
      KeResetEvent(v11);
      MiProcessLargeCoalesceCandidates(a1, v21, 0LL);
      v13[3] = -1LL;
      *(_QWORD *)((char *)&v24 + v16) = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    }
    else
    {
      v17 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - *((_QWORD *)&v24 + v12);
      if ( v17 >= 0xF4240 )
        goto LABEL_12;
      KiSetTimerEx((__int64)v14, -(__int64)v17, 0, 0, 0LL);
      Object[v15] = v14;
    }
  }
  v19 = (struct _KTIMER *)v26;
  do
  {
    result = KeCancelTimer(v19++);
    --v2;
  }
  while ( v2 );
  return result;
}
