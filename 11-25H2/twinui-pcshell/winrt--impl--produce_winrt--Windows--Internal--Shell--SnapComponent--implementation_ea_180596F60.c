/*
 * XREFs of winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x180596F60
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180594760 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  v8 = *(_QWORD *)(v1 + 48);
  try
  {
    winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      &v7,
      (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
      &v8);
    v2 = *v7;
    v3 = *(_QWORD *)(v1 + 24);
    v4 = (*(_QWORD *)(v1 + 32) - v3) >> 4;
    v6 = *(_OWORD *)(v1 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, __int64))(v2 + 48))(v7, *(_QWORD *)v1, &v6, v4, v3);
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
