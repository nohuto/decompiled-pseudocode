/*
 * XREFs of NtRequestWaitReplyPort @ 0x140B0DA40
 * Callers:
 *     DifNtRequestWaitReplyPortWrapper @ 0x140689A70 (DifNtRequestWaitReplyPortWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtRequestWaitReplyPort(void *a1, ULONG_PTR a2, char *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  int v7; // ebx
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader((unsigned __int64)a3, 0);
    v7 = AlpcpProcessSynchronousRequest(Object, 0x20000, a2, 0LL, a3, 0LL, 0LL, 0LL, PreviousMode);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
