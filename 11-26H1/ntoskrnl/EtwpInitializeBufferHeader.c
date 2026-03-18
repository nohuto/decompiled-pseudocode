/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1404B4F84
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1402199DC (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x14082E4AC (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140830040 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A13AEC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140B45484 (EtwpInitializeProviderInfoBuffer.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset_0(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
