/*
 * XREFs of GreGetLockCount @ 0x1400FEDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetLockCount(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread && (v3 = *CurrentThreadWin32Thread) != 0 && (v4 = v3 + 8) != 0 )
    return *(unsigned int *)(v4 + 340);
  else
    return 0LL;
}
