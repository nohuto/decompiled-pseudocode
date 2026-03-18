/*
 * XREFs of GreIncLockCount @ 0x140102430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncLockCount(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  result = v3 + 8;
  v5 = -v3;
  if ( (result & -(__int64)(v5 != 0)) != 0 )
    ++*(_DWORD *)((result & -(__int64)(v5 != 0)) + 0x154);
  return result;
}
