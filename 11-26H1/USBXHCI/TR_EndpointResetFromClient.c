/*
 * XREFs of TR_EndpointResetFromClient @ 0x1400321DC
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointResetFromClient @ 0x140032160 (ESM_NotifyingTransferRingsEndpointResetFromClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_EndpointResetFromClient(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 128LL))();
}
