/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x18007BA14
 * Callers:
 *     RtlpWakeByAddress @ 0x18004BA40 (RtlpWakeByAddress.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x18007B820 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18007B880 (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v3 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v3 + 8), a2, a3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
