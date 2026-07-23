/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x140885030
 * Callers:
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8 (MiSpecialPurposeMemoryTypeDereference.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiSpecialPurposeMemoryRemoved(_QWORD *a1)
{
  HANDLE *v1; // rsi
  HANDLE *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rbp
  HANDLE *v5; // rbx
  HANDLE *v6; // rcx
  HANDLE **v7; // rax
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  bool v11; // zf
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  struct _KTHREAD *v15; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v1 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( !a1[2786] && !a1[62] )
  {
    SpecialPurposeMemoryTypeByPartition = (HANDLE *)MiFindSpecialPurposeMemoryTypeByPartition(
                                                      (__int64)a1,
                                                      &v14,
                                                      (volatile signed __int64 **)&v15);
    v4 = v14;
    v5 = SpecialPurposeMemoryTypeByPartition;
    if ( SpecialPurposeMemoryTypeByPartition
      && !a1[2786]
      && !a1[62]
      && !SpecialPurposeMemoryTypeByPartition[11]
      && *(_QWORD *)(a1[32] + 48LL) <= 1uLL )
    {
      if ( SpecialPurposeMemoryTypeByPartition[9] )
      {
        *((_QWORD *)&v12 + 1) = v14;
        *(_QWORD *)&v12 = SpecialPurposeMemoryTypeByPartition;
        KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v12);
      }
      v6 = (HANDLE *)*v5;
      if ( *((HANDLE **)*v5 + 1) != v5 || (v7 = (HANDLE **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      v1 = v5;
      v6[1] = v7;
    }
    v8 = v15;
    if ( v15 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v15->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&v8->Header.Lock);
      KeAbPostRelease((unsigned __int64)v8);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v9, (__int64)CurrentThread);
      }
    }
    if ( v4 )
      PsDereferencePartition(*(_QWORD *)(v4 + 256));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
