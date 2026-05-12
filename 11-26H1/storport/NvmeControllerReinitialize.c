/*
 * XREFs of NvmeControllerReinitialize @ 0x1400F9990
 * Callers:
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F6F30 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerQueuesReInit @ 0x1400F96F4 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x14011FD00 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 */

__int64 __fastcall NvmeControllerReinitialize(union _SLIST_HEADER *SystemArgument2, __int64 a2, int a3)
{
  int inited; // ecx
  __int64 Region; // rdx
  __int64 v6; // rdi
  char v7; // di
  __int64 v8; // rdx

  inited = 0;
  Region = SystemArgument2[80].Region;
  v6 = SystemArgument2[60].Region & 0x800000;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Region + 4), 1, 0) != 1 )
  {
    if ( v6 )
      NvmeControllerIoQueuesFreeResources((__int64)SystemArgument2, Region, a3);
    else
      NvmeControllerQueuesReInit((__int64)SystemArgument2);
    NvmeControllerDeleteExtendedCommandsInZombieList(SystemArgument2);
    v7 = v6 != 0;
    inited = NvmeControllerInitPhase1((char *)SystemArgument2, v7);
    if ( inited >= 0 )
    {
      LOBYTE(v8) = v7;
      inited = NvmeControllerInitPhase2((__int64)SystemArgument2, v8, 1);
      if ( inited >= 0 )
        inited = NvmeControllerInitPhase3(SystemArgument2, 1);
    }
    *(_DWORD *)(SystemArgument2[80].Region + 4) = 0;
  }
  return (unsigned int)inited;
}
