/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1400B5180 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x14003D714 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x140066C6C (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x140066DC8 (WPP_RECORDER_SF_sqqD.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1400B53A4 (AcpiValidatePepDeviceControlResources.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1400D3440 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        void *a5,
        _DWORD *a6)
{
  char v6; // si
  int v7; // edx
  int v8; // ebx

  v6 = a2;
  if ( a2 && a3 )
  {
    v8 = PnpBiosResourcesToNtResources(a1, a2, 4LL);
    if ( v8 >= 0 )
    {
      if ( *a6 >= 0x28u )
      {
        memmove(a5, 0LL, 0x28uLL);
        v8 = 0;
      }
      else
      {
        v8 = -1073741789;
      }
      *a6 = 40;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        21,
        30,
        (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
        v6,
        v8);
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return (unsigned int)v8;
}
