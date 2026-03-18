/*
 * XREFs of NVMeControllerReinitialize @ 0x140024B08
 * Callers:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1400076B0 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1400184FC (NVMeInitializeProcessorIoQueueMapping.c)
 */

char __fastcall NVMeControllerReinitialize(__int64 a1)
{
  int v2; // esi
  char v3; // bl
  unsigned int v4; // eax
  int v5; // esi
  __int64 v6; // rdx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = v2 & 0xFFFFFFEF;
  v5 = v2 & 0x800000;
  *(_DWORD *)(a1 + 24) = v4;
  NVMeQueuesReInit(a1);
  if ( !(unsigned int)NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v6) = v5 != 0;
    if ( !(unsigned int)NVMeControllerInitPart2(a1, v6, 1u)
      && NVMeControllerInitPart3(a1, 1u)
      && (!v5 || !(unsigned int)NVMeInitializeProcessorIoQueueMapping(a1)) )
    {
      return 1;
    }
  }
  return v3;
}
