/*
 * XREFs of CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x140867AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmFcpFeatureUsageProviderSubscriptionWrapper(__int64 a1)
{
  __int64 v1; // rdi
  signed __int32 v3; // ett
  __int64 v4; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 72);
  _m_prefetchw((const void *)(a1 + 84));
  do
    v3 = *(_DWORD *)(a1 + 84);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 84), (v3 & 0xFFFFFFFC) + 4, v3) );
  guard_dispatch_icall_no_overrides(1LL, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 84), 4u);
  _InterlockedOr(v6, 0);
  if ( *(_QWORD *)(a1 + 88) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 88), 0LL);
  LODWORD(v4) = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 1860), 0xFFFFFFFF);
  if ( (_DWORD)v4 == 1 )
  {
    _InterlockedOr(v6, 0);
    v4 = *(_QWORD *)(v1 + 1448);
    if ( v4 )
      LODWORD(v4) = ExfUnblockPushLock((volatile __int64 *)(v1 + 1448), 0LL);
  }
  return v4;
}
