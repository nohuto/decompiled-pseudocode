/*
 * XREFs of EtwpGetFreeBuffer @ 0x180011CC0
 * Callers:
 *     EtwpSwitchBuffer @ 0x180011380 (EtwpSwitchBuffer.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x1800126E8 (EtwpDequeueFreeBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1800127C4 (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpGetFreeBuffer(__int64 a1)
{
  __int64 v2; // rbx

  v2 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( !v2 && (*(_DWORD *)(a1 + 308) & 0x400) == 0 )
  {
    do
    {
      if ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) != 1 )
        break;
      v2 = EtwpDequeueFreeBuffer(a1);
    }
    while ( !v2 );
  }
  return v2;
}
