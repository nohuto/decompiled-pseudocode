/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x14002B298
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x14002B818 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x14002B840 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x14002BBE8 (WPP_RECORDER_SF_qLLdd.c)
 *     WPP_RECORDER_SF_qL @ 0x14003EFA4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qii @ 0x14003F44C (WPP_RECORDER_SF_qii.c)
 *     Etw_CommandCompleteError @ 0x14004F2AC (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v5; // r12
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r15
  __int64 *i; // rdi
  void *v11; // rdx
  void *v12; // rdx
  __int64 v13; // rsi
  __int64 ***v14; // rdi
  __int64 **v15; // rax
  __int64 ****v16; // rcx
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 *v19; // rdi
  __int64 **result; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  unsigned int v25; // esi
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  void (__fastcall *v29)(__int64, __int64 *); // rax
  int v30; // [rsp+20h] [rbp-40h]
  __int64 *v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v32; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v32 = &v31;
  v5 = 0;
  v31 = (__int64 *)&v31;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v9 = a1 + 80;
  for ( i = *(__int64 **)(a1 + 80); ; i = (__int64 *)*i )
  {
    v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
    if ( i == (__int64 *)v9 )
      goto LABEL_18;
    v13 = XilCommand_GetCommandRingBufferLogicalAddress(a1, &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids)
        + 16LL * *((unsigned int *)i + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), (_DWORD)v12, v7, v8, v30, (char)i, v13, *(_QWORD *)a2);
        v12 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DD(*(_QWORD *)(a1 + 16), 5u, 7u, 0x2Du, (__int64)v12);
    }
    if ( *(_QWORD *)a2 == v13 )
      break;
  }
  *((_DWORD *)i + 4) = 2;
  *((_BYTE *)i + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)i + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
    *((_BYTE *)i + 61) = *(_BYTE *)(a2 + 15);
  v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  if ( (*((_BYTE *)i + 62) & 2) != 0 )
    *(_OWORD *)(i + 3) = *(_OWORD *)a2;
LABEL_18:
  while ( 1 )
  {
    v14 = *(__int64 ****)(a1 + 80);
    if ( v14 == (__int64 ***)v9 )
      break;
    if ( *((_DWORD *)v14 + 4) != 2 )
    {
      if ( v31 == (__int64 *)&v31 && !*(_BYTE *)(a1 + 120) )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(a1 + 8),
          0,
          0,
          0x10000LL,
          "Controller completed a command out of order",
          (__int128 *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44)),
          (__int128 *)a2);
        Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL, 0LL);
        *(_BYTE *)(a1 + 120) = 1;
      }
      break;
    }
    if ( ++*(_DWORD *)(a1 + 44) == *(_DWORD *)(a1 + 48) )
      *(_DWORD *)(a1 + 44) = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1 + 16),
          5u,
          7u,
          0x2Eu,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLdd(
          *(_QWORD *)(a1 + 16),
          *(unsigned __int8 *)(a2 + 15),
          *(_DWORD *)(a2 + 12) & 1,
          v8,
          v30,
          (char)v14,
          (unsigned __int16)*((_DWORD *)v14 + 9) >> 10,
          *(_BYTE *)(a2 + 11),
          *(_BYTE *)(a2 + 12) & 1,
          *(_BYTE *)(a2 + 15));
    }
    v15 = *v14;
    if ( (*v14)[1] != (__int64 *)v14
      || (v16 = (__int64 ****)v14[1], *v16 != v14)
      || (*v16 = (__int64 ***)v15, v15[1] = (__int64 *)v16, v17 = v32, *v32 != (__int64 *)&v31) )
    {
LABEL_30:
      __fastfail(3u);
    }
    v14[1] = v32;
    *v14 = &v31;
    *v17 = v14;
    v26 = (_QWORD *)(a1 + 96);
    v27 = *(_QWORD **)(a1 + 96);
    v32 = (__int64 **)v14;
    if ( v27 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v27[1] != v26 )
        goto LABEL_30;
      v28 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 )
        goto LABEL_30;
      *v26 = v28;
      *(_QWORD *)(v28 + 8) = v26;
      Command_InternalSendCommand(a1, (__int64)v27, v7);
    }
    v11 = &WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids;
  }
  if ( *(_QWORD *)(a1 + 80) == a1 + 80 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v11,
          7,
          49,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v11,
          7,
          48,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  while ( 1 )
  {
    v19 = v31;
    result = &v31;
    if ( v31 == (__int64 *)&v31 )
      return result;
    if ( (__int64 **)v31[1] != &v31 )
      goto LABEL_30;
    v21 = (__int64 *)*v31;
    if ( *(__int64 **)(*v31 + 8) != v31 )
      goto LABEL_30;
    v31 = (__int64 *)*v31;
    v21[1] = (__int64)&v31;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v22 )
    {
      v29 = *(void (__fastcall **)(__int64, __int64 *))(v22 + 24);
      if ( v29 )
        v29(v22, v19);
    }
    v23 = *((unsigned __int8 *)v19 + 60);
    v24 = *((unsigned __int8 *)v19 + 60) - 1;
    if ( *((_BYTE *)v19 + 60) == 1 )
    {
      v25 = 0;
    }
    else if ( *((_BYTE *)v19 + 60) == 25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(a1 + 16),
          v24,
          7,
          50,
          (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
          (char)v19,
          (unsigned __int8)HIBYTE(*((_WORD *)v19 + 18)) >> 2);
        LOBYTE(v23) = *((_BYTE *)v19 + 60);
      }
      v25 = 2;
    }
    else
    {
      v25 = 1;
    }
    if ( (_BYTE)v23 == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
        McTemplateK0ppb16qu_EtwWriteTransfer(
          v23,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v18,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v19,
          (__int64)(v19 + 3),
          v25,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v23, a1, v19, v25);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v19[5])(v19, v25, a2);
  }
}
