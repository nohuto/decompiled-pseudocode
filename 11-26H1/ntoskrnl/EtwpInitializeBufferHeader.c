/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1404AE3D4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140836280 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A12CDC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140B474C0 (EtwpInitializeProviderInfoBuffer.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
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
