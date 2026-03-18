/*
 * XREFs of NtRequestPort @ 0x140B292B0
 * Callers:
 *     DifNtRequestPortWrapper @ 0x140689900 (DifNtRequestPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtRequestPort(HANDLE Handle, __m256i *a2)
{
  int v4; // edi
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10[6]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset_0(v10, 0, 0x40uLL);
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    v10[0] = (__int64)Object;
    v11 = 0x10000;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = AlpcpSendMessage(v10, a2, 0LL, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8);
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
