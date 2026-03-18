/*
 * XREFs of RIMHidGetCaps @ 0x1401E0AB8
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rdx
  bool v10; // bl
  _DWORD *v11; // r14
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  GUID *v17; // rax
  NTSTATUS Status; // ebx
  PIRP v19; // rax
  __int64 v20; // rdx
  IRP *v21; // rsi
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v27; // rbx
  char v28; // si
  bool v29; // bp
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v8 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 0x28uLL, 0x70707352u);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v17 = (GUID *)Win32AllocPoolZInitImpl(64LL, 0x10uLL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v17;
      if ( !v17 )
        goto LABEL_11;
      *v17 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v19 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v21 = v19;
    if ( v19 )
    {
      v19->RequestorMode = 0;
      CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
      v19->IoStatus.Status = -1073741637;
      v27 = CurrentStackLocation - 1;
      if ( !v27 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 899);
      v27->MinorFunction = 8;
      v27->Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 416);
      v27->Parameters.CreatePipe.Parameters = 0LL;
      v27->Parameters.Create.Options = 65576;
      v27->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v11;
      Status = IofCallDriver(a2, v21);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v28 = 0;
        }
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            41,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            (char)a2);
        }
      }
      else
      {
        if ( !*((_QWORD *)v11 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 924);
        Status = (*((__int64 (__fastcall **)(__int64, __int64))v11 + 4))(a3, a4);
      }
      goto LABEL_36;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    {
      v10 = 1;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 19336),
        3,
        1,
        40,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
LABEL_11:
    Status = -1073741670;
LABEL_36:
    GreDeleteFastMutex((char *)v11);
    return (unsigned int)Status;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v10 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 19336),
      3,
      1,
      39,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
  }
  return 3221225626LL;
}
