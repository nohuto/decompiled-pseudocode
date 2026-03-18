/*
 * XREFs of RIMGetDeviceParent @ 0x1400EE228
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400EFA1C (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v4; // rbx
  PVOID v5; // rsi
  HANDLE v6; // r14
  unsigned int v7; // r13d
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  char v11; // si
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v17; // eax
  ULONG v18; // eax
  void *Data; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edx
  int v24; // r8d
  char v25; // di
  bool v26; // r12
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v33; // [rsp+C0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+58h] BYREF

  v33 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  Type = 0;
  v7 = 0;
  RequiredSize = 0;
  if ( a1 )
  {
    v17 = RIMGetPointerDevicePDO(a1);
  }
  else
  {
    v8 = RIMGetDeviceObjectPointer((int)a2 + 192, a2, a3, (unsigned int)&Handle, (__int64)&v33, (__int64)&Object);
    v11 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
      {
        LOBYTE(v4) = 1;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = (_BYTE)v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          63,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v11);
      }
      return 0LL;
    }
    v5 = v33;
    if ( !v33 )
    {
      LODWORD(v33) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
    }
    v4 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v33) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1401LL);
    }
    ObfReferenceObject(v4);
    v17 = RIMGetPointerDevicePDO(v4);
    v6 = Handle;
  }
  if ( v17 >= 0
    && IoGetDevicePropertyData(0LL, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v18 = RequiredSize;
    if ( !RequiredSize )
    {
      LODWORD(v33) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1424LL);
      v18 = RequiredSize;
    }
    Data = (void *)Win32AllocPoolZInitImpl(256LL, v18, 0x70707352u);
    *(_QWORD *)(a2 + 304) = Data;
    if ( Data )
    {
      LODWORD(v33) = IoGetDevicePropertyData(
                       0LL,
                       &DEVPKEY_Device_Parent,
                       0,
                       0,
                       RequiredSize,
                       Data,
                       &RequiredSize,
                       &Type);
      if ( (int)v33 >= 0 )
      {
        v7 = 1;
        *(_DWORD *)(a2 + 312) = RequiredSize;
      }
      else
      {
        GreDeleteFastMutex(*(char **)(a2 + 304), v20, v21, v22);
        *(_QWORD *)(a2 + 304) = 0LL;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v25 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v25;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(v27 + 19368),
            3,
            1,
            64,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            (char)v33);
        }
      }
    }
  }
  if ( v6 )
  {
    ZwClose(v6);
    ObfDereferenceObject(v5);
    ObfDereferenceObject(v4);
  }
  return v7;
}
