/*
 * XREFs of EtwpGetNextAvailableLoggerId @ 0x1800773FC
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall EtwpGetNextAvailableLoggerId(__int64 a1, unsigned int *a2)
{
  __int64 Heap_0; // rax
  signed __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r9d
  unsigned int i; // edx
  __int64 v10; // r8

  if ( !EtwpLoggerArray )
  {
    Heap_0 = RtlAllocateHeap_0();
    v5 = Heap_0;
    if ( !Heap_0 )
      return 1450LL;
    v6 = (_QWORD *)Heap_0;
    v7 = 64LL;
    do
    {
      *v6 = 1LL;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    if ( _InterlockedCompareExchange64(&EtwpLoggerArray, v5, 0LL) )
      RtlFreeHeap_0();
  }
  v8 = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 64 : 8;
  for ( i = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 8 : 0; i < v8; ++i )
  {
    v10 = 16LL * i;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + EtwpLoggerArray + 8));
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + EtwpLoggerArray), 3LL, 1LL) == 1 )
    {
      *a2 = i;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v10 + EtwpLoggerArray + 8));
  }
  return 1450LL;
}
