/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x140A97850
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 */

NTSTATUS __cdecl NtAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // edi
  int v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID v7; // rsi
  ULONG_PTR v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  ULONG_PTR v12; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)ResourceId;
  --CurrentThread->KernelApcDisable;
  if ( Flags || (int)ResourceId >= 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      v8 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), v4 & 0x7FFFFFFF, AlpcReserveType, v6);
      v12 = v8;
      if ( v8 )
      {
        if ( AlpcpDeleteBlob(v8, v9, v10, v11) )
          AlpcpDereferenceBlobEx(v12, 1);
        else
          v5 = -1073741738;
        AlpcpDereferenceBlobEx(v12, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v7);
    }
  }
  KeLeaveCriticalRegion();
  return v5;
}
