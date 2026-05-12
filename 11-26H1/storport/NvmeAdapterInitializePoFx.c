/*
 * XREFs of NvmeAdapterInitializePoFx @ 0x140123A1C
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x140031BA0 (RaidGetStorPoFxComponent.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x14005D65C (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterValidateStorPoFxComponent @ 0x140079D0C (RaidAdapterValidateStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140079DD0 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidSetD3Cold @ 0x1400806FC (RaidSetD3Cold.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x140124014 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x14012A824 (NvmeRegisterForRuntimePowerManagement.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeAdapterInitializePoFx(__int64 a1, __int64 a2, bool *a3)
{
  _QWORD *Pool; // rsi
  __int64 v7; // rax
  int v9; // ebx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v11; // r15
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  __int64 v13; // rbx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  int v15; // r8d
  int v16; // r8d
  int *StorPoFxComponent; // rax
  int *v18; // rbx
  int v19; // r8d
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  Pool = 0LL;
  v28 = 0LL;
  if ( RuntimePowerDisabled )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v7 == 1 )
  {
    if ( a3 )
      *a3 = (*(_DWORD *)(v7 + 176) & 8) != 0;
    return 0LL;
  }
  v9 = NvmeRegisterForRuntimePowerManagement(*(_QWORD *)(a1 + 8), a2, a1, &v28);
  if ( v9 >= 0 )
  {
    TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
    v11 = TotalStorPoFxDeviceSize;
    Pool = (_QWORD *)RaidAllocatePool(72LL, TotalStorPoFxDeviceSize + 192, 1330667858LL, *(_QWORD *)(a1 + 8));
    if ( Pool )
    {
      v13 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(v13 + 80) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u);
      v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(a1 + 160) + 80LL);
      if ( v14 )
      {
        ExWaitForRundownProtectionReleaseCacheAware(v14);
        v15 = *((_DWORD *)Pool + 5);
        *Pool = v28;
        v16 = v15 | 1;
        *((_BYTE *)Pool + 64) = 1;
        *((_DWORD *)Pool + 32) = -1;
        *((_DWORD *)Pool + 33) = -1;
        *((_DWORD *)Pool + 17) = 0;
        *((_DWORD *)Pool + 5) = v16;
        if ( (*(_DWORD *)(a2 + 12) & 2) != 0 )
          *((_DWORD *)Pool + 5) = v16 | 0x200;
        StorPoFxComponent = RaidGetStorPoFxComponent((int *)a2, 0);
        v18 = StorPoFxComponent;
        if ( StorPoFxComponent && RaidAdapterValidateStorPoFxComponent((__int64)StorPoFxComponent) )
        {
          if ( v18[2] == 1 )
            *((_DWORD *)Pool + 5) = v19 | 0x80;
          Pool[1] = Pool + 24;
          memmove(Pool + 24, (const void *)a2, v11);
          *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) &= ~8u;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x10) != 0
            && (*(_BYTE *)(a2 + 12) & 4) != 0
            && (int)RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(a1 + 8), 1) >= 0 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 8u;
            if ( a3 )
              *a3 = 1;
          }
          if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x40u;
          if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x80u;
          v20 = *(_QWORD *)(a1 + 160);
          v21 = *(_DWORD *)(v20 + 176) | 0x20;
          if ( ((*(_BYTE *)(a2 + 12) >> 6) & ((*(_DWORD *)(v20 + 176) & 9) == 9)) == 0 )
            v21 = *(_DWORD *)(v20 + 176) & 0xFFFFFFDF;
          *(_DWORD *)(v20 + 176) = v21;
          if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x100u;
          v22 = *(_QWORD *)(a1 + 160);
          if ( (*(_DWORD *)(v22 + 176) & 0x120) == 0x120 )
          {
            *(_DWORD *)(v22 + 176) &= ~0x100u;
            v22 = *(_QWORD *)(a1 + 160);
          }
          if ( _bittest((const signed __int32 *)(a2 + 12), 0xAu) )
            *(_DWORD *)(v22 + 176) |= 0x200u;
          PoFxSetComponentLatency(*Pool, 0LL, -1LL);
          PoFxSetComponentResidency(*Pool, 0LL, -1LL);
          if ( !_bittest((const signed __int32 *)(*(_QWORD *)(a1 + 160) + 176LL), 0xAu)
            && *(_DWORD *)a2 >= 2u
            && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
          {
            *((_DWORD *)Pool + 32) = *(_DWORD *)(a2 + 16);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) = Pool;
          ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 160) + 80LL));
          **(_BYTE **)(a1 + 160) = 1;
          NvmeAdapterPoFxSetDeviceIdleTimeout(
            a1,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 128LL),
            v23,
            0LL);
          if ( StorEtwLoggingEnabled )
          {
            v25 = *(unsigned int *)(a1 + 56);
            if ( (_DWORD)v25 != -1 && (byte_140173442 & 0x10) != 0 )
            {
              v26 = *(_QWORD *)(a1 + 160);
              v27 = (*(_DWORD *)(v26 + 176) >> 3) & 1;
              McTemplateK0pqtqqt_EtwWriteTransfer(
                v27,
                v25,
                v24,
                **(_QWORD **)(v26 + 8),
                v25,
                v27,
                *(_DWORD *)(*(_QWORD *)(v26 + 8) + 128LL),
                v18[2],
                (*(_DWORD *)(v26 + 176) >> 5) & 1);
            }
          }
          PoFxStartDevicePowerManagement(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL));
          return 0LL;
        }
        v9 = -1073741811;
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1056964605;
    }
  }
  if ( v28 )
    PoFxUnregisterDevice(v28);
  v12 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(a1 + 160) + 80LL);
  if ( v12 )
  {
    ExFreeCacheAwareRundownProtection(v12);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 80LL) = 0LL;
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x4F506152u);
  return (unsigned int)v9;
}
