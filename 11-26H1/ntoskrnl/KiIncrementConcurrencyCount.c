/*
 * XREFs of KiIncrementConcurrencyCount @ 0x140440B30
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIncrementConcurrencyCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 0x7F) == 0x15 )
  {
    *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
    result = a1 + 4LL * *(unsigned int *)(a2 + 540);
    _InterlockedIncrement((volatile signed __int32 *)(result + 536));
  }
  else
  {
    result = 40LL;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  }
  return result;
}
