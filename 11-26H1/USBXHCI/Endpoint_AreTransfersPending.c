/*
 * XREFs of Endpoint_AreTransfersPending @ 0x140037588
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x140030E1C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     ESM_CheckingIfEndpointCanBeResetAfterHalt @ 0x1400349C0 (ESM_CheckingIfEndpointCanBeResetAfterHalt.c)
 * Callees:
 *     TR_AreTransfersPending @ 0x1400375EC (TR_AreTransfersPending.c)
 */

char __fastcall Endpoint_AreTransfersPending(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // r8

  if ( !*(_BYTE *)(a1 + 37) )
    return TR_AreTransfersPending(*(_QWORD *)(a1 + 88));
  for ( i = 1; ; ++i )
  {
    v3 = *(_QWORD *)(a1 + 144);
    if ( i > *(_DWORD *)(v3 + 8) )
      break;
    if ( (unsigned __int8)TR_AreTransfersPending(*(_QWORD *)(104LL * (i - 1) + v3 + 48)) )
      return 1;
  }
  return 0;
}
