/*
 * XREFs of RIMOpenDev @ 0x1401D57E0
 * Callers:
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     RIMApiSetIsRemoteConnection @ 0x14012C31C (RIMApiSetIsRemoteConnection.c)
 *     RIMOpenDevWorker @ 0x1401307BC (RIMOpenDevWorker.c)
 *     RIMCloseDev @ 0x14013F5A8 (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsCrossSessionDevice @ 0x1401D5C0C (rimIsCrossSessionDevice.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  int v12; // eax
  HANDLE v13; // rcx
  NTSTATUS v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID *Object; // [rsp+20h] [rbp-68h]
  PVOID v19; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  v11 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 320);
  if ( *(_DWORD *)(a1 + 48) == 2 && (unsigned int)RIMApiSetIsRemoteConnection(v10, v9) )
  {
    a5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1236);
  }
  *(_DWORD *)(a1 + 168) |= 0x100u;
  Handle = 0LL;
  v20 = 0LL;
  v12 = RIMOpenDevWorker(a1, a2, a3, a4, (__int64)Object, v11, &Handle, &v20);
  v13 = Handle;
  v14 = v12;
  *(_DWORD *)(a1 + 272) = v12;
  *(_QWORD *)(a1 + 208) = v13;
  *(struct _IO_STATUS_BLOCK *)(a1 + 240) = v20;
  if ( v12 >= 0 )
  {
    v19 = 0LL;
    v14 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)IoFileObjectType, 0, &v19, 0LL);
    *(_QWORD *)(a1 + 216) = v19;
    if ( v14 >= 0 && !RIMIsRunningOnDesktop(v16, v15) && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v14;
}
