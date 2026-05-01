/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180012028
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::Invoke @ 0x18001EE20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18001EE20.c)
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2ad18b026caacf7c0e47bc8bbd19a7fc_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18001EF50 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListC.c)
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b4a59bf9cda23aee606929b9e63756b5_@@$0?0PEAUHSTRING__@@@?$DelegateArgTraits@P8IGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUHSTRING__@@@Z@Details@WRL@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x18001F010 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListR.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b4e547b9ea71bcfad52de41b57455afb___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs___::Invoke @ 0x18002B2D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18002B2D0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
