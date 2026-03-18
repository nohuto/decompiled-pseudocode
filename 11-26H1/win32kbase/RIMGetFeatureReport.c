/*
 * XREFs of RIMGetFeatureReport @ 0x14018AD44
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

NTSTATUS __fastcall RIMGetFeatureReport(
        _BYTE *OutputBuffer,
        unsigned __int16 a2,
        char a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5)
{
  ULONG OutputBufferLength; // ebx
  PIRP v8; // rax
  int v9; // r8d
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  *OutputBuffer = a3;
  OutputBufferLength = a2;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0xB0192u, a4, 0LL, 0, OutputBuffer, OutputBufferLength, 0, &Object, &IoStatusBlock);
  if ( v8 )
  {
    v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a5;
    result = IofCallDriver(a4, v8);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        35,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
    }
    return -1073741668;
  }
  return result;
}
