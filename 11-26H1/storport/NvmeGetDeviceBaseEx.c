/*
 * XREFs of NvmeGetDeviceBaseEx @ 0x140079BE8
 * Callers:
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     WPP_SF_is @ 0x14007DBF8 (WPP_SF_is.c)
 *     RaidTranslateResourceListAddress @ 0x140082A44 (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x140092974 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall NvmeGetDeviceBaseEx(__int64 a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  int v9; // r8d
  const char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( (int)RaidTranslateResourceListAddress((unsigned int)*(_QWORD *)(a1 + 600) + 88, a2, a3, a4, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v10 = "Io";
      if ( !a6 )
        v10 = "Memory";
      WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, 28, v9, a4, (__int64)v10);
    }
    return 0LL;
  }
  if ( a6 )
    return 0LL;
  v11 = MmMapIoSpaceEx(0LL, a5, 516LL);
  v12 = v11;
  if ( v11 && (int)RaidAllocateAddressMapping((int)a1 + 1416, a4, v11, a5, a3, *(_QWORD *)(a1 + 8)) < 0 )
    return 0LL;
  return v12;
}
