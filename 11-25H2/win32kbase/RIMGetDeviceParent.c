/*
 * XREFs of RIMGetDeviceParent @ 0x14012AB40
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1400B23E4 (RIMGetPointerDevicePDO.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v4; // rbx
  PVOID v5; // rsi
  HANDLE v6; // r14
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  char v10; // si
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v16; // eax
  struct _DEVICE_OBJECT *v17; // r15
  ULONG v18; // eax
  void *Data; // rax
  __int64 v20; // rdx
  char v21; // di
  bool v22; // r12
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v30; // [rsp+C0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+58h] BYREF

  v30 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  Type = 0;
  v7 = 0;
  Pdo = 0LL;
  RequiredSize = 0;
  if ( a1 )
  {
    v16 = RIMGetPointerDevicePDO(a1, &Pdo);
  }
  else
  {
    v8 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(a2 + 192),
           a2,
           a3,
           &Handle,
           &v30,
           (PDEVICE_OBJECT *)&Object);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
      {
        LOBYTE(v4) = 1;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = (_BYTE)v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 19336),
          3,
          1,
          63,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          v10);
      }
      return 0LL;
    }
    v5 = v30;
    if ( !v30 )
    {
      LODWORD(v30) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1403LL);
    }
    v4 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v30) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1404LL);
    }
    ObfReferenceObject(v4);
    v16 = RIMGetPointerDevicePDO(v4, &Pdo);
    v6 = Handle;
  }
  v17 = Pdo;
  if ( v16 >= 0
    && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v18 = RequiredSize;
    if ( !RequiredSize )
    {
      LODWORD(v30) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1427LL);
      v18 = RequiredSize;
    }
    Data = (void *)Win32AllocPoolZInitImpl(256LL, v18, 0x70707352u);
    *(_QWORD *)(a2 + 304) = Data;
    if ( Data )
    {
      LODWORD(v30) = IoGetDevicePropertyData(
                       v17,
                       &DEVPKEY_Device_Parent,
                       0,
                       0,
                       RequiredSize,
                       Data,
                       &RequiredSize,
                       &Type);
      if ( (int)v30 >= 0 )
      {
        v7 = 1;
        *(_DWORD *)(a2 + 312) = RequiredSize;
      }
      else
      {
        GreDeleteFastMutex(*(char **)(a2 + 304));
        *(_QWORD *)(a2 + 304) = 0LL;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v21 = 0;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v21;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v25,
            v24,
            *(_QWORD *)(v23 + 19336),
            3,
            1,
            64,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            (char)v30);
        }
      }
    }
  }
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( v6 )
  {
    ZwClose(v6);
    ObfDereferenceObject(v5);
    ObfDereferenceObject(v4);
  }
  return v7;
}
