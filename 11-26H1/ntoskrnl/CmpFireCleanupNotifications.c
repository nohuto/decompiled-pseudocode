/*
 * XREFs of CmpFireCleanupNotifications @ 0x1408D1400
 * Callers:
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x140856C80 (CmpCallbackFatalFilter.c)
 */

__int64 __fastcall CmpFireCleanupNotifications(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  result = 0LL;
  v2 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v2; i = (_QWORD *)*i )
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(i[5] + 32LL), 40LL);
  return result;
}
