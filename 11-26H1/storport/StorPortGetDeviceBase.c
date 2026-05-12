/*
 * XREFs of StorPortGetDeviceBase @ 0x14007B6E0
 * Callers:
 *     StorQueryDARTNVMeRegisters @ 0x140196450 (StorQueryDARTNVMeRegisters.c)
 *     StorSetDARTNVMeRegisters @ 0x140196778 (StorSetDARTNVMeRegisters.c)
 *     StorPortGetDeviceBaseVrfy @ 0x1401C2260 (StorPortGetDeviceBaseVrfy.c)
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140058B94 (MiniportGetNvmeAdapter.c)
 *     NvmeGetDeviceBaseEx @ 0x140079BE8 (NvmeGetDeviceBaseEx.c)
 *     WPP_SF_is @ 0x14007DBF8 (WPP_SF_is.c)
 *     RaidTranslateResourceListAddress @ 0x140082A44 (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x140092974 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall StorPortGetDeviceBase(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, char a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  int v10; // edx
  __int64 NvmeAdapter; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 RaidAdapter; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbp
  int v20; // r8d
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi

  v6 = *(_DWORD **)(a1 - 16);
  v7 = 0LL;
  if ( (v6[62] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v6);
    v19 = RaidAdapter;
    if ( RaidAdapter )
    {
      if ( (int)RaidTranslateResourceListAddress((int)RaidAdapter + 360, v16, v17, v18, a5) < 0 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v21 = "Io";
          if ( !a6 )
            v21 = "Memory";
          WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, 29, v20, a4, (__int64)v21);
        }
        return 0LL;
      }
      if ( a6 )
        return 0LL;
      v22 = MmMapIoSpaceEx(0LL, a5, 516LL);
      v23 = v22;
      if ( v22 && (int)RaidAllocateAddressMapping((int)v19 + 968, a4, v22, a5, a3, *(_QWORD *)(v19 + 8)) < 0 )
        return 0LL;
      return v23;
    }
    return 0LL;
  }
  NvmeAdapter = MiniportGetNvmeAdapter(v6);
  if ( NvmeAdapter )
    return NvmeGetDeviceBaseEx(NvmeAdapter, v10, v12, v13, a5, a6);
  return v7;
}
