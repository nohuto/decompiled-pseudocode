/*
 * XREFs of EtwTraceThread @ 0x140A7C440
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PsGetCurrentThreadTeb @ 0x14049C0D0 (PsGetCurrentThreadTeb.c)
 *     PsLockThreadNameShared @ 0x140617DC4 (PsLockThreadNameShared.c)
 *     PsUnlockThreadNameShared @ 0x140618100 (PsUnlockThreadNameShared.c)
 *     Feature_1023137082__private_IsEnabledDeviceUsageNoInline @ 0x1406C9BF8 (Feature_1023137082__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpPsProvTraceThread @ 0x140AAE1A0 (EtwpPsProvTraceThread.c)
 */

__int64 __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  int v6; // r14d
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v12; // cx
  char v13; // al
  int ULongFromUser; // eax
  unsigned int *v15; // rsi
  _KPROCESS *v16; // rcx
  __int16 v17; // dx
  char v18; // al
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  unsigned __int16 *v22; // rdx
  unsigned int v23; // eax
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  __int16 v26; // [rsp+30h] [rbp-C8h]
  int v27; // [rsp+38h] [rbp-C0h]
  _DWORD v28[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A0h]
  __int64 v30; // [rsp+60h] [rbp-98h]
  __int64 v31; // [rsp+68h] [rbp-90h]
  __int64 v32; // [rsp+70h] [rbp-88h]
  __int64 v33; // [rsp+78h] [rbp-80h]
  __int64 v34; // [rsp+80h] [rbp-78h]
  __int64 v35; // [rsp+88h] [rbp-70h]
  int ULong64FromUser; // [rsp+90h] [rbp-68h]
  char v37; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v40; // [rsp+97h] [rbp-61h]
  __int64 v41; // [rsp+98h] [rbp-60h]
  _QWORD v42[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 *v43; // [rsp+B0h] [rbp-48h]
  __int64 v44; // [rsp+B8h] [rbp-40h]
  __int64 *v45; // [rsp+C0h] [rbp-38h]
  __int64 v46; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v41 = 0LL;
  v27 = 6297859;
  if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 2) != 0 )
    EtwpPsProvTraceThread();
  v28[0] = *(_DWORD *)(a1 + 1288);
  v28[1] = *(_DWORD *)(a1 + 1296);
  v29 = *(_QWORD *)(a1 + 56);
  v30 = *(_QWORD *)(a1 + 48);
  v7 = *(unsigned __int16 *)(a1 + 584);
  v8 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  v33 = v9;
  v34 = *(_QWORD *)(a1 + 1376);
  v31 = 0LL;
  v32 = 0LL;
  v35 = *(_QWORD *)(a1 + 240);
  ULong64FromUser = 0;
  v37 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v40 = 0;
  if ( a3 )
  {
    v26 = 1281;
    if ( a2 )
    {
      v31 = *(_QWORD *)(a2 + 16);
      v32 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = (unsigned int *)PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_17;
      v12 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v12 == 332 || (v13 = 0, v12 == 452) )
        v13 = 1;
      if ( v13 )
        ULongFromUser = RtlReadULongFromUser(CurrentThreadTeb + 3032);
      else
LABEL_17:
        ULongFromUser = RtlReadULong64FromUser(CurrentThreadTeb + 1480);
      ULong64FromUser = ULongFromUser;
    }
  }
  else
  {
    v26 = 1282;
    v27 = 73406723;
    v15 = *(unsigned int **)(a1 + 240);
    if ( v15 )
    {
      v16 = KeGetCurrentThread()->Process;
      if ( !v16[1].ReadyTime )
        goto LABEL_26;
      v17 = WORD2(v16[3].PerProcessorCycleTimes);
      if ( v17 == 332 || (v18 = 0, v17 == 452) )
        v18 = 1;
      if ( v18 )
      {
        ULong64FromUser = RtlReadULongFromUser(v15 + 3032);
        v31 = (unsigned int)RtlReadULongFromUser(v15 + 2049);
        v32 = (unsigned int)RtlReadULongFromUser(v15 + 2050);
      }
      else
      {
LABEL_26:
        ULong64FromUser = RtlReadULong64FromUser(v15 + 1480);
        v31 = RtlReadULong64FromUser(v15 + 2);
        v32 = RtlReadULong64FromUser(v15 + 4);
      }
    }
  }
  v42[0] = v28;
  v42[1] = 72LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)Feature_1023137082__private_IsEnabledDeviceUsageNoInline() )
    PsLockThreadNameShared(a1, (__int64)CurrentThread, v20, v21);
  v22 = *(unsigned __int16 **)(a1 + 1696);
  if ( v22 && *((_QWORD *)v22 + 1) )
  {
    v23 = 2048;
    if ( *v22 < 0x800u )
      v23 = *v22;
    v43 = (__int64 *)*((_QWORD *)v22 + 1);
    v44 = v23;
    if ( !v23 || *(_WORD *)(*((_QWORD *)v22 + 1) + 2 * ((unsigned __int64)v23 >> 1) - 2) )
    {
      v45 = &EtwpNull;
      v46 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v43 = &EtwpNull;
    v44 = 2LL;
  }
  ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(a1 + 544));
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v42, v6, 2u, v26, v27);
  result = Feature_1023137082__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PsUnlockThreadNameShared(a1, CurrentThread);
  return result;
}
