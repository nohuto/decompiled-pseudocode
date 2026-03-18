/*
 * XREFs of SmmInitializeDmaDevices @ 0x140286178
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140286618 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIQEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmIommuCreateDevice@@YAJPEAUSYSMM_PHYSICAL_ADAPTER@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402852A8 (-SmmIommuCreateDevice@@YAJPEAUSYSMM_PHYSICAL_ADAPTER@@IIPEAPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1402853C8 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmInitializeDmaDevices(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int Device; // ebx
  char v6; // dl
  _DWORD *v7; // rcx
  char v8; // r14
  unsigned int i; // ebp
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rbp
  struct _IOMMU_DMA_DEVICE *v14; // rcx
  struct _IOMMU_DMA_DEVICE *v15; // rcx

  v3 = *(_DWORD *)(a1 + 24);
  Device = 0;
  v6 = 1;
  if ( v3 )
  {
    a3 = v3;
    v7 = (_DWORD *)(*(_QWORD *)(a1 + 360) + 8LL);
    do
    {
      if ( *v7 == 2 )
        v6 = (*(_BYTE *)(a1 + 88) & 1) != 0 ? v6 : 0;
      v7 += 12;
      --a3;
    }
    while ( a3 );
  }
  if ( !dword_1401695D8 || !v6 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 284;
    return (unsigned int)Device;
  }
  v8 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
  {
    v10 = *(_QWORD *)(a1 + 360) + 48LL * i;
    if ( *(_QWORD *)(v10 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 214;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalAdapter->DmaDevice == nullptr",
        214LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 || (*(_DWORD *)(a1 + 20) & 2) != 0 )
    {
      Device = SmmIommuCreateDevice(
                 (struct SYSMM_PHYSICAL_ADAPTER *)v10,
                 0,
                 a3,
                 (struct _IOMMU_DMA_DEVICE **)(v10 + 24));
      if ( Device >= 0 )
      {
        if ( (*(_DWORD *)(v10 + 16) & 0x20) == 0 )
          goto LABEL_22;
        if ( *(_QWORD *)(v10 + 32) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 222;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pPhysicalAdapter->DmaDevice2 == nullptr",
            222LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        Device = SmmIommuCreateDevice(
                   (struct SYSMM_PHYSICAL_ADAPTER *)v10,
                   1u,
                   a3,
                   (struct _IOMMU_DMA_DEVICE **)(v10 + 32));
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 224;
      }
      if ( Device != -1073741275 && Device != -1070268400 )
      {
        if ( Device < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 244;
          if ( i )
          {
            v11 = 0LL;
            v12 = i;
            do
            {
              v13 = *(_QWORD *)(a1 + 360);
              v14 = *(struct _IOMMU_DMA_DEVICE **)(v11 + v13 + 24);
              if ( v14 )
              {
                SmmIommuDeleteDevice(v14);
                v15 = *(struct _IOMMU_DMA_DEVICE **)(v11 + v13 + 32);
                *(_QWORD *)(v11 + v13 + 24) = 0LL;
                if ( v15 )
                {
                  SmmIommuDeleteDevice(v15);
                  *(_QWORD *)(v11 + v13 + 32) = 0LL;
                }
              }
              v11 += 48LL;
              --v12;
            }
            while ( v12 );
          }
          return (unsigned int)Device;
        }
LABEL_22:
        v8 = 1;
        continue;
      }
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 238;
      Device = 0;
    }
  }
  if ( v8 )
    *(_DWORD *)(a1 + 20) |= 4u;
  return (unsigned int)Device;
}
