/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x140A12CDC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14021919C (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1404AE3D4 (EtwpInitializeBufferHeader.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140A14034 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x140A14D18 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeSendEmptyMarker(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax
  _DWORD v4[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v5; // [rsp+54h] [rbp-24h]

  memset_0(v4, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v4);
  v5 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v4, 6);
  v2 = *(_DWORD *)(a1 + 344) == 0;
  v5 = 1;
  v4[11] = 3;
  v4[12] = 72;
  if ( v2 || (result = EtwpRealtimeDeliverBuffer(a1, v4), (int)result < 0) )
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (result & 0x10000000) == 0 )
    {
      result = *(unsigned int *)(a1 + 816);
      if ( (result & 0x10000000) == 0 )
        return EtwpRealtimeSaveBuffer(a1, v4);
    }
  }
  return result;
}
