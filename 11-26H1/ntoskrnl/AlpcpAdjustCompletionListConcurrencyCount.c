/*
 * XREFs of AlpcpAdjustCompletionListConcurrencyCount @ 0x140A92708
 * Callers:
 *     NtAlpcSetInformation @ 0x140A91EC0 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpAdjustCompletionListConcurrencyCount(__int64 a1, unsigned __int32 a2)
{
  __int64 v2; // rsi
  signed __int32 v5; // edi
  unsigned __int32 v6; // ecx
  unsigned __int32 v7; // eax
  __int64 v8; // r14

  v2 = *(_QWORD *)(a1 + 360);
  _m_prefetchw((const void *)(v2 + 144));
  v5 = *(_DWORD *)(v2 + 144);
  while ( v5 != a2 )
  {
    while ( 1 )
    {
      v6 = v5;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 144), a2, v5);
      v5 = v7;
      if ( v7 == v6 )
        break;
      if ( v7 >= a2 )
        return;
    }
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    if ( v6 < a2 )
    {
      v8 = a2 - v6;
      do
      {
        AlpcpQueueIoCompletionPort(a1, 1, 0LL, 0, 0);
        --v8;
      }
      while ( v8 );
    }
  }
}
