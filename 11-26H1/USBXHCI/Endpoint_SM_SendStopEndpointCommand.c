/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x140005768
 * Callers:
 *     ESM_StoppingEndpoint @ 0x140005740 (ESM_StoppingEndpoint.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // ecx
  char v7; // cl

  v1 = a1 + 168;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 168), 0, 0x60uLL);
  v5 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_OnCancelStopCompletion;
  v6 = v5 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v6;
  *(_DWORD *)(v1 + 36) = v6 ^ (v6 ^ (*(_DWORD *)(a1 + 152) << 16)) & 0x1F0000;
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 143LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 80),
      v4,
      13,
      121,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v7,
      *(_BYTE *)(v1 + 38) & 0x1F);
  }
  return Command_SendCommand(v3, v1);
}
