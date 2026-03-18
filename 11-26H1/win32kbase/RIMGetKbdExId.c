/*
 * XREFs of RIMGetKbdExId @ 0x140092D94
 * Callers:
 *     RIMQueryDev @ 0x140094624 (RIMQueryDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, __int64 *a2)
{
  NTSTATUS v4; // edi
  int v5; // edx
  int v6; // r8d
  char v7; // bl
  char v8; // si
  char *v9; // rax
  char *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 UserSessionState; // rax
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
      v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v7,
          v8,
          *(_QWORD *)(UserSessionState + 19368),
          4u,
          1u,
          0x14u,
          (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
          InstanceName.Buffer);
      }
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v9 = (char *)Win32AllocPoolZInitImpl(64LL, InOutBufferSize, 0x656B7352u);
      v10 = v9;
      if ( v9 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v9);
        if ( v4 >= 0 )
        {
          v12 = *(_QWORD *)&v10[*((unsigned int *)v10 + 14)];
          *a2 = v12;
        }
        GreDeleteFastMutex(v10, v12, v13, v14);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
