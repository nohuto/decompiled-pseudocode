/*
 * XREFs of _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x1805B9C18
 * Callers:
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1805BB170 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation_ea_1805BB170.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B8908 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  _BYTE v9[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a1[3];
  winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
    &v10,
    (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
    &v11);
  v2 = 0LL;
  v3 = 0;
  v4 = *a1;
  result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v6 = v10;
  if ( result )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_OWORD *)(v4 + 24 * v7);
      *(_OWORD *)v9 = v8;
      *(_QWORD *)&v9[16] = *(_QWORD *)(v4 + 24 * v7 + 16);
      if ( !v3 )
        v2 = v8;
      *(_OWORD *)v9 = *(_OWORD *)&v9[8];
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, int))(*(_QWORD *)v6 + 56LL))(
        v6,
        v8,
        v2,
        v9,
        v3++ != 0 ? 8 : 4);
      v4 = *a1;
      v7 = v3;
      result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
    }
    while ( v3 < result );
  }
  if ( v6 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
  return result;
}
