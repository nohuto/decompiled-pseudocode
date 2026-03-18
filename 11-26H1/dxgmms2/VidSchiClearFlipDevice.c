/*
 * XREFs of VidSchiClearFlipDevice @ 0x140003564
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProcessFlipPendingContextList @ 0x140020700 (VidSchiProcessFlipPendingContextList.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int *v6; // rsi
  unsigned int i; // r14d
  struct _VIDSCH_GLOBAL *v9; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-9h] BYREF
  char v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  _BYTE v13[48]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = (unsigned int *)((char *)a1 + 48);
  if ( a4 != -3 )
  {
    if ( a4 < *v6 )
    {
      VidSchiSetFlipDevice(a1, a3, 0, a5);
      goto LABEL_6;
    }
    WdLogSingleEntry1(3LL, a4);
    WdLogGlobalForLineNumber = 23003;
  }
  for ( i = 0; i < *v6; ++i )
    VidSchiSetFlipDevice(a1, a3, 0, a5);
LABEL_6:
  if ( *((_BYTE *)a1 + 59) )
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)a1 + 252, 1, 0);
    v9 = a1;
    v11 = 0;
    v10[1] = v10;
    v12 = 2;
    v10[0] = v10;
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(&v9, a1) )
    {
      *((_QWORD *)a1 + 187) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)a1 + 61, 0, 0);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v9);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
  }
}
