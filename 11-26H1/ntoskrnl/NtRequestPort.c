/*
 * XREFs of NtRequestPort @ 0x140B2B7F0
 * Callers:
 *     DifNtRequestPortWrapper @ 0x14068D4E0 (DifNtRequestPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 */

NTSTATUS __cdecl NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  NTSTATUS v4; // edi
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8[6]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v8, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    v8[0] = (__int64)Object;
    v9 = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage(v8, (__m256i *)RequestMessage, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(v5);
  }
  return v4;
}
