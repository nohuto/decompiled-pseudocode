/*
 * XREFs of PnpHandleProcessWalkWorker @ 0x140A93280
 * Callers:
 *     <none>
 * Callees:
 *     IoGetBaseFileSystemDeviceObject @ 0x14026D980 (IoGetBaseFileSystemDeviceObject.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PnpHandleProcessWalkWorker(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // rax
  char v8; // bl
  struct _DEVICE_OBJECT *v10; // rsi
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]

  HandlePointer = ExGetHandlePointer(a2);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == IoFileObjectType
    && (v10 = *(struct _DEVICE_OBJECT **)a4, IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)(HandlePointer + 48)) == v10) )
  {
    v12 = *(_QWORD *)(a4 + 24);
    v8 = guard_dispatch_icall_no_overrides((__int64)v10, *(_QWORD *)(a4 + 8));
  }
  else
  {
    v8 = 0;
  }
  _InterlockedIncrement64(a2);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v8;
}
