/*
 * XREFs of ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1403472C0
 * Callers:
 *     ?_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x14034594C (-_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x14034737C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx

  if ( a2 <= 5 )
  {
    if ( a2 == 5 )
      return 5LL;
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( !v5 )
        return 10LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 11LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 9LL;
      if ( v7 != 1 )
        return 13LL;
      if ( *(_DWORD *)(a1 + 420) != 4098 || a3 != 3 )
        return 6LL;
    }
    return 7LL;
  }
  else
  {
    switch ( a2 )
    {
      case 0xAu:
        return 4LL;
      case 0xBu:
        return 2LL;
      case 0xEu:
        return 12LL;
      case 0xFu:
        return a4 != 0 ? 8 : 3;
      default:
        result = 1LL;
        if ( a2 != 0x80000000 )
          return 13LL;
        break;
    }
  }
  return result;
}
