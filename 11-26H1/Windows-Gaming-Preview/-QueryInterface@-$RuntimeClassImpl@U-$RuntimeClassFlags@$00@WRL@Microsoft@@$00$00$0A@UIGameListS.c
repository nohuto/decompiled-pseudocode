/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FCA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FDD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18001FDD0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FDE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18001FDE0.c)
 *     ?QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020860 (-QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUI.c)
 *     ?_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4CollectionProvider@Shim@UnifiedTile@Shell@WindowsInternal@@AEAV?$ComPtr@UIUnifiedTileCollection@Shim@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUEventRegistrationToken@@@Z @ 0x180022FD0 (-_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Win.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
      goto LABEL_9;
    }
LABEL_16:
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v6 = a1 + 8;
      if ( *a2 == 962535576
        && a2[1] == *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data2
        && a2[2] == *(_DWORD *)GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4
        && a2[3] == *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4[4] )
      {
        *a3 = v6;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_27;
    }
LABEL_15:
    *a3 = a1;
    v5 = 0;
LABEL_27:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v5;
  }
  if ( *a2 != -1350114592 )
  {
    if ( *a2 == 769462127
      && a2[1] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data2
      && a2[2] == *(_DWORD *)GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4
      && a2[3] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4[4] )
    {
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_16;
  }
  v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
LABEL_9:
  if ( a2[3] != v4 )
    goto LABEL_16;
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
