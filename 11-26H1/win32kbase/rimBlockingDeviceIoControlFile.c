/*
 * XREFs of rimBlockingDeviceIoControlFile @ 0x140186910
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall rimBlockingDeviceIoControlFile(HANDLE FileHandle, __int64 a2, __int64 a3, __int64 a4, PVOID a5)
{
  int v6; // ecx
  NTSTATUS Status; // ebx
  int v8; // r8d
  bool v9; // di
  bool v10; // si
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // edx
  int v15; // r8d
  __int16 InputBuffer; // [rsp+38h] [rbp-19h]
  char OutputBuffer; // [rsp+48h] [rbp-9h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  void *EventHandle; // [rsp+B8h] [rbp+67h] BYREF

  EventHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status < 0 )
  {
    v9 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v6 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v6 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v9 = 1;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      OutputBuffer = Status;
      v13 = *(_QWORD *)(W32GetUserSessionState(v6, (_DWORD)WPP_GLOBAL_Control, v8) + 19368);
      InputBuffer = 24;
LABEL_30:
      LOBYTE(v12) = v10;
      LOBYTE(v11) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        v13,
        2,
        1,
        InputBuffer,
        (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
        OutputBuffer);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  Status = ZwDeviceIoControlFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, 0xB01A8u, 0LL, 0, a5, 0xCu);
  if ( Status != 259 )
  {
LABEL_21:
    if ( Status < 0 )
    {
      v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        OutputBuffer = Status;
        v13 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15) + 19368);
        InputBuffer = 26;
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
  if ( Status >= 0 )
  {
    Status = IoStatusBlock.Status;
    goto LABEL_21;
  }
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    OutputBuffer = Status;
    v13 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15) + 19368);
    InputBuffer = 25;
    goto LABEL_30;
  }
LABEL_31:
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
