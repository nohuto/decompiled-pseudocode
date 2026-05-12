/*
 * XREFs of NvmeAdapterDisableFabricController @ 0x1400E7904
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68 (NvmeAdapterSetFabricControllerProperty.c)
 */

__int64 __fastcall NvmeAdapterDisableFabricController(__int64 a1, char a2)
{
  bool v3; // zf
  char v4; // bl
  int FabricControllerProperty; // esi
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  const wchar_t *v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v13; // [rsp+C0h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 568) == 2;
  v4 = 0;
  FabricControllerProperty = 0;
  v13 = 0LL;
  if ( !v3 )
  {
    *(_QWORD *)(a1 + 136) &= ~0x100uLL;
    return (unsigned int)FabricControllerProperty;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 592);
    if ( !v6 || (v7 = 64, !*(_DWORD *)(v6 + 88)) )
      v7 = 5000;
    FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 20LL, &v13);
    if ( FabricControllerProperty >= 0 )
    {
      FabricControllerProperty = NvmeAdapterSetFabricControllerProperty(
                                   a1,
                                   v8,
                                   (unsigned int)v13 & 0xFFFF3FFF | 0x4000LL);
      if ( FabricControllerProperty >= 0 )
      {
        *(_QWORD *)(a1 + 136) &= ~0x100uLL;
        while ( v7 )
        {
          FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 28LL, &v13);
          if ( FabricControllerProperty < 0 )
            return (unsigned int)FabricControllerProperty;
          v4 = v13;
          if ( (v13 & 0xC) == 8 )
            break;
          StorDelayExecution(0x2710u);
          if ( v7 == 10 )
          {
            v7 = 1;
          }
          else if ( v7 <= 0xA )
          {
            v7 = 0;
          }
          else
          {
            v7 -= 10;
          }
        }
        if ( (v4 & 0xC) != 8 )
        {
          v9 = L"Disable controller - Shutdown timeout";
LABEL_35:
          FabricControllerProperty = -1056964607;
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3LL,
            (__int64)v9,
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
        }
      }
    }
  }
  else
  {
    v10 = 500 * *(unsigned __int8 *)(a1 + 587);
    if ( !v10 )
      v10 = 10;
    FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 20LL, &v13);
    if ( FabricControllerProperty >= 0 )
    {
      FabricControllerProperty = NvmeAdapterSetFabricControllerProperty(a1, v11, (unsigned int)v13 & 0xFFFFFFFE);
      if ( FabricControllerProperty >= 0 )
      {
        *(_QWORD *)(a1 + 136) &= ~0x100uLL;
        while ( v10 )
        {
          FabricControllerProperty = NvmeAdapterGetFabricControllerProperty(a1, 28LL, &v13);
          if ( FabricControllerProperty < 0 )
            return (unsigned int)FabricControllerProperty;
          v4 = v13;
          if ( (v13 & 1) == 0 )
            return (unsigned int)FabricControllerProperty;
          StorDelayExecution(0x2710u);
          if ( v10 == 10 )
          {
            v10 = 1;
          }
          else if ( v10 <= 0xA )
          {
            v10 = 0;
          }
          else
          {
            v10 -= 10;
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v9 = L"Disable controller - Ready timeout";
          goto LABEL_35;
        }
      }
    }
  }
  return (unsigned int)FabricControllerProperty;
}
