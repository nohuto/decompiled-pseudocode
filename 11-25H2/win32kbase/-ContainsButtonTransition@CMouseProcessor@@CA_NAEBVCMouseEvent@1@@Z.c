/*
 * XREFs of ?ContainsButtonTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1400ECCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

bool __fastcall CMouseProcessor::ContainsButtonTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xF3FF) != 0;
}
