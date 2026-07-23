/*
 * XREFs of EtwpSendReplyDataBlock @ 0x140A8BA40
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseQueueEntry @ 0x140A8BB28 (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x140A8BB90 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  PVOID v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  Object = 0LL;
  v4 = *(unsigned int *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v7 = Object;
    if ( (*((_BYTE *)Object + 98) & 2) != 0 )
    {
      if ( (unsigned int)v4 < 4
        && (v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)Object + v4 + 6, 0LL)) != 0LL )
      {
        v9 = v8[4];
        if ( (*(_BYTE *)(v9 + 98) & 0x20) != 0 )
          v5 = -1073741055;
        else
          v5 = EtwpQueueReply(*(_QWORD *)(v9 + 48), a1);
        EtwpReleaseQueueEntry(v8);
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    ObfDereferenceObject(v7);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
