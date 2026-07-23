/*
 * XREFs of MiAsyncSlabReplenish @ 0x1402A4ED4
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiFastReplenishWithAsync @ 0x1402A4E88 (MiFastReplenishWithAsync.c)
 *     MiAllocateSlabPageForMdl @ 0x14033C100 (MiAllocateSlabPageForMdl.c)
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     MiDeleteSlabAllocator @ 0x14070B460 (MiDeleteSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiAsyncSlabReplenish(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  int v6; // edi
  volatile LONG *v7; // rbx
  unsigned int v8; // esi
  volatile LONG *v9; // rcx
  BOOL v10; // r15d
  KIRQL v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // rax
  KIRQL v14; // di
  __int64 v15; // rcx
  _QWORD **v16; // rax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-28h]
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v20; // [rsp+42h] [rbp-1Eh]
  char v21; // [rsp+43h] [rbp-1Dh]
  int v22; // [rsp+44h] [rbp-1Ch]
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+B8h] [rbp+58h]

  v17 = 0LL;
  v18 = 0LL;
  v21 = 0;
  if ( (MiFlags & 0x30) == 0 )
    return 1LL;
  v6 = 1;
  Object = 0;
  v22 = 0;
  v23[1] = v23;
  v7 = (volatile LONG *)(a1 + 16);
  v20 = 6;
  v23[0] = v23;
  v8 = a3 & 1;
  v9 = (volatile LONG *)(a1 + 16);
  v10 = !(a3 & 1);
  v25 = a3 & 4;
  if ( (a3 & 4) != 0 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v9);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v9);
  }
  if ( *(_QWORD *)(a1 + 208) )
    goto LABEL_9;
  if ( (a3 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 208) = a1;
    ExQueueWorkItemToPartition(a1 + 184);
LABEL_9:
    if ( v10 )
    {
      v12 = a1 + 216;
      v13 = *(_QWORD **)(v12 + 8);
      if ( *v13 != v12 )
        __fastfail(3u);
      v18 = *(_QWORD ***)(v12 + 8);
      v17 = v12;
      *v13 = &v17;
      *(_QWORD *)(v12 + 8) = &v17;
    }
    goto LABEL_14;
  }
  v10 = 0;
LABEL_14:
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v11);
  if ( v10 )
  {
    if ( KeWaitForSingleObject(&Object, WrKernel, 0, 0, a2) != 258 )
      v6 = v8;
    v8 = v6;
    if ( v25 )
    {
      v14 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    }
    else
    {
      v14 = ExAcquireSpinLockExclusive(v7);
    }
    v15 = v17;
    v16 = v18;
    if ( *(__int64 **)(v17 + 8) != &v17 || *v18 != &v17 )
      __fastfail(3u);
    *v18 = (_QWORD *)v17;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v14 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    else
      ExReleaseSpinLockExclusive(v7, v14);
  }
  return v8;
}
