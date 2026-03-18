/*
 * XREFs of ?ContainsWheelTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x140132810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a1 + 8LL))(a1) )
    return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xC00) != 0;
  return v2;
}
