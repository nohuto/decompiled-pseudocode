/*
 * XREFs of Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x140032EF4
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x140032ED0 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     XilEndpoint_FetchStreamContextArray @ 0x14001D444 (XilEndpoint_FetchStreamContextArray.c)
 *     TR_EndpointHalted @ 0x140032F74 (TR_EndpointHalted.c)
 */

__int64 __fastcall Endpoint_SM_NotifyTransferRingsEndpointHalted(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  unsigned int i; // esi
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 37) )
    result = XilEndpoint_FetchStreamContextArray(*v1);
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_EndpointHalted(*(_QWORD *)(a1 + 88));
  v3 = *v1;
  *(_DWORD *)(v3 + 20) = 0;
  for ( i = 1; i <= *(_DWORD *)(v3 + 8); ++i )
    result = TR_EndpointHalted(*(_QWORD *)(104LL * (i - 1) + *v1 + 48));
  return result;
}
