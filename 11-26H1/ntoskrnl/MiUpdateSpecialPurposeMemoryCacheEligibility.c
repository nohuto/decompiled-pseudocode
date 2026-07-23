/*
 * XREFs of MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1408852E0
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x140883948 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 */

__int64 __fastcall MiUpdateSpecialPurposeMemoryCacheEligibility(__int64 a1, int a2)
{
  _QWORD *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  $241382875694CED3D471BC5892DE3337 *v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  struct _KTHREAD *v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  SpecialPurposeMemoryTypeByPartition = MiFindSpecialPurposeMemoryTypeByPartition(
                                          a1,
                                          &v14,
                                          (volatile signed __int64 **)&v15);
  v4 = v14;
  if ( SpecialPurposeMemoryTypeByPartition )
  {
    if ( (a2 == 0) == (SpecialPurposeMemoryTypeByPartition[9] == 0LL) )
    {
      v5 = 255;
    }
    else
    {
      *(_QWORD *)&v12 = SpecialPurposeMemoryTypeByPartition;
      LODWORD(v13) = a2;
      *((_QWORD *)&v12 + 1) = v14;
      KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v12);
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073740640;
  }
  v6 = v15;
  if ( v15 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v15->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v6->Header.Lock);
    KeAbPostRelease((unsigned __int64)v6);
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v10 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v10->ApcState.ApcListHead[0].Flink != v10 )
        KiCheckForKernelApcDelivery(v7, (__int64)v10);
    }
  }
  if ( v4 )
    PsDereferencePartition(*(_QWORD *)(v4 + 256));
  return v5;
}
