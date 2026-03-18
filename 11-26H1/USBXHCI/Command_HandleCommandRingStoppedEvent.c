/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x14002B8E4
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     XilCommand_WriteDoorbell @ 0x1400309E8 (XilCommand_WriteDoorbell.c)
 *     Command_ProcessCrbCompletion @ 0x140032ABC (Command_ProcessCrbCompletion.c)
 *     WPP_RECORDER_SF_ii @ 0x14003EED0 (WPP_RECORDER_SF_ii.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003F540 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     Etw_CommandCompleteError @ 0x14004F2AC (Etw_CommandCompleteError.c)
 */

char __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int128 *a2)
{
  __int64 v2; // rsi
  char v3; // r13
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  _DWORD *v13; // rax
  unsigned int *v14; // rdi
  _QWORD *v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int128 *v21; // rdx
  _OWORD ***v22; // rax
  char result; // al
  __int64 v24; // rcx
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF

  v25 = 0LL;
  v2 = 0LL;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v3 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  if ( *(_BYTE *)(a1 + 136) )
    v10 = *(_QWORD *)(a1 + 176);
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  v11 = *(_QWORD *)a2;
  v12 = v10 + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v7, v8, v9);
  v13 = (_DWORD *)(a1 + 44);
  if ( v11 != v12 )
  {
    v14 = (unsigned int *)(a1 + 44);
    if ( v11 != *(_QWORD *)(a1 + 56) || (v14 = (unsigned int *)(a1 + 44), *(_DWORD *)(a1 + 44)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v7, 7, 43, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(a1 + 8),
        0,
        0,
        0x8000LL,
        "After command abort completion, software and hardware dequeue pointers do not match",
        (__int128 *)(*(_QWORD *)(a1 + 72) + 16LL * *v14),
        a2);
      Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 36) = 2;
      goto LABEL_38;
    }
    v13 = (_DWORD *)(a1 + 44);
  }
  v15 = (_QWORD *)(a1 + 80);
  v16 = *(__int64 **)(a1 + 80);
  if ( v16 != (__int64 *)(a1 + 80) )
  {
    v7 = *((_DWORD *)v16 + 14);
    v2 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( v7 == 5 || v7 == 10 )
        v2 = 0LL;
    }
    else
    {
      v17 = *v16;
      if ( *(__int64 **)(*v16 + 8) != v16 || (v18 = (_QWORD *)v16[1], *v18 != v2) )
LABEL_43:
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = (unsigned int)++*v13;
      if ( (_DWORD)v19 == *(_DWORD *)(a1 + 48) )
      {
        *v13 = 0;
        v15 = (_QWORD *)(a1 + 80);
        v19 = 0LL;
      }
      XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v19);
    }
  }
  if ( (_QWORD *)*v15 != v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v7, 7, 42, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    XilCommand_WriteDoorbell(a1);
  }
  v20 = *(_QWORD *)(a1 + 96);
  if ( v20 != a1 + 96 )
  {
    *((_QWORD *)&v25 + 1) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)&v25 = v20;
    *(_QWORD *)(v20 + 8) = &v25;
    **((_QWORD **)&v25 + 1) = &v25;
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)(a1 + 96) = a1 + 96;
    goto LABEL_33;
  }
  v21 = &v25;
  *((_QWORD *)&v25 + 1) = &v25;
  *(_QWORD *)&v25 = &v25;
  while ( v21 != &v25 )
  {
    if ( *((__int128 **)v21 + 1) != &v25 )
      goto LABEL_43;
    v22 = *(_OWORD ****)v21;
    if ( *(__int128 **)(*(_QWORD *)v21 + 8LL) != v21 )
      goto LABEL_43;
    *(_QWORD *)&v25 = *(_QWORD *)v21;
    v22[1] = (_OWORD **)&v25;
    Command_InternalSendCommand(a1, (__int64)v21, v8);
LABEL_33:
    v21 = (__int128 *)v25;
  }
LABEL_38:
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v3 )
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  if ( v2 )
  {
    *(_BYTE *)(v2 + 60) = 25;
    Etw_CommandCompleteError(v24, a1, v2, 2LL);
    return Command_ProcessCrbCompletion(v2, 2LL);
  }
  return result;
}
