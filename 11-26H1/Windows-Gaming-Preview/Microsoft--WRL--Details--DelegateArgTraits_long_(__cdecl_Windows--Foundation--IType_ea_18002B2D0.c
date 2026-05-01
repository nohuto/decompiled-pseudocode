/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b4e547b9ea71bcfad52de41b57455afb___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs___::Invoke @ 0x18002B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180012028 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs_____::___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b4e547b9ea71bcfad52de41b57455afb___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::ITileChangedEventArgs___::Invoke(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v15 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           &v15);
    v2 = v15;
  }
  else
  {
    v4 = 0;
  }
  if ( (v4 & 0x80000000) == 0 )
  {
    if ( v2 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 72) + 168LL);
      EnterCriticalSection(v6);
      v7 = *(_QWORD *)(a1 + 72);
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        *(_QWORD *)(v7 + 208) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = *(_QWORD *)(a1 + 72);
      v10 = *(_QWORD *)(v9 + 216);
      if ( v10 )
      {
        *(_QWORD *)(v9 + 216) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 224LL);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v15);
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v4);
    v5 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  }
  return v4;
}
