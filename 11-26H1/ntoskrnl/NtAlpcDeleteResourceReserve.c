/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x140A92D00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1409C1AB4 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcDeleteResourceReserve(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID v7; // rsi
  ULONG_PTR v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  ULONG_PTR v12; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 || a3 >= 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      v8 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), a3 & 0x7FFFFFFF, AlpcReserveType, v6);
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
  return (unsigned int)v5;
}
