/*
 * XREFs of IopCompleteIoRingEntry @ 0x140410C94
 * Callers:
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopIoRingDispatchComplete @ 0x14077EE58 (IopIoRingDispatchComplete.c)
 *     IopIoRingDispatchCancel @ 0x14079AA08 (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x14079AAD0 (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x14079ABC0 (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x14079ACD4 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x14079B080 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingDispatchWrite @ 0x14079B2EC (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x14079B4A4 (IopIoRingDispatchWriteGather.c)
 *     IopIoRingDispatchRead @ 0x140B02B40 (IopIoRingDispatchRead.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopCompleteIoRingEntry(__int64 a1, __int64 a2, _OWORD *a3, KPRIORITY a4)
{
  int *v4; // r14
  struct _KEVENT *v8; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char v14; // bl
  signed __int32 v15[22]; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+60h] [rbp+8h]

  v4 = *(int **)(a1 + 80);
  v16 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  v9 = *v4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v11 = v4[1];
  v12 = v11 + 1;
  if ( v11 + 1 - v9 <= *(_DWORD *)(a1 + 28) )
  {
    v13 = 3LL * (v16 & v11);
    *(_QWORD *)&v4[2 * v13 + 2] = a2;
    *(_OWORD *)&v4[2 * v13 + 4] = *a3;
    v4[1] = v12;
    if ( *(_QWORD *)(a1 + 168) )
    {
      _InterlockedOr(v15, 0);
      if ( (v12 - *v4) % *(_DWORD *)(a1 + 28) == 1 )
      {
        v8 = *(struct _KEVENT **)(a1 + 168);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
      }
    }
  }
  v14 = 0;
  ++*(_QWORD *)(a1 + 120);
  if ( *(_BYTE *)(a1 + 160) && *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 160) = 0;
    v14 = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 104));
  if ( v14 )
    KeSetEvent((PRKEVENT)(a1 + 136), a4, 0);
  if ( v8 )
    KeSetEvent(v8, a4, 0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  __writecr8(v10);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
}
