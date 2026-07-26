/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x140142494
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016B1B0 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142538 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1401426F8 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140163960 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounterSet(
        struct _NDIS_MINIPORT_BLOCK *a1,
        KRegKey *a2,
        unsigned int a3,
        char a4,
        wchar_t *a5)
{
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rdi
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  KLockThisExclusive v10; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0;
  if ( (int)KRegKey::QueryValueUlong(a2, a5, &v9) >= 0 && v9 )
  {
    MiniportDataBlock = ndisPcwGetMiniportDataBlock(a1);
    if ( MiniportDataBlock )
    {
      KLockThisExclusive::KLockThisExclusive(&v10, &ndisPcwMutex);
      ndisPcwUpdateMiniportDataBlock(MiniportDataBlock, a3, v9 & ((unsigned int)(1LL << a4) - 1), 1LL);
      KLockHolder::~KLockHolder(&v10);
    }
  }
}
