/*
 * XREFs of EtwpResetBufferHeader @ 0x14021919C
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140836280 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A12CDC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140B474C0 (EtwpInitializeProviderInfoBuffer.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  unsigned __int8 v2; // cf
  __int64 result; // rax

  v2 = _bittest16((const signed __int16 *)(a1 + 52), 8u);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v2 )
  {
    memset_0((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
