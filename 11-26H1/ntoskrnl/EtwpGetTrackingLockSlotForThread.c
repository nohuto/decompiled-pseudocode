/*
 * XREFs of EtwpGetTrackingLockSlotForThread @ 0x14048FC20
 * Callers:
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1406CAF5C (PerfLogExecutiveResourceSetOwnerPointer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall EtwpGetTrackingLockSlotForThread(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 result; // rax
  signed __int64 Object; // rbx
  int v7; // esi
  signed __int64 v8; // rax
  unsigned int i; // ecx
  int v10; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 0LL;
  Object = (signed __int64)CurrentThread[1].WaitBlock[0].Object;
  v7 = EtwpEthreadSyncTrackingSequence;
  if ( Object )
    goto LABEL_7;
  result = ExAllocatePool2(0x48uLL);
  if ( !result )
    return 0LL;
  *(_QWORD *)(result + 16) = a1;
  *(_DWORD *)(result + 28) = a2;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = v7;
  Object = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Object, result, 0LL);
  if ( Object )
  {
    ExFreePoolWithTag((PVOID)result, 0);
LABEL_7:
    v8 = 0LL;
    for ( i = 0; i < 8; ++i )
    {
      v10 = *(_DWORD *)(Object + 28);
      if ( v10 == a2 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v7 )
        return Object;
      if ( !v8 )
      {
        if ( v10 )
        {
          if ( *(_DWORD *)(Object + 40) < v7 )
          {
            v8 = Object;
            break;
          }
        }
        else
        {
          v8 = Object;
        }
      }
      Object += 64LL;
    }
    Object = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 16) = a1;
      *(_DWORD *)(v8 + 28) = a2;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_DWORD *)(v8 + 24) = 0;
      *(_DWORD *)(v8 + 40) = v7;
      *(_DWORD *)(v8 + 44) = 0;
    }
    return Object;
  }
  return result;
}
