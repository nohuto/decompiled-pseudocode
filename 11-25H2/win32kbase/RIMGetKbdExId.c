/*
 * XREFs of RIMGetKbdExId @ 0x140141078
 * Callers:
 *     RIMQueryDev @ 0x14002E9E8 (RIMQueryDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rdx
  bool v6; // bl
  bool v7; // si
  char *v8; // rax
  char *v9; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct _UNICODE_STRING InstanceName; // [rsp+50h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+90h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+98h] [rbp+38h] BYREF

  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  InstanceName = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
        LOBYTE(v12) = v7;
        LOBYTE(v13) = v6;
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          20,
          (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
          (__int64)InstanceName.Buffer);
      }
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v8 = (char *)Win32AllocPoolZInitImpl(64LL, InOutBufferSize, 0x656B7352u);
      v9 = v8;
      if ( v8 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v8);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)&v9[*((unsigned int *)v9 + 14)];
        GreDeleteFastMutex(v9);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
