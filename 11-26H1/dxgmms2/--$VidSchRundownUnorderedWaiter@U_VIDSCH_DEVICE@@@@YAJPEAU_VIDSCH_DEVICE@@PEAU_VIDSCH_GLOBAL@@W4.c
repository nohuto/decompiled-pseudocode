/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC
 * Callers:
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004B6CC (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  struct _KEVENT *v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-48h] BYREF
  char v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  _BYTE v13[48]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 1852) )
  {
    if ( a3 >= 8 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1852) )
      {
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(a2 + 2016), 1, 0);
        v9 = (struct _KEVENT *)a2;
        v11 = 0;
        v10[1] = v10;
        v12 = 2;
        v10[0] = v10;
        VidSchiRundownUnorderedWaiterDevice((struct HwQueueStagingList *)&v9);
        HwQueueStagingList::~HwQueueStagingList(&v9);
        AcquireSpinLock::Release((AcquireSpinLock *)v13);
      }
    }
    else
    {
      return (unsigned int)-2147483631;
    }
  }
  return v5;
}
