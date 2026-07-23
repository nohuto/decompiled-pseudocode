/*
 * XREFs of IoCreateController @ 0x140798CB0
 * Callers:
 *     DifIoCreateControllerWrapper @ 0x14065E0D0 (DifIoCreateControllerWrapper.c)
 * Callees:
 *     KeInitializeDeviceQueue @ 0x1404E6C40 (KeInitializeDeviceQueue.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  _QWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF
  int v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+6Ch] [rbp-14h]
  __int128 v7; // [rsp+70h] [rbp-10h]
  void *v8; // [rsp+98h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = Size;
  v4[0] = 48LL;
  v6 = 0;
  v5 = IopCaseInsensitive != 0 ? 576 : 512;
  v8 = 0LL;
  Handle = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v7 = 0LL;
  if ( (int)ObCreateObjectEx(0, *(_DWORD *)&stru_140FC11F0.SavedApcStateFill[40], (unsigned int)v4, 0) >= 0
    && (int)ObInsertObjectEx(v8, 0LL, 3LL, 1LL, 0, &v8, &Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    memset_0(v8, 0, v2 + 72);
    *(_WORD *)v8 = 2;
    *((_WORD *)v8 + 1) = v2 + 72;
    *((_QWORD *)v8 + 1) = (char *)v8 + 72;
    KeInitializeDeviceQueue((PKDEVICE_QUEUE)((char *)v8 + 16));
    return (PCONTROLLER_OBJECT)v8;
  }
  return v1;
}
