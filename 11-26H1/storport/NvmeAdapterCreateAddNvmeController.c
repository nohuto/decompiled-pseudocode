/*
 * XREFs of NvmeAdapterCreateAddNvmeController @ 0x1400D40F4
 * Callers:
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterAddController @ 0x1401971E8 (NvmeAdapterAddController.c)
 * Callees:
 *     NvmeAdapterIsNvmeControllerPresent @ 0x1400D92C4 (NvmeAdapterIsNvmeControllerPresent.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x1401A10DC (NvmeAdapterSendControlAddNvmeController.c)
 */

__int64 __fastcall NvmeAdapterCreateAddNvmeController(__int64 a1, __int16 a2, unsigned __int8 a3, int a4, __int64 *a5)
{
  __int64 v6; // r14
  int v8; // ebx
  __int64 v9; // rbp
  int NvmeController; // ebx
  __int64 IsNvmeControllerPresent; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  IsNvmeControllerPresent = NvmeAdapterIsNvmeControllerPresent(a1);
  if ( IsNvmeControllerPresent )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    NvmeController = NvmeAdapterCreateNvmeController(v9, v8, 0, a4, (__int64)&IsNvmeControllerPresent);
    if ( NvmeController >= 0 )
    {
      *(_WORD *)(IsNvmeControllerPresent + 4) = a2;
      *(_QWORD *)(IsNvmeControllerPresent + 136) = v6 ^ (*(_QWORD *)(IsNvmeControllerPresent + 136) ^ v6) & 0xFFFFFFFFFFFFFFFEuLL;
      NvmeController = NvmeAdapterSendControlAddNvmeController(IsNvmeControllerPresent);
      if ( NvmeController >= 0 )
        *a5 = IsNvmeControllerPresent;
      else
        NvmeAdapterDeleteNvmeController(&IsNvmeControllerPresent);
    }
  }
  return (unsigned int)NvmeController;
}
