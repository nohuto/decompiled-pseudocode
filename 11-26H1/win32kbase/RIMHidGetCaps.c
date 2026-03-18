/*
 * XREFs of RIMHidGetCaps @ 0x140079BD4
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  int v10; // r8d
  bool v11; // bl
  _DWORD *v12; // r14
  PIRP v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  IRP *v17; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  ULONG_PTR v19; // rax
  NTSTATUS Status; // ebx
  GUID *v22; // rax
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // si
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // si
  bool v32; // bp
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v8 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 0x28uLL, 0x70707352u);
  v11 = 0;
  v12 = v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v22 = (GUID *)Win32AllocPoolZInitImpl(64LL, 0x10uLL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v22;
      if ( !v22 )
        goto LABEL_14;
      *v22 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v13 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v17 = v13;
    if ( v13 )
    {
      v13->RequestorMode = 0;
      CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
      v13->IoStatus.Status = -1073741637;
      if ( CurrentStackLocation == (struct _IO_STACK_LOCATION *)72 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 899LL);
      CurrentStackLocation[-1].MinorFunction = 8;
      v19 = *(_QWORD *)(a1 + 416);
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = v19;
      CurrentStackLocation[-1].Parameters.Create.Options = 65576;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v12;
      Status = IofCallDriver(a2, v17);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v14 = 0LL;
      if ( Status < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v31 = 0;
        }
        v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v15);
          LOBYTE(v34) = v32;
          LOBYTE(v35) = v31;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v34,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            41,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            (char)a2);
        }
      }
      else
      {
        if ( !*((_QWORD *)v12 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 924LL);
        Status = (*((__int64 (__fastcall **)(__int64, __int64))v12 + 4))(a3, a4);
      }
      goto LABEL_12;
    }
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    {
      v11 = 1;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 19368),
        3,
        1,
        40,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
LABEL_14:
    Status = -1073741670;
LABEL_12:
    GreDeleteFastMutex((char *)v12, v14, v15, v16);
    return (unsigned int)Status;
  }
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v11 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 19368),
      3,
      1,
      39,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
  return 3221225626LL;
}
