/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x14007C944
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x140031BA0 (RaidGetStorPoFxComponent.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x14005D65C (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     RaidAdapterValidateStorPoFxComponent @ 0x140079D0C (RaidAdapterValidateStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140079DD0 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x14007A724 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x14007FE4C (RaidRegisterForRuntimePowerManagement.c)
 *     RaidSetD3Cold @ 0x1400806FC (RaidSetD3Cold.c)
 *     RaidNotifyPoAboutDFxOptOut @ 0x1400C5490 (RaidNotifyPoAboutDFxOptOut.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, _BYTE *a3)
{
  _DWORD *v5; // rcx
  __int64 RaidAdapter; // rax
  bool *v8; // r8
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  int *v12; // rcx
  int *StorPoFxComponent; // rax
  int *v14; // rbp
  __int64 v15; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v17; // r15
  __int64 Pool; // rax
  _QWORD *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int8 v22; // r8
  int v23; // eax
  unsigned __int8 v24; // r8
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // al
  __int64 v29; // r8
  unsigned int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // [rsp+28h] [rbp-40h]
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = *(_DWORD **)(a1 - 16);
  if ( (v5[62] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v5);
  v9 = RaidAdapter;
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( RuntimePowerDisabled )
  {
    *(_BYTE *)(RaidAdapter + 110) |= 4u;
    return 0LL;
  }
  v10 = *(_BYTE *)(RaidAdapter + 107);
  if ( (v10 & 0x20) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v9 + 5024) )
  {
    if ( a3 )
      *v8 = (v10 & 0x10) != 0;
    return 0LL;
  }
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((unsigned int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v11 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent(v12, 0);
  v14 = StorPoFxComponent;
  if ( !StorPoFxComponent || !RaidAdapterValidateStorPoFxComponent((__int64)StorPoFxComponent) )
    return 3238002694LL;
  v15 = *(_QWORD *)(v9 + 8);
  v34 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v15, a2, v9, &v34) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v17 = TotalStorPoFxDeviceSize;
  Pool = RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 144, 1330667858LL, *(_QWORD *)(v9 + 8));
  v19 = (_QWORD *)Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = v34;
    v20 = *(_DWORD *)(Pool + 20) | 3;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 5) = v20;
    if ( v14[2] == 1 )
      *((_DWORD *)v19 + 5) = v20 | 0x100;
    v19[1] = v19 + 18;
    memmove(v19 + 18, (const void *)a2, v17);
    v22 = *(_BYTE *)(v9 + 107);
    if ( ((v22 >> 3) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0
      && (LOBYTE(v21) = 1, v23 = RaidSetD3Cold(*(_QWORD *)(v9 + 8), v21), v22 = *(_BYTE *)(v9 + 107), v23 >= 0) )
    {
      v24 = v22 | 0x10;
      *(_BYTE *)(v9 + 107) = v24;
      if ( a3 )
      {
        *a3 = 1;
        v24 = *(_BYTE *)(v9 + 107);
      }
    }
    else
    {
      v24 = v22 & 0xEF;
      *(_BYTE *)(v9 + 107) = v24;
    }
    if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
    {
      v24 |= 0x40u;
      *(_BYTE *)(v9 + 107) = v24;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
      *(_BYTE *)(v9 + 108) |= 0x80u;
    v25 = *(_BYTE *)(v9 + 110);
    v26 = v25 | 0x40;
    v27 = v25 & 0xBF;
    if ( ((v24 >> 4) & ((*(_BYTE *)(a2 + 12) & *(_BYTE *)(v9 + 112) & 0x40) != 0)) == 0 )
      v26 = v27;
    *(_BYTE *)(v9 + 110) = v26;
    if ( (v26 & 0x40) != 0 )
    {
      LOBYTE(v21) = *(_BYTE *)(a2 + 12) & 0x40;
      RaidNotifyPoAboutDFxOptOut(*(_QWORD *)(v9 + 32), v21);
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *(_BYTE *)(v9 + 108) |= 8u;
    if ( (*(_BYTE *)(v9 + 110) & 0x40) != 0 )
    {
      v28 = *(_BYTE *)(v9 + 108);
      if ( (v28 & 8) != 0 )
        *(_BYTE *)(v9 + 108) = v28 & 0xF7;
    }
    if ( (*(_DWORD *)(a2 + 12) & 0x400) != 0 )
      *(_BYTE *)(v9 + 109) |= 1u;
    PoFxSetComponentLatency(*v19, 0LL, -1LL);
    PoFxSetComponentResidency(*v19, 0LL, -1LL);
    if ( *(char *)(v9 + 107) >= 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v9 + 5040) = *(_DWORD *)(a2 + 16);
    v30 = *(_DWORD *)(v9 + 5040);
    *(_QWORD *)(v9 + 5024) = v19;
    RaidAdapterPoFxSetDeviceIdleTimeout(v9, v30, v29, 0);
    if ( StorEtwLoggingEnabled )
    {
      v32 = *(unsigned int *)(v9 + 56);
      if ( (_DWORD)v32 != -1 && (byte_140173442 & 0x10) != 0 )
      {
        v33 = (*(unsigned __int8 *)(v9 + 107) >> 4) & 1;
        McTemplateK0pqtqqt_EtwWriteTransfer(
          v33,
          v32,
          v31,
          **(_QWORD **)(v9 + 5024),
          v32,
          v33,
          *(_DWORD *)(v9 + 5040),
          v14[2],
          (*(unsigned __int8 *)(v9 + 110) >> 6) & 1);
      }
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v9 + 5024));
    return 0LL;
  }
  PoFxUnregisterDevice(v34);
  return 3238002691LL;
}
