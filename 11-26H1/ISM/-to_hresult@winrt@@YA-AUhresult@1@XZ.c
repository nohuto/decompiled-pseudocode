/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800A71A4
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs___lambda_d7951b2d46f88de3e36d3c8b29e58ea6___::Invoke_::_1_::catch$7 @ 0x1801D86C0 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--A.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18009B336 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  _BYTE *v4; // rbp
  _BYTE *v5; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  _BYTE v12[112]; // [rsp+0h] [rbp-98h] BYREF
  const winrt::hresult_error *v13; // [rsp+70h] [rbp-28h] BYREF
  const std::out_of_range *v14; // [rsp+78h] [rbp-20h] BYREF
  const std::invalid_argument *v15; // [rsp+80h] [rbp-18h] BYREF
  const std::exception *v16; // [rsp+88h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v18; // [rsp+A0h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v13 )
    {
      v7 = v12;
      winrt::hresult_error::to_abi(*((_QWORD *)v7 + 14), *((_DWORD **)v7 + 20));
      return (_DWORD *)v18;
    }
    catch ( std::bad_alloc )
    {
      v8 = v12;
      **((_DWORD **)v8 + 20) = -2147024882;
      return (_DWORD *)v18;
    }
    catch ( const std::out_of_range *v14 )
    {
      v9 = v12;
      v3 = v9;
      *((_DWORD *)v9 + 14) = 0;
      *((_OWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 15) + 8LL))(*((_QWORD *)v9 + 15));
      *((_QWORD *)v3 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v3 + 22,
                                (const CHAR **)v3 + 21);
      winrt::hresult_error::hresult_error((__int64)(v3 + 32), winrt::impl::error_out_of_bounds, (_QWORD *)v3 + 10);
      winrt::hresult_error::to_abi((__int64)(v3 + 32), *((_DWORD **)v3 + 20));
      winrt::hresult_error::~hresult_error((winrt::hresult_error *)(v3 + 32));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3 + 22);
      return (_DWORD *)v18;
    }
    catch ( const std::invalid_argument *v15 )
    {
      v10 = v12;
      v4 = v10;
      *((_DWORD *)v10 + 8) = 0;
      *(_OWORD *)(v10 + 40) = 0LL;
      *((_QWORD *)v10 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 16) + 8LL))(*((_QWORD *)v10 + 16));
      *((_QWORD *)v4 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v4 + 22,
                                (const CHAR **)v4 + 21);
      winrt::hresult_error::hresult_error((__int64)(v4 + 56), winrt::impl::error_invalid_argument, (_QWORD *)v4 + 10);
      winrt::hresult_error::to_abi((__int64)(v4 + 56), *((_DWORD **)v4 + 20));
      winrt::hresult_error::~hresult_error((winrt::hresult_error *)(v4 + 56));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v4 + 22);
      return (_DWORD *)v18;
    }
    catch ( const std::exception *v16 )
    {
      v11 = v12;
      v5 = v11;
      *((_DWORD *)v11 + 8) = 0;
      *(_OWORD *)(v11 + 40) = 0LL;
      *((_QWORD *)v11 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 17) + 8LL))(*((_QWORD *)v11 + 17));
      *((_QWORD *)v5 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v5 + 22,
                                (const CHAR **)v5 + 21);
      v6 = winrt::hresult_error::hresult_error((__int64)(v5 + 56), 2147500037LL, (_QWORD *)v5 + 10);
      winrt::hresult_error::to_abi(v6, *((_DWORD **)v5 + 20));
      winrt::hresult_error::~hresult_error((winrt::hresult_error *)(v5 + 56));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v5 + 22);
      return (_DWORD *)v18;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
