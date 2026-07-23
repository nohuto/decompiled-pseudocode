/*
 * XREFs of PopDiagTraceWin32kCalloutStart @ 0x1409FB34C
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopControlMonitor @ 0x1409F5820 (PopControlMonitor.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     PopSendSessionInfo @ 0x140B48360 (PopSendSessionInfo.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceWin32kCalloutStart(int a1, __int64 a2, unsigned __int8 a3, char a4, int *a5)
{
  int v8; // ecx
  int v9; // ecx
  const EVENT_DESCRIPTOR *v10; // r14
  ULONG v11; // esi
  __int64 UserData; // rbx
  int *v13; // rax
  int v14; // eax
  int v15; // edi
  int v16; // edi
  __int64 v17; // rcx
  __int64 *v18; // rax
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  char v21; // [rsp+30h] [rbp-30h] BYREF
  char v22; // [rsp+31h] [rbp-2Fh] BYREF
  char v23; // [rsp+32h] [rbp-2Eh] BYREF
  int v24; // [rsp+34h] [rbp-2Ch] BYREF
  BOOL v25; // [rsp+38h] [rbp-28h] BYREF
  int v26; // [rsp+3Ch] [rbp-24h] BYREF
  int v27; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+44h] [rbp-1Ch] BYREF
  int v29; // [rsp+48h] [rbp-18h] BYREF
  int v30; // [rsp+4Ch] [rbp-14h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+98h] [rbp+38h] BYREF

  v32 = a2;
  v24 = 0;
  v31 = 0LL;
  v23 = 0;
  v29 = 0;
  v21 = 0;
  v22 = 0;
  v28 = 0;
  v30 = 0;
  v26 = 0;
  v25 = 0;
  v27 = 0;
  if ( !a2 )
    return;
  v8 = a1 - 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_STATE_CALLOUT_START;
      v11 = 8;
      goto LABEL_7;
    }
    if ( v9 != 1 )
      return;
    v10 = &POP_ETW_EVENT_WIN32_INFO_CALLOUT_START;
  }
  else
  {
    v10 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_EVENT_CALLOUT_START;
  }
  v11 = 6;
LABEL_7:
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v10) )
  {
    UserData = ExAllocatePool2(0x100uLL);
    *(_QWORD *)UserData = &v32;
    *(_QWORD *)(UserData + 8) = 8LL;
    v24 = a3;
    *(_QWORD *)(UserData + 16) = &v24;
    *(_QWORD *)(UserData + 24) = 1LL;
    v25 = a4 != 0;
    *(_QWORD *)(UserData + 32) = &v25;
    v13 = a5;
    *(_QWORD *)(UserData + 40) = 1LL;
    if ( v13 )
      v14 = *v13;
    else
      v14 = -1;
    v26 = v14;
    *(_QWORD *)(UserData + 48) = &v26;
    *(_QWORD *)(UserData + 56) = 4LL;
    v15 = a1 - 3;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v19 = (_DWORD *)v32;
        v27 = *(_DWORD *)(v32 + 20);
        *(_QWORD *)(UserData + 64) = &v27;
        *(_QWORD *)(UserData + 72) = 4LL;
        v28 = v19[6];
        *(_QWORD *)(UserData + 80) = &v28;
        *(_QWORD *)(UserData + 88) = 4LL;
        v29 = v19[7];
        *(_QWORD *)(UserData + 96) = &v29;
        *(_QWORD *)(UserData + 104) = 4LL;
        v30 = v19[8];
        *(_QWORD *)(UserData + 112) = &v30;
        *(_QWORD *)(UserData + 120) = 4LL;
LABEL_16:
        EtwWrite(PopDiagHandle, v10, 0LL, v11, (PEVENT_DATA_DESCRIPTOR)UserData);
        if ( UserData )
          ExFreePoolWithTag((PVOID)UserData, 0x50455654u);
        return;
      }
      if ( v16 != 1 )
        goto LABEL_16;
      v17 = v32;
      v21 = *(_BYTE *)(v32 + 16);
      *(_QWORD *)(UserData + 64) = &v21;
      *(_QWORD *)(UserData + 72) = 1LL;
      v22 = *(_BYTE *)(v17 + 20);
      v18 = (__int64 *)&v22;
      *(_QWORD *)(UserData + 88) = 1LL;
    }
    else
    {
      v20 = v32;
      v23 = *(_BYTE *)(v32 + 16);
      *(_QWORD *)(UserData + 64) = &v23;
      *(_QWORD *)(UserData + 72) = 1LL;
      v31 = *(_QWORD *)(v20 + 24);
      v18 = &v31;
      *(_QWORD *)(UserData + 88) = 8LL;
    }
    *(_QWORD *)(UserData + 80) = v18;
    goto LABEL_16;
  }
}
