/*
 * XREFs of Command_InternalSendCommand @ 0x14000D894
 * Callers:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostResetSuccess @ 0x14003E0C0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x14000DD10 (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x14002E93C (XilCoreCommand_AddCommandTRBToRing.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14002EA28 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     WPP_RECORDER_SF_qLq @ 0x14002F998 (WPP_RECORDER_SF_qLq.c)
 *     Command_ProcessCrbCompletion @ 0x140032ABC (Command_ProcessCrbCompletion.c)
 *     Command_StartCommandWatchdogTimer @ 0x140032CC8 (Command_StartCommandWatchdogTimer.c)
 *     Etw_CommandWaitlisted @ 0x1400358B0 (Etw_CommandWaitlisted.c)
 *     WPP_RECORDER_SF_qddd @ 0x14003F1D4 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x14003F2F0 (WPP_RECORDER_SF_qdqddd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v6; // r8d
  int v7; // edx
  int v8; // r9d
  _DWORD *v9; // r14
  int v10; // ecx
  _QWORD *v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdi
  BOOL v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 == 2 || v3 == 3 )
  {
    v17 = 4LL;
  }
  else if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v24,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v17 = 3LL;
  }
  else
  {
    if ( v3 == 4 )
    {
      LOBYTE(v15) = Command_ProcessCrbCompletion(a2, 3LL);
      return (char)v15;
    }
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 736LL), 0x1Fu) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLq(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          52,
          v24,
          a2,
          (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
          *(_QWORD *)(a2 + 48));
      v17 = 2LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLq(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          53,
          v24,
          a2,
          (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
          *(_QWORD *)(a2 + 48));
      *(_DWORD *)(a2 + 56) = 10;
      v6 = *(_DWORD *)(a1 + 40);
      v7 = 0;
      v8 = *(_DWORD *)(a1 + 44);
      if ( v6 + 1 != *(_DWORD *)(a1 + 48) )
        v7 = v6 + 1;
      if ( v7 != v8 )
      {
        v9 = (_DWORD *)(a1 + 40);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qdqddd(
            *(_QWORD *)(a1 + 16),
            v7,
            v6,
            v8,
            v24,
            a2,
            v6,
            *(_BYTE *)(a1 + 72) + 16 * v6,
            v8,
            *(_DWORD *)(a1 + 64),
            v7);
          v9 = (_DWORD *)(a1 + 40);
        }
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
          McTemplateK0ppb16_EtwWriteTransfer(a1, v7, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
        else
          v9 = (_DWORD *)(a1 + 40);
        *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
        *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned int)*v9) = *(_OWORD *)(a2 + 24);
        if ( *(_BYTE *)(a1 + 136) )
        {
          v10 = XilCommand_SendAddCommandCRBToRingRequest(a1 + 136, a2);
        }
        else
        {
          XilCoreCommand_AddCommandTRBToRing(a1 + 168, a2 + 24);
          v10 = 0;
        }
        v11 = (_QWORD *)(a1 + 72);
        if ( *(_QWORD *)(a1 + 152) )
        {
          **(_DWORD **)(a1 + 152) = 0;
          _InterlockedOr(v23, 0);
          v11 = (_QWORD *)(a1 + 72);
        }
        if ( v10 < 0 )
        {
          LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 1LL, 0LL);
        }
        else
        {
          v12 = 2LL * (unsigned int)*v9;
          *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned int)*v9 + 12) ^= 1u;
          _InterlockedOr(v23, 0);
          *(_DWORD *)(a2 + 16) = 1;
          *(_DWORD *)(a2 + 20) = *v9;
          v13 = *(_QWORD **)(a1 + 88);
          v14 = *(_QWORD *)(a1 + 80);
          if ( *v13 != a1 + 80 )
            goto LABEL_23;
          *(_QWORD *)a2 = a1 + 80;
          *(_QWORD *)(a2 + 8) = v13;
          *v13 = a2;
          *(_QWORD *)(a1 + 88) = a2;
          LODWORD(v15) = ++*v9;
          v16 = *(unsigned int *)(a1 + 48);
          if ( *v9 == (_DWORD)v16 )
          {
            v12 = 2 * v16;
            LOBYTE(v15) = *(_BYTE *)(*v11 + 16 * v16 + 12) ^ 1;
            *(_BYTE *)(*v11 + 16 * v16 + 12) = (_BYTE)v15;
            _InterlockedOr(v23, 0);
            v19 = *(_DWORD *)(a1 + 64) != 1;
            *(_DWORD *)(a1 + 64) = v19;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = (_BYTE)WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v20 = *(_DWORD *)(a1 + 48);
                LODWORD(v27) = v19;
                v21 = *(_QWORD *)(a1 + 16);
                LODWORD(v26) = v20;
                LODWORD(v25) = *(_DWORD *)(a1 + 40);
                LOBYTE(v15) = WPP_RECORDER_SF_ddd(
                                v21,
                                5u,
                                7u,
                                0x38u,
                                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
                                v25,
                                v26,
                                v27);
              }
            }
            *(_DWORD *)(a1 + 40) = 0;
          }
          if ( v14 == a1 + 80 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v12) = 5;
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 16),
                v12,
                7,
                57,
                (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
            }
            LOBYTE(v15) = Command_StartCommandWatchdogTimer(a1, v12, v11);
          }
        }
        return (char)v15;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v7, v6, v8, v24, a2, v6, v8, v7);
      *(_DWORD *)(a2 + 16) = 0;
      v17 = 1LL;
    }
  }
  Etw_CommandWaitlisted(a1, a1, a2, v17);
  v15 = *(_QWORD **)(a1 + 104);
  v18 = a1 + 96;
  if ( *v15 != v18 )
LABEL_23:
    __fastfail(3u);
  *(_QWORD *)a2 = v18;
  *(_QWORD *)(a2 + 8) = v15;
  *v15 = a2;
  *(_QWORD *)(v18 + 8) = a2;
  return (char)v15;
}
