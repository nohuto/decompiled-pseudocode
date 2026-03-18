/*
 * XREFs of ?_IsSyscallThrottled@@YAHK@Z @ 0x1401E01DC
 * Callers:
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401E0228 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _IsSyscallThrottled(unsigned int a1, int a2, int a3)
{
  return (unsigned __int8)_interlockedbittestandset(
                            (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70880)
                                                      + 4 * ((unsigned __int64)a1 >> 5)),
                            a1 & 0x1F);
}
