/*
 * XREFs of KsepCacheUninitialize @ 0x1407C1D00
 * Callers:
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = (__int64)(v4 - 3);
    v4 = (_QWORD *)*v4;
    guard_dispatch_icall_no_overrides(v5, a2);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
