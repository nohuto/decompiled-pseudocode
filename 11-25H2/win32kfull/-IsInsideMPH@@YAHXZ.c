/*
 * XREFs of ?IsInsideMPH@@YAHXZ @ 0x140145CE0
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserRealWaitMessageEx @ 0x14029BF40 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

bool __fastcall IsInsideMPH(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rcx
  __int64 v3; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  return *(_DWORD *)(*(_QWORD *)(v3 + 488) + 28LL) > 0;
}
