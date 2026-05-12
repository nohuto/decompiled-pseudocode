/*
 * XREFs of NvmeControllerPowerUp @ 0x1400F8B94
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x140124D20 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140126DA8 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 * Callees:
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400D149C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 *     NvmeControllerQueuesReInit @ 0x1400F96F4 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x14011FD00 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 */

__int64 __fastcall NvmeControllerPowerUp(union _SLIST_HEADER *SystemArgument2)
{
  __int64 v2; // rdx
  int inited; // edi
  __int64 v4; // rcx
  int v5; // eax

  SystemArgument2[60].Region &= ~4uLL;
  SystemArgument2[60].Region |= 0x2000000uLL;
  NvmeControllerQueuesReInit();
  NvmeControllerDeleteExtendedCommandsInZombieList(SystemArgument2);
  inited = NvmeControllerReset(SystemArgument2, v2, 2LL);
  if ( inited >= 0 )
  {
    inited = NvmeControllerInitPhase1((char *)SystemArgument2, 0);
    if ( inited >= 0 )
    {
      inited = NvmeControllerInitPhase2((__int64)SystemArgument2, 0LL, 1);
      if ( inited >= 0 )
      {
        inited = NvmeControllerInitPhase3(SystemArgument2, 1);
        if ( inited >= 0 )
        {
          v4 = *(_QWORD *)(SystemArgument2[8].Alignment + 160);
          if ( v4 )
          {
            v5 = *(_DWORD *)(v4 + 176);
            if ( (v5 & 0x20000) != 0 )
            {
              *(_DWORD *)(v4 + 176) = v5 & 0xFFFDFFFF;
              NvmeSetNonOperationalPowerStatePermissiveMode(
                SystemArgument2,
                (*(_DWORD *)(*(_QWORD *)(SystemArgument2[8].Alignment + 160) + 176LL) & 0x40000) != 0);
            }
          }
        }
      }
    }
  }
  SystemArgument2[60].Region &= ~0x2000000uLL;
  return (unsigned int)inited;
}
