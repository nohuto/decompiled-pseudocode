/*
 * XREFs of ?IsInsideMPH@@YAHXZ @ 0x140166640
 * Callers:
 *     NtUserRealWaitMessageEx @ 0x1402B9560 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsInsideMPH(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v2 = 0;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(v3 + 480) + 28LL) > 0;
  return v2;
}
