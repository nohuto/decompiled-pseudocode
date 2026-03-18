/*
 * XREFs of RIMGetMouseDeviceHardwareId @ 0x14016ECEC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400EFA1C (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 */

__int64 __fastcall RIMGetMouseDeviceHardwareId(__int64 a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ebx
  char v7; // di
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  int v13; // ecx
  struct _DEVICE_OBJECT *v14; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int16 v20; // ax
  char v21; // di
  bool v22; // si
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Data; // [rsp+28h] [rbp-38h]
  PVOID v27; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+48h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+58h] BYREF

  v1 = 200;
  Object = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0xC8uLL, 0x64696D55u);
  *(_QWORD *)(a1 + 880) = v3;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 872) = 13107200;
    v6 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(a1 + 192),
           v4,
           v5,
           &Handle,
           &v27,
           (PDEVICE_OBJECT *)&Object);
    if ( v6 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v13 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v13 & 1) == 0)
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v21 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v13, v4, v5);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          11,
          (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
          v6);
      }
    }
    else
    {
      v14 = (struct _DEVICE_OBJECT *)Object;
      ObfReferenceObject(Object);
      Pdo = 0LL;
      v6 = RIMGetPointerDevicePDO(v14, &Pdo);
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          LODWORD(Object) = v1;
          Data = *(PVOID *)(a1 + 880);
          Type = 0;
          DevicePropertyData = IoGetDevicePropertyData(
                                 Pdo,
                                 &DEVPKEY_Device_HardwareIds,
                                 0,
                                 0,
                                 v1,
                                 Data,
                                 (PULONG)&Object,
                                 &Type);
          v6 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            break;
          GreDeleteFastMutex(*(char **)(a1 + 880), v16, v17, v18);
          v1 = (unsigned __int16)Object;
          v19 = Win32AllocPoolZInitImpl(256LL, (unsigned __int16)Object, 0x64696D55u);
          *(_QWORD *)(a1 + 880) = v19;
          if ( !v19 )
          {
            v6 = -1073741801;
            goto LABEL_21;
          }
          *(_WORD *)(a1 + 874) = v1;
          *(_WORD *)(a1 + 872) = 0;
        }
        if ( DevicePropertyData >= 0 )
        {
          v20 = (__int16)Object;
          *(_WORD *)(a1 + 872) = (_WORD)Object;
          *(_WORD *)(a1 + 874) = v20;
        }
LABEL_21:
        ObfDereferenceObject(Pdo);
      }
      ZwClose(Handle);
      ObfDereferenceObject(v27);
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    v6 = -1073741801;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, v5);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 19368),
      4,
      1,
      12,
      (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
