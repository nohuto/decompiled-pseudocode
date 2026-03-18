/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x14001E9B4
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x14001E930 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
