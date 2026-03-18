/*
 * XREFs of KiInitializeProcessor @ 0x140BF3FD4
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BF5030 (KiInitializeDynamicProcessorDpc.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeGate @ 0x1404D6C58 (KeInitializeGate.c)
 *     KeInitializeThreadedDpc @ 0x14052FC70 (KeInitializeThreadedDpc.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1405E909C (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KiInitializeDpcList @ 0x1405FAFF8 (KiInitializeDpcList.c)
 *     KiApplyProcessorDpcLimits @ 0x140BF3624 (KiApplyProcessorDpcLimits.c)
 */

__int64 __fastcall KiInitializeProcessor(__int64 a1)
{
  int v1; // edi
  int v3; // ecx
  int v4; // ecx
  _DWORD v6[10]; // [rsp+20h] [rbp-28h] BYREF

  v1 = KeDpcWatchdogProfileBufferSizeBytes;
  memset(v6, 0, 32);
  if ( KeThreadDpcEnable )
  {
    KeInitializeGate(a1 + 33600, 0);
    KiInitializeDpcList((_QWORD *)(a1 + 14448));
    *(_QWORD *)(a1 + 14464) = 0LL;
    *(_DWORD *)(a1 + 14472) = 0;
  }
  KeInitializeThreadedDpc((PRKDPC)(a1 + 35624), (PKDEFERRED_ROUTINE)KiDpcWatchdog, (PVOID)*(unsigned int *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 35625) = 2;
  if ( !*(_QWORD *)(a1 + 35680) )
    *(_WORD *)(a1 + 35626) = v3 + 2048;
  KeInitializeDpc((PRKDPC)(a1 + 41360), (PKDEFERRED_ROUTINE)KiFreeTemporaryStacks, 0LL);
  v4 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 41361) = 2;
  if ( !*(_QWORD *)(a1 + 41416) )
    *(_WORD *)(a1 + 41362) = v4 + 2048;
  KiCreateDpcLimitsProcessorConfiguration((__int64)v6, 0, v1);
  return KiApplyProcessorDpcLimits(a1, v6);
}
