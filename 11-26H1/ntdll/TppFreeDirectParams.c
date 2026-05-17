/*
 * XREFs of TppFreeDirectParams @ 0x180065F9C
 * Callers:
 *     TppDirectExecuteCallback @ 0x180065EA0 (TppDirectExecuteCallback.c)
 *     TppDirectUnposted @ 0x1801591F0 (TppDirectUnposted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppFreeDirectParams(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return RtlFreeHeap_0();
  }
  return result;
}
