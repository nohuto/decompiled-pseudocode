/*
 * XREFs of NvmeAdapterEnableFabricController @ 0x1400E80DC
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68 (NvmeAdapterSetFabricControllerProperty.c)
 */

__int64 __fastcall NvmeAdapterEnableFabricController(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  unsigned int v3; // edi
  __int64 v6; // rdx
  int FabricControllerProperty; // ebp
  __int64 v9; // [rsp+C0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 500 * *(unsigned __int8 *)(a1 + 587);
  v9 = 0LL;
  if ( !v3 )
    v3 = 10;
  FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 20LL, &v9);
  if ( FabricControllerProperty >= 0 )
  {
    FabricControllerProperty = NvmeAdapterSetFabricControllerProperty(a1, v6, (unsigned int)v9 | 1LL);
    if ( FabricControllerProperty >= 0 )
    {
      while ( v3 )
      {
        FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 28LL, &v9);
        if ( FabricControllerProperty < 0 )
        {
          *a2 = 18;
          return (unsigned int)FabricControllerProperty;
        }
        v2 = v9;
        if ( (v9 & 1) != 0 )
          goto LABEL_18;
        StorDelayExecution(0x2710u);
        if ( v3 == 10 )
        {
          v3 = 1;
        }
        else if ( v3 <= 0xA )
        {
          v3 = 0;
        }
        else
        {
          v3 -= 10;
        }
      }
      if ( (v2 & 1) == 0 )
      {
        FabricControllerProperty = -1056964607;
        *a2 = 19;
        StorEtwNvmeControllerEvent(
          a1,
          1,
          3LL,
          (__int64)L"Enable controller - Ready timeout",
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
        return (unsigned int)FabricControllerProperty;
      }
LABEL_18:
      *(_QWORD *)(a1 + 136) |= 0x100uLL;
    }
    else
    {
      *a2 = 16;
    }
  }
  else
  {
    *a2 = 17;
  }
  return (unsigned int)FabricControllerProperty;
}
