/*
 * XREFs of sub_140040E84 @ 0x140040E84
 * Callers:
 *     sub_1400468E4 @ 0x1400468E4 (sub_1400468E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140040E84(__int64 a1)
{
  DWORD CurrentThreadId; // ecx
  __int64 result; // rax

  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(a1 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
