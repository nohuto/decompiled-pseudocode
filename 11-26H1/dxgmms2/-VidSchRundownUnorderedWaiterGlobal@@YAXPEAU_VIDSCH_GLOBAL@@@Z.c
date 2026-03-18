/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140055FF8
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004B6CC (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_GLOBAL *i; // rdi
  struct _KEVENT *v3; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-48h] BYREF
  char v5; // [rsp+38h] [rbp-38h]
  int v6; // [rsp+3Ch] [rbp-34h]
  _BYTE v7[48]; // [rsp+40h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v7, (unsigned __int64 *)a1 + 252, 1, 0);
  *((_BYTE *)a1 + 3284) |= 1u;
  v3 = (struct _KEVENT *)a1;
  v5 = 0;
  v4[1] = v4;
  v4[0] = v4;
  v6 = 2;
  if ( *((_QWORD *)a1 + 110) )
  {
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 45);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 360);
          i = *(struct _VIDSCH_GLOBAL **)i )
    {
      VidSchiRundownUnorderedWaiterDevice((struct HwQueueStagingList *)&v3, (__int64)i - 112);
    }
  }
  *((_BYTE *)a1 + 3284) &= ~1u;
  HwQueueStagingList::~HwQueueStagingList(&v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v7);
}
