/*
 * XREFs of PoTraceSystemTimerResolution @ 0x140A73B00
 * Callers:
 *     ExTraceTimerResolution @ 0x1404E3B34 (ExTraceTimerResolution.c)
 *     NtSetTimerResolution @ 0x140A737C0 (NtSetTimerResolution.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  int v4; // eax
  char v5; // r8
  unsigned __int16 *v6; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v10; // ax
  bool v11; // zf
  char v12; // al
  int ULongFromUser; // eax
  int v14; // ecx
  const EVENT_DESCRIPTOR *v15; // rdx
  int *v16; // r8
  __int16 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+34h] [rbp-94h] BYREF
  int v20; // [rsp+38h] [rbp-90h] BYREF
  int v21; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v22; // [rsp+40h] [rbp-88h] BYREF
  int v23; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v25; // [rsp+60h] [rbp-68h]
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int16 *v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]
  int v30; // [rsp+88h] [rbp-40h]
  int v31; // [rsp+8Ch] [rbp-3Ch]
  int *v32; // [rsp+90h] [rbp-38h]
  __int64 v33; // [rsp+98h] [rbp-30h]
  int *v34; // [rsp+A0h] [rbp-28h]
  __int64 v35; // [rsp+A8h] [rbp-20h]

  if ( a1 )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN);
    if ( (_BYTE)v4
      || (LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN), v5 = 0, (_BYTE)v4) )
    {
      v5 = 1;
    }
  }
  else
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
    v5 = v4;
  }
  if ( PopDiagHandleRegistered && v5 )
  {
    v6 = *(unsigned __int16 **)(a2 + 848);
    v18 = *v6 >> 1;
    v21 = *(_DWORD *)(a2 + 1464);
    v19 = 0;
    if ( !a1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = (unsigned int *)CurrentThread->Teb;
      if ( Teb )
      {
        if ( !KeGetCurrentThread()->ApcState.Process[1].ReadyTime )
          goto LABEL_21;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process[1].ReadyTime )
          goto LABEL_21;
        v10 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v10 == 332 || (v11 = v10 == 452, v12 = 0, v11) )
          v12 = 1;
        if ( v12 )
          ULongFromUser = RtlReadULongFromUser(Teb + 3032);
        else
LABEL_21:
          ULongFromUser = RtlReadULong64FromUser(Teb + 1480);
        v19 = ULongFromUser;
      }
    }
    v22 = *(_DWORD *)(a2 + 464);
    UserData.Ptr = (ULONGLONG)&v21;
    *(_QWORD *)&UserData.Size = 4LL;
    v25 = &v22;
    v26 = 4LL;
    v27 = &v18;
    v28 = 2LL;
    v14 = *v6;
    v29 = *((_QWORD *)v6 + 1);
    v30 = v14;
    v31 = 0;
    v20 = (*(_DWORD *)(a2 + 1532) >> 26) & 1;
    if ( !a1 )
    {
      v32 = &v19;
      v34 = &v20;
      v35 = 4LL;
      v15 = &POP_ETW_EVENT_STRS;
LABEL_30:
      v33 = 4LL;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, v15, 0LL, 6u, &UserData);
      return v4;
    }
    v4 = *(_DWORD *)(a2 + 500);
    if ( (v4 & 0x1000) != 0 )
    {
      v32 = &v20;
      v33 = 4LL;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 5u, &UserData);
    }
    v16 = *(int **)(a2 + 1456);
    if ( v16 && *v16 )
    {
      v21 = *(_DWORD *)(a2 + 1468);
      v23 = *v16;
      v32 = &v23;
      v34 = v16 + 2;
      v35 = (unsigned int)(8 * v23);
      v15 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
      goto LABEL_30;
    }
  }
  return v4;
}
