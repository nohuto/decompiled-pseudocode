/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCFTMCrossProcServer@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000D900
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E570 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcServer>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // r11d
  int v5; // edi
  int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r10d
  int v11; // ebx
  unsigned int v12; // eax
  bool v13; // zf

  v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  v5 = *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4;
  v6 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2;
  if ( *a2 != 3
    || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    v8 = a1 + 8;
    v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
    v10 = *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
    v11 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2;
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v8;
      return 0;
    }
    v7 = 0;
    if ( *a2 == 64
      && a2[1] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v8 + 8;
      v12 = 0;
      v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
      v5 = *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4;
      v6 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2;
      v9 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
      v10 = *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4;
      v11 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2;
    }
    else
    {
      v12 = -2147467262;
    }
    if ( v12 != -2147467262 )
      return v12;
    if ( *a2 == -1796592748 )
    {
      if ( a2[1] != v11 || a2[2] != v10 )
        return (unsigned int)-2147467262;
      v13 = a2[3] == v9;
    }
    else
    {
      if ( *a2 != 3 || a2[1] != v6 || a2[2] != v5 )
        return (unsigned int)-2147467262;
      v13 = a2[3] == v4;
    }
    if ( v13 )
    {
      *a3 = a1 + 64;
      return v7;
    }
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  return 0;
}
