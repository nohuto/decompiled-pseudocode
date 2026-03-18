/*
 * XREFs of RIMOpenDev @ 0x1400944B4
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 * Callees:
 *     RIMCloseDev @ 0x1400933FC (RIMCloseDev.c)
 *     RIMOpenDevWorker @ 0x140093824 (RIMOpenDevWorker.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMApiSetIsRemoteConnection @ 0x1401C45C8 (RIMApiSetIsRemoteConnection.c)
 *     rimIsCrossSessionDevice @ 0x1401FDB00 (rimIsCrossSessionDevice.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4, int a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  HANDLE v11; // rcx
  NTSTATUS v12; // edi
  PVOID *Object; // [rsp+20h] [rbp-68h]
  PVOID v15; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v16; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 320);
  if ( *(_DWORD *)(a1 + 48) == 2 && (unsigned int)RIMApiSetIsRemoteConnection() )
  {
    a5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1233LL);
  }
  *(_DWORD *)(a1 + 168) |= 0x100u;
  Handle = 0LL;
  v16 = 0LL;
  v10 = RIMOpenDevWorker(a1, a2, a3, a4, (__int64)Object, v9, &Handle, &v16);
  v11 = Handle;
  v12 = v10;
  *(_DWORD *)(a1 + 272) = v10;
  *(_QWORD *)(a1 + 208) = v11;
  *(struct _IO_STATUS_BLOCK *)(a1 + 240) = v16;
  if ( v10 >= 0 )
  {
    v15 = 0LL;
    v12 = ObReferenceObjectByHandle(v11, 0, (POBJECT_TYPE)IoFileObjectType, 0, &v15, 0LL);
    *(_QWORD *)(a1 + 216) = v15;
    if ( v12 >= 0 && !(unsigned int)RIMIsRunningOnDesktop() && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v12;
}
