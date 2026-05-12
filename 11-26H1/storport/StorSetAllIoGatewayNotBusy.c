/*
 * XREFs of StorSetAllIoGatewayNotBusy @ 0x1400AFAE4
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     StorSetAllIoGatewayBusy @ 0x1400AF9A8 (StorSetAllIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1400AFC74 (StorSetIoGatewayNotBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorSetAllIoGatewayNotBusy(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 result; // rax
  unsigned int i; // r9d

  v2 = 0LL;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1056), 3, 2);
  if ( (_DWORD)result == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 1032); ++i )
    {
      v2 = (_DWORD *)(*(_QWORD *)(a1 + 1024) + 320LL * i);
      if ( v2[10] )
      {
        v2[8] = v2[7];
        v2[10] = 0;
      }
    }
    result = (unsigned int)v2[7];
    *(_DWORD *)(a1 + 1048) = result;
    _InterlockedExchange((volatile __int32 *)(a1 + 1056), 0);
  }
  return result;
}
