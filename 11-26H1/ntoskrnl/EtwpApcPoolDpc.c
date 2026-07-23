/*
 * XREFs of EtwpApcPoolDpc @ 0x1402594D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpApcPoolDpc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi

  v3 = *(unsigned int **)a3;
  if ( (int)EtwpQueueApc(
              (unsigned int **)a3,
              *(struct _KTHREAD **)(a3 + 88),
              2u,
              *(_QWORD *)(a3 + 72),
              *(_SLIST_ENTRY **)(a3 + 80),
              *(_QWORD *)(a3 + 48),
              *(_QWORD *)(a3 + 56),
              *(_QWORD *)(a3 + 64)) < 0 )
    guard_dispatch_icall_no_overrides(a3, *(_QWORD *)(a3 + 88), a3 + 48);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v3 + 170) + 704LL) + 8LL * *v3),
    1u);
  _interlockedbittestandreset((volatile signed __int32 *)(a3 + 160), 1u);
}
