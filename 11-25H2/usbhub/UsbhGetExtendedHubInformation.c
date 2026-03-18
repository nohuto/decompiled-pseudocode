/*
 * XREFs of UsbhGetExtendedHubInformation @ 0x14003CA4C
 * Callers:
 *     UsbhInitialize @ 0x14003D6A0 (UsbhInitialize.c)
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x140031AA4 (UsbhEtwLogPortInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003BE24 (UsbhGetAcpiPortAttributes.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetExtendedHubInformation(__int64 a1)
{
  _DWORD *v2; // r15
  unsigned int v3; // edi
  _DWORD *v4; // rax
  __int64 Pool2; // rax
  __int64 v6; // r14
  unsigned __int16 i; // si
  unsigned __int16 j; // si
  __int64 PortData; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]

  v2 = FdoExt(a1);
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      41,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v4 = FdoExt(a1);
  Pool2 = ExAllocatePool2(64LL, 4LL * *((unsigned __int8 *)v4 + 2938) + 4, 1112885333LL);
  *((_QWORD *)v2 + 377) = Pool2;
  v6 = Pool2;
  if ( Pool2 )
  {
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
    {
      if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v2 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v11) = i;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            42,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v11);
        }
        *(_DWORD *)(v6 + 4LL * i) |= 0x10u;
      }
    }
    UsbhGetAcpiPortAttributes(a1, v6);
    if ( *((_QWORD *)v2 + 378) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++j )
      {
        if ( (*(_DWORD *)(v6 + 4LL * j) & 0x40) != 0 )
        {
          PortData = UsbhGetPortData(a1, j);
          if ( PortData )
            *(_QWORD *)(PortData + 2920) = (*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28LL * j + *((_QWORD *)v2 + 378) + 20)) & 0x7F80)) >> 7;
        }
      }
    }
    UsbhEtwLogPortInformation(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
