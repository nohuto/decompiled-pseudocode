/*
 * XREFs of _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x180595970
 * Callers:
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x180596F30 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation_ea_180596F30.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180594760 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a1[3];
  winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
    &v11,
    (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
    &v12);
  v2 = 0LL;
  v3 = 0;
  v4 = *a1;
  result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v6 = v11;
  if ( result )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_OWORD *)(v4 + 24 * v7);
      *(_OWORD *)v10 = v8;
      *(_QWORD *)&v10[16] = *(_QWORD *)(v4 + 24 * v7 + 16);
      if ( !v3 )
        v2 = v8;
      v9 = *v6;
      *(_OWORD *)v10 = *(_OWORD *)&v10[8];
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _BYTE *, int))(v9 + 56))(v6, v8, v2, v10, v3++ != 0 ? 8 : 4);
      v4 = *a1;
      result = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
      v7 = v3;
    }
    while ( v3 < result );
  }
  if ( v6 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v11);
  return result;
}
