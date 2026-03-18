/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x140067048
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 *     UnRegisterOperationRegionHandler @ 0x1400B56D4 (UnRegisterOperationRegionHandler.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     EnableDisableDeviceRegionSpace @ 0x140066FA8 (EnableDisableDeviceRegionSpace.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x140067188 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r8d
  char *i; // rax
  __int64 v10; // rdx
  char *v11; // rdi
  __int64 v12; // r8
  _QWORD v14[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v15; // [rsp+68h] [rbp-30h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+80h] [rbp-18h]
  int v18; // [rsp+84h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 368) == 3;
  v15 = 0LL;
  v18 = 0;
  if ( v3 )
  {
    if ( a2 < 0x1F )
      v7 = 1 << a2;
    else
      v7 = 0x80000000;
    if ( (v7 & *(_DWORD *)(a1 + 668)) != 0
      && (int)EnableDisableDeviceRegionSpace(a1, a2, a3) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v8, 14);
    }
    v14[1] = 0LL;
    v14[0] = a1 + 800;
    v16 = 816LL;
    v14[2] = &AcpiDeviceTreeLock;
    v17 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v14); ; i = ACPIExtListEnumNext((__int64)v14) )
    {
      LOBYTE(v10) = 1;
      v11 = i;
      if ( !ACPIExtListTestElement((__int64)v14, v10) )
        break;
      LOBYTE(v12) = a3;
      EnableDisableDeviceTreeRegionSpace(v11, a2, v12);
    }
  }
  return 0LL;
}
