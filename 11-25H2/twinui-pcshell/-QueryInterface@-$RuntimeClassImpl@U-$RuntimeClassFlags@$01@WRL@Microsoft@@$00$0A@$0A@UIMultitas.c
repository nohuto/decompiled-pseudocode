/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180195070
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490510 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180490510.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490520 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180490520.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180490530 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180490530.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v6; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == 1400587613
      && a2[1] == *(_DWORD *)&GUID_537b455d_1240_433b_82af_10929138b8be.Data2
      && a2[2] == *(_DWORD *)GUID_537b455d_1240_433b_82af_10929138b8be.Data4
      && a2[3] == *(_DWORD *)&GUID_537b455d_1240_433b_82af_10929138b8be.Data4[4]
      || (a1 += 8LL, *a2 == 1076266891)
      && a2[1] == *(_DWORD *)&GUID_4026878b_100e_4920_8bc7_baeed683a086.Data2
      && a2[2] == *(_DWORD *)GUID_4026878b_100e_4920_8bc7_baeed683a086.Data4
      && a2[3] == *(_DWORD *)&GUID_4026878b_100e_4920_8bc7_baeed683a086.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      v6 = a1 + 8;
      if ( *a2 == 1297706642
        && a2[1] == *(_DWORD *)&GUID_4d596e92_c4dc_4ea6_8d58_0242b14c90b3.Data2
        && a2[2] == *(_DWORD *)GUID_4d596e92_c4dc_4ea6_8d58_0242b14c90b3.Data4
        && a2[3] == *(_DWORD *)&GUID_4d596e92_c4dc_4ea6_8d58_0242b14c90b3.Data4[4]
        || (v6 += 8LL, *a2 == -1836009173)
        && a2[1] == *(_DWORD *)&GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f.Data2
        && a2[2] == *(_DWORD *)GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f.Data4
        && a2[3] == *(_DWORD *)&GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f.Data4[4] )
      {
        *a3 = v6;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
