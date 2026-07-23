/*
 * XREFs of FsRtlQueryOpen @ 0x140ABD4B8
 * Callers:
 *     IopQueryInformation @ 0x140933218 (IopQueryInformation.c)
 * Callees:
 *     FsFilterPerformCallbacks @ 0x14026E030 (FsFilterPerformCallbacks.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14026E8C0 (FsFilterPerformCompletionCallbacks.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     FsFilterCtrlInit @ 0x140454CD0 (FsFilterCtrlInit.c)
 *     FsFilterCtrlFree @ 0x140460640 (FsFilterCtrlFree.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall FsRtlQueryOpen(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  int v14; // ebx
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h]
  __int16 v21; // [rsp+8Ah] [rbp-76h]

  v15[0] = 0;
  memset_0(v16, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = FsFilterCtrlInit(
             (__int64)v16,
             249,
             (__int64)AttachedDevice,
             v10,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL),
             1u);
  if ( (int)result >= 0 )
  {
    v20 = a5;
    v17 = a2;
    v18 = a3;
    v19 = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = FsFilterPerformCallbacks((__int64)v16, 1, 1, v15);
    v14 = v13;
    if ( v21 )
      v14 = FsFilterPerformCompletionCallbacks((__int64)v16, v13);
    KeLeaveCriticalRegion();
    FsFilterCtrlFree((__int64)v16);
    if ( v14 >= 0 && (v15[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v14;
  }
  return result;
}
