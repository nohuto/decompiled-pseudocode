/*
 * XREFs of PnpMarkDeviceForRemove @ 0x1404FEBC8
 * Callers:
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 */

ULONG_PTR __fastcall PnpMarkDeviceForRemove(ULONG_PTR a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR v5; // rsi
  _QWORD *v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r15
  __int16 v10; // cx
  __int16 v11; // cx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL v15; // al
  ULONG_PTR result; // rax

  v5 = a1;
  if ( a2 )
  {
    a3[1] = 0LL;
    *a3 = a1;
  }
  if ( a1 )
  {
    v6 = a3 + 1;
    do
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        v7 = KeAcquireQueuedSpinLock(9uLL);
        v8 = *(_QWORD *)(v5 + 56);
        v9 = v7;
        v10 = *(_WORD *)(v8 + 4);
        if ( a2 )
        {
          v11 = v10 | 8;
          *(_WORD *)(v8 + 4) = v11;
          if ( (v11 & 1) != 0 )
          {
            v12 = *(void **)(v8 + 8);
            v6 = a3 + 1;
            a3[1] = (ULONG_PTR)v12;
            *a3 = v5;
            ObfReferenceObjectWithTag(v12, 0x746C6644u);
            LOBYTE(v13) = 1;
            IopIncrementDeviceObjectRefCount(a3[1], v13, v14);
          }
        }
        else
        {
          *(_WORD *)(v8 + 4) = v10 & 0xFFF7;
        }
        KeReleaseQueuedSpinLock(9uLL, v9);
      }
      if ( a2 )
      {
        if ( *v6 )
          break;
      }
      else
      {
        v6 = a3 + 1;
      }
      v15 = KeAcquireQueuedSpinLock(0xAuLL);
      v5 = *(_QWORD *)(v5 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v15);
    }
    while ( v5 );
  }
  result = a3[1];
  if ( !result )
    return *a3;
  return result;
}
