/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1400AFC74
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 *     StorSetIoGatewayBusy @ 0x1400AFB5C (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorSetAllIoGatewayNotBusy @ 0x1400AFAE4 (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetIoGatewayNotBusy(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1032LL) > 1u && a2 )
    {
      return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48));
    }
    else
    {
      result = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)result )
      {
        result = *(unsigned int *)(a1 + 28);
        *(_DWORD *)(a1 + 32) = result;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
  return result;
}
