/*
 * XREFs of ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14006E060
 * Callers:
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1401422F0 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x140142630 (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1401626D0 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ReleaseExclusive@KPushLockBase@@QEAAXXZ @ 0x140164340 (-ReleaseExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?AcquireExclusive@KPushLockBase@@QEAAXXZ @ 0x140164360 (-AcquireExclusive@KPushLockBase@@QEAAXXZ.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401694C0 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwGetReferencesForConsumer(unsigned int a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  __int64 v4; // rbp
  char v6; // r15
  unsigned int v7; // r13d
  ULONG ActiveProcessorCount; // esi
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rdi
  KIRQL v11; // bl
  unsigned int i; // ebx
  unsigned int v13; // ebp
  void *Pool2; // rax
  void *v15; // rbp
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlockInternal; // rax
  struct _NDIS_PCW_DATA_BLOCK *v17; // rbx
  char v18; // dl
  void *Src; // [rsp+20h] [rbp-48h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v23 = 0;
  Src = 0LL;
  v4 = a3;
  v6 = 1;
  v7 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  KeEnterCriticalRegion();
  KPushLockBase::AcquireExclusive(&ndisPcwMutex);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v10 = ndisMiniportList;
  v11 = v9;
  if ( ndisMiniportList )
  {
    do
    {
      if ( !v6 )
        break;
      if ( v10->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport(v10, 0x5Au) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v11);
        for ( i = 0; i < ActiveProcessorCount; ++i )
        {
          if ( ndisPcwMatchInstance(v10, i, *(const struct _UNICODE_STRING **)(a2 + 8)) )
          {
            v13 = v23;
            if ( v23 < v7 )
              goto LABEL_15;
            Pool2 = (void *)ExAllocatePool2(256LL, 8 * (2 * v7 + 1), 2002994254LL);
            v15 = Pool2;
            if ( Pool2 )
            {
              if ( Src )
              {
                memmove(Pool2, Src, 8LL * v7);
                ExFreePoolWithTag(Src, 0);
              }
              Src = v15;
              v7 = 2 * v7 + 1;
              v13 = v23;
LABEL_15:
              MiniportDataBlockInternal = ndisPcwGetMiniportDataBlockInternal(v10);
              v17 = MiniportDataBlockInternal;
              if ( MiniportDataBlockInternal )
              {
                ndisPcwReferenceMiniportDataBlock(MiniportDataBlockInternal, a1, *(_QWORD *)a2);
                v3 = Src;
                v23 = v13 + 1;
                *((_QWORD *)Src + v13) = v17;
                goto LABEL_18;
              }
              break;
            }
            v6 = 0;
          }
        }
        v3 = Src;
LABEL_18:
        v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport(v10, 0x5Au);
        v18 = 0;
        if ( v7 <= 0x10000 )
          v18 = v6;
        v6 = v18;
      }
      v10 = v10->NextGlobalMiniport;
    }
    while ( v10 );
    v4 = a3;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v11);
  *(_DWORD *)(v4 + 40) = v23;
  *(_QWORD *)(v4 + 48) = v3;
  KPushLockBase::ReleaseExclusive(&ndisPcwMutex);
  KeLeaveCriticalRegion();
  return 0LL;
}
