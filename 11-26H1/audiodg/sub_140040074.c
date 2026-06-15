/*
 * XREFs of sub_140040074 @ 0x140040074
 * Callers:
 *     sub_1400403C4 @ 0x1400403C4 (sub_1400403C4.c)
 * Callees:
 *     <none>
 */

__int64 sub_140040074()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 result; // rax

  v0 = qword_1400E8358;
  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(v0 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
