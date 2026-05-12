/*
 * XREFs of NvmeNamespaceRegisterForIdleDetection @ 0x14012911C
 * Callers:
 *     NvmeNamespaceEnableIdlePower @ 0x140104154 (NvmeNamespaceEnableIdlePower.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     RaidSetD3Cold @ 0x1400806FC (RaidSetD3Cold.c)
 *     NvmeNamespacePoFxSetDeviceIdleTimeout @ 0x140128068 (NvmeNamespacePoFxSetDeviceIdleTimeout.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x14012A824 (NvmeRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall NvmeNamespaceRegisterForIdleDetection(__int64 *a1, __int64 a2)
{
  _QWORD *Pool; // r14
  char v3; // r12
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rax
  BOOLEAN v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  _BYTE *v25; // rdx

  Pool = 0LL;
  v3 = 0;
  if ( RuntimePowerDisabled )
  {
LABEL_2:
    v6 = 0;
LABEL_48:
    v25 = (_BYTE *)a1[16];
    if ( v25[1] == 1 || **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1 )
      *v25 = 0;
    return (unsigned int)v6;
  }
  v7 = *(_QWORD *)(a1[2] + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) == 0
    || (v8 = *(_QWORD *)(v7 + 160), *(_BYTE *)v8 == 1) && (*(_DWORD *)(v8 + 176) & 0x100) != 0 )
  {
    v6 = -1073741823;
    goto LABEL_41;
  }
  v9 = NvmeNamespaceCheckAndAcquirePoFx((__int64)a1);
  v10 = a1[16];
  if ( !v9 )
  {
    if ( *(_BYTE *)(v10 + 1) == 1 )
      return 3221225558LL;
    v16 = *(_DWORD *)(v10 + 136);
    if ( (v16 & 4) != 0 )
      v17 = v16 ^ (v16 ^ (*(_DWORD *)(a2 + 8) >> 1)) & 1;
    else
      v17 = v16 & 0xFFFFFFFE;
    *(_DWORD *)(v10 + 136) = v17;
    v18 = 272LL;
    v19 = *(_QWORD *)(v7 + 160);
    if ( (*(_DWORD *)(v19 + 176) & 0x20) != 0
      && *(_BYTE *)v19 == 1
      && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 20LL) & 0x80u) == 0 )
    {
      v3 = 1;
      v18 = 304LL;
    }
    Pool = (_QWORD *)RaidAllocatePool(72LL, v18, 1330667858LL, a1[1]);
    if ( Pool
      && (v20 = a1[16],
          *(_QWORD *)(v20 + 40) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u),
          (v21 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40)) != 0LL) )
    {
      ExWaitForRundownProtectionReleaseCacheAware(v21);
      v22 = Pool[4] & 0xFFFFFFFD;
      *((_BYTE *)Pool + 64) = 1;
      *((_DWORD *)Pool + 4) = 0;
      *((_DWORD *)Pool + 8) = v22 | 4;
      *((_DWORD *)Pool + 5) = -1;
      Pool[11] = Pool + 10;
      Pool[10] = Pool + 10;
      KeInitializeSpinLock(Pool + 12);
      Pool[1] = Pool + 24;
      *((_DWORD *)Pool + 48) = 1;
      *((_DWORD *)Pool + 49) = 16;
      *((_DWORD *)Pool + 50) = 1;
      *((_DWORD *)Pool + 53) = 32;
      *((_DWORD *)Pool + 52) = 1;
      *((_DWORD *)Pool + 54) = 1;
      *((_OWORD *)Pool + 14) = xmmword_14015E750;
      *((_DWORD *)Pool + 60) = 1;
      *((_DWORD *)Pool + 61) = 32;
      Pool[31] = 0LL;
      Pool[32] = 0LL;
      *((_DWORD *)Pool + 66) = -1;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) != 0 )
      {
        v23 = *(_QWORD *)(v7 + 160);
        if ( *(_BYTE *)v23 == 1 && (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 20LL) & 0x200) != 0 )
          *((_DWORD *)Pool + 51) |= 2u;
      }
      if ( v3 )
      {
        *((_DWORD *)Pool + 51) |= 0x100u;
        *((_DWORD *)Pool + 54) = 2;
        *((_DWORD *)Pool + 68) = 1;
        *((_DWORD *)Pool + 69) = 32;
        Pool[35] = 0LL;
        Pool[36] = 0LL;
        *((_DWORD *)Pool + 74) = -1;
        *((_DWORD *)Pool + 8) |= 0x200u;
      }
      v6 = NvmeRegisterForRuntimePowerManagement(a1[1], Pool + 24, a1, Pool);
      if ( v6 >= 0 )
      {
        PoFxSetComponentLatency(*Pool, 0LL, -1LL);
        PoFxSetComponentResidency(*Pool, 0LL, -1LL);
        *(_QWORD *)(a1[16] + 8) = Pool;
        ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1[16] + 40));
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL)) & 1;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 24LL) = 0;
        if ( *((_DWORD *)Pool + 48) >= 2u && (*((_DWORD *)Pool + 51) & 0x10) != 0 )
          *((_DWORD *)Pool + 6) = *((_DWORD *)Pool + 52);
        if ( (*((_DWORD *)Pool + 51) & 2) != 0 )
          *((_DWORD *)Pool + 8) |= 0x400u;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 20LL) = *(_DWORD *)(a2 + 12);
        NvmeNamespacePoFxSetDeviceIdleTimeout((__int64)a1, *(_DWORD *)(a2 + 12), 1);
        *(_BYTE *)(a1[16] + 1) = 1;
        if ( **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(a1[16] + 96), 1, 0) )
        {
          PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1[2] + 128) + 160LL) + 8LL), 0LL, 0LL);
        }
        PoFxStartDevicePowerManagement(**(_QWORD **)(a1[16] + 8));
        RaidSetD3Cold((struct _DEVICE_OBJECT *)a1[1], *(_BYTE *)(a1[16] + 136) & 1);
        goto LABEL_2;
      }
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_41:
    v24 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40);
    if ( v24 )
    {
      ExFreeCacheAwareRundownProtection(v24);
      *(_QWORD *)(a1[16] + 40) = 0LL;
    }
    if ( Pool )
    {
      if ( *Pool )
        PoFxUnregisterDevice(*Pool);
      ExFreePoolWithTag(Pool, 0x4F506152u);
    }
    if ( v6 == -1073741738 )
      return (unsigned int)v6;
    goto LABEL_48;
  }
  v11 = *(_QWORD *)(v10 + 8);
  v12 = *(_DWORD *)(a2 + 12);
  if ( v12 != *(_DWORD *)(v11 + 20) )
  {
    *(_DWORD *)(v11 + 20) = v12;
    NvmeNamespacePoFxSetDeviceIdleTimeout((__int64)a1, *(_DWORD *)(a2 + 12), 0);
  }
  v13 = *(_QWORD *)(a1[16] + 8);
  v14 = *(_DWORD *)(v13 + 32);
  if ( (((unsigned __int8)v14 ^ *(_BYTE *)(a2 + 8)) & 1) != 0 )
    *(_DWORD *)(v13 + 32) = v14 ^ (*(_DWORD *)(a2 + 8) ^ v14) & 1;
  NvmeNamespaceReleasePoFx((__int64)a1);
  return 0LL;
}
