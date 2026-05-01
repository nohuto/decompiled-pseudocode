/*
 * XREFs of winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1805BB1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B8908 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  v6 = *(_QWORD *)(v1 + 48);
  try
  {
    winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      &v5,
      (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
      &v6);
    v2 = *(_QWORD *)(v1 + 24);
    v4 = *(_OWORD *)(v1 + 8);
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *, __int64, __int64))(*(_QWORD *)v5 + 48LL))(
      v5,
      *(_QWORD *)v1,
      &v4,
      (*(_QWORD *)(v1 + 32) - v2) >> 4,
      v2);
    if ( v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
