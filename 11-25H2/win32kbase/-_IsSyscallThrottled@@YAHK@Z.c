/*
 * XREFs of ?_IsSyscallThrottled@@YAHK@Z @ 0x1401B9B08
 * Callers:
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B9B48 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _IsSyscallThrottled(__int64 a1, __int64 a2)
{
  return (unsigned __int8)_interlockedbittestandset(
                            (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 70896)
                                                      + 4 * ((unsigned __int64)(unsigned int)a1 >> 5)),
                            a1 & 0x1F);
}
