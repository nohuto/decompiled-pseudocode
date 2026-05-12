/*
 * XREFs of StorpGetDeviceBase2 @ 0x14007CD04
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     WPP_SF_is @ 0x14007DBF8 (WPP_SF_is.c)
 *     RaidTranslateResourceListAddress @ 0x140082A44 (RaidTranslateResourceListAddress.c)
 *     RaidAllocateAddressMapping @ 0x140092974 (RaidAllocateAddressMapping.c)
 */

__int64 __fastcall StorpGetDeviceBase2(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        __int64 *a8)
{
  _DWORD *v10; // rcx
  __int64 RaidAdapter; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  int v16; // r8d
  const char *v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  int AddressMapping; // eax

  *a8 = 0LL;
  v10 = *(_DWORD **)(a1 - 16);
  if ( (v10[62] & 1) != 0 )
    return 3238002694LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v10);
  v15 = RaidAdapter;
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( (int)RaidTranslateResourceListAddress((int)RaidAdapter + 360, v12, v13, v14, a5) < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      v17 = "Io";
      if ( !a6 )
        v17 = "Memory";
      WPP_SF_is(WPP_GLOBAL_Control->AttachedDevice, 27, v16, a4, (__int64)v17);
    }
    return 3238002689LL;
  }
  if ( a6 )
  {
    *a8 = 0LL;
    return 0LL;
  }
  v19 = MmMapIoSpaceEx(0LL, a5, a7 != 0 ? 1028 : 516);
  *a8 = v19;
  if ( !v19 )
    return 3238002689LL;
  AddressMapping = RaidAllocateAddressMapping((int)v15 + 968, a4, v19, a5, a3, *(_QWORD *)(v15 + 8));
  if ( AddressMapping == -1073741801 )
  {
    result = 3238002691LL;
  }
  else
  {
    if ( AddressMapping >= 0 )
      return 0LL;
    result = 3238002689LL;
  }
  *a8 = 0LL;
  return result;
}
