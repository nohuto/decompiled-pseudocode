/*
 * XREFs of Endpoint_OnResetSetDequeuePointer @ 0x14001E158
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x14001C798 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_IsTransferRingEmpty @ 0x14001E8D0 (Endpoint_IsTransferRingEmpty.c)
 *     memset @ 0x140059840 (memset.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_OnResetSetDequeuePointer(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // r9d

  v2 = *a1;
  if ( *(_BYTE *)(*a1 + 37) )
  {
    if ( (unsigned __int8)Endpoint_IsTransferRingEmpty(v2) )
      return Endpoint_StreamsOnResetSetDequeuePointerComplete(a1, a2);
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(v2 + 144) + 56LL;
  }
  else
  {
    v5 = v2 + 168;
  }
  memset((void *)v5, 0, 0x60uLL);
  v6 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnResetSetDequeuePointerCompletion;
  LODWORD(v6) = v6 | 0x4000;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v6;
  *(_QWORD *)(v5 + 24) = Endpoint_GetDequeuePointer(v2, a2, v7, v6);
  *(_DWORD *)(v5 + 36) = v8 ^ (v8 ^ (*(_DWORD *)(v2 + 152) << 16)) & 0x1F0000;
  *(_BYTE *)(v5 + 39) = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 143LL);
  if ( *(_BYTE *)(v2 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  return (PDEVICE_OBJECT)Command_SendCommand(*(_QWORD *)(*(_QWORD *)v2 + 144LL), v5);
}
