/*
 * XREFs of ?get@?$weak_ref@UTabTipAdapter@KeyboardHosting@@@winrt@@QEBA@XZ @ 0x180480844
 * Callers:
 *     _lambda_3e45aac3c8f9aabb332bebcbe850d779_::operator() @ 0x1804789FC (_lambda_3e45aac3c8f9aabb332bebcbe850d779_--operator().c)
 *     _lambda_c5a7970b3483e4de1ddc73b2db688a0a_::operator() @ 0x180478AA8 (_lambda_c5a7970b3483e4de1ddc73b2db688a0a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___::Run @ 0x18047E000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<KeyboardHosting::TabTipAdapter>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<IMessageProxyReconnectAdapterOwner>,
      &v6);
    if ( v6 )
      v3 = v6;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
