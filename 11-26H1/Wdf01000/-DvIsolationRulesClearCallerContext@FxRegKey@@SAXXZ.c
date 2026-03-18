/*
 * XREFs of ?DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ @ 0x14009A5E8
 * Callers:
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void FxRegKey::DvIsolationRulesClearCallerContext(void)
{
  void (*v0)(void); // rax

  if ( unk_1400C8EE0 )
  {
    v0 = *(void (**)(void))(unk_1400C8EE0 + 16LL);
    if ( v0 )
      v0();
  }
}
