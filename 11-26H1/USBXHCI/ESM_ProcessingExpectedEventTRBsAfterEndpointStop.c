/*
 * XREFs of ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x14001E930
 * Callers:
 *     <none>
 * Callees:
 *     TR_ProcessExpectedEventTRBs @ 0x14001E9B4 (TR_ProcessExpectedEventTRBs.c)
 *     Endpoint_SM_Start2SecondTimer @ 0x14001EFB0 (Endpoint_SM_Start2SecondTimer.c)
 */

__int64 __fastcall ESM_ProcessingExpectedEventTRBsAfterEndpointStop(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 144);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_ProcessExpectedEventTRBs(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 144) + 48));
  }
  else
  {
    TR_ProcessExpectedEventTRBs(*(_QWORD *)(v1 + 88));
  }
  Endpoint_SM_Start2SecondTimer(v1);
  return 1000LL;
}
