/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x140B8B5BC
 * Callers:
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140B8BC3C (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogDeleteDeviceLogs(__int64 a1)
{
  KIRQL v2; // di
  __int64 Pointer; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  Pointer = ViIrpLogDatabaseFindPointer(a1, &v7);
  v4 = (_QWORD *)Pointer;
  if ( Pointer )
  {
    if ( *v7 )
    {
      *(_DWORD *)(Pointer + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)Pointer);
      v5 = v4[1];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (v6 = (_QWORD *)v4[2], (_QWORD *)*v6 != v4 + 1) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
    }
  }
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v2);
}
