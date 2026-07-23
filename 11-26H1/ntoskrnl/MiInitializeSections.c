/*
 * XREFs of MiInitializeSections @ 0x14086B0B8
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // al

  v2 = a1 + 2296;
  v3 = (_QWORD *)(a1 + 2448);
  v4 = a1 + 2448;
  v5 = 5LL;
  do
  {
    v3[1] = v4;
    *v3 = v4;
    v4 += 16LL;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(v2 + 32) = v2 + 24;
  *(_QWORD *)(v2 + 24) = v2 + 24;
  *(_QWORD *)(v2 + 48) = v2 + 40;
  *(_QWORD *)(v2 + 40) = v2 + 40;
  KeInitializeEvent((PRKEVENT)v2, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 2168), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 2144), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 2528), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 2360), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 2776), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 2832), SynchronizationEvent, 0);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    stru_140E2D2D0.StateSaveArea = (_XSAVE_FORMAT *)&stru_140E2D2D0.KernelStack;
    stru_140E2D2D0.KernelStack = &stru_140E2D2D0.KernelStack;
  }
  v6 = *(_BYTE *)(a1 + 2287) & 0xFD;
  *(_QWORD *)(a1 + 2200) = 0LL;
  *(_QWORD *)(a1 + 2232) = 1LL;
  *(_BYTE *)(a1 + 2287) = v6 | 4;
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2224) = a1;
  *(_DWORD *)(a1 + 2280) = 0;
  *(_BYTE *)(a1 + 2284) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 2256), NotificationEvent, 0);
}
