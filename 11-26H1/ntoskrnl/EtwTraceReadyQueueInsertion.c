/*
 * XREFs of EtwTraceReadyQueueInsertion @ 0x14022476C
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022CBE0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140333BD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140445DC0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall EtwTraceReadyQueueInsertion(__int64 a1, int a2, char a3, __int64 *a4)
{
  char v4; // r11
  __int64 v5; // r10
  int v6; // r9d
  int v7; // r8d
  _DWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  char v9; // [rsp+38h] [rbp-38h]
  char v10; // [rsp+39h] [rbp-37h]
  bool v11; // [rsp+3Ah] [rbp-36h]
  char v12; // [rsp+3Bh] [rbp-35h]
  _QWORD v13[3]; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  if ( a4 )
  {
    v4 = *((_BYTE *)a4 + 12);
    v5 = *a4;
    v6 = *((_DWORD *)a4 + 2);
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    v6 = 0;
  }
  v8[0] = *(_DWORD *)(a1 + 1296);
  v9 = a3;
  v7 = 1;
  v12 = 0;
  v11 = v6 != 0;
  v13[0] = v8;
  v8[1] = a2;
  v10 = v4;
  v13[1] = 12LL;
  if ( v6 )
  {
    v13[2] = v5;
    v7 = 2;
    v14 = v6;
    v15 = 0;
  }
  EtwTraceSiloKernelEvent(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL), (int)v13, v7, 0xA0000800, 1356, 6295042);
}
