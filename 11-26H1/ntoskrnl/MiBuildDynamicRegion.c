/*
 * XREFs of MiBuildDynamicRegion @ 0x1406F9C10
 * Callers:
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 */

unsigned __int64 __fastcall MiBuildDynamicRegion(struct _KTHREAD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  if ( a1 == (struct _KTHREAD *)&stru_140E2DAB0.QueueListEntry.Blink )
    stru_140E2DAB0.KernelStack = (void *)a3;
  a1->QuantumTarget = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1, a2) & 0x7FFF;
  a1->SListFaultAddress = (void *)v5;
  if ( a1 == (struct _KTHREAD *)&stru_140E2DAB0.Teb )
    a1->SListFaultAddress = (void *)(v5 & 0xFFF);
  a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v4;
  v7 = ((v4 & 0x3F) != 0) + (v4 >> 6);
  v8 = 8 * v7;
  v9 = v7 >> 9;
  v10 = v8 & 0xFFF;
  if ( a1 == (struct _KTHREAD *)&stru_140E2DAB0.Teb && (Flink = a1->Header.WaitListHead.Flink) != 0LL )
  {
    v12 = 0LL;
    v13 = (((unsigned __int64)Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    result = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned int)v9 + (v10 != 0), v9, v6);
    v13 = result;
    if ( !result )
      return result;
    v12 = 1LL;
  }
  MiInitializeDynamicBitmap(a1, v13 << 25 >> 16, v4, v12);
  *(_QWORD *)&a1->Header.Lock = 0LL;
  v16 = ExGenRandom(1, v15) & 0x7FFF;
  a1->SListFaultAddress = (void *)v16;
  if ( a1 == (struct _KTHREAD *)&stru_140E2DAB0.Teb )
    a1->SListFaultAddress = (void *)(v16 & 0xFFF);
  return 1LL;
}
