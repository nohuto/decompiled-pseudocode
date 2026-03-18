/*
 * XREFs of ?CalcDesktopId@@YA_KPEAUtagDESKTOP@@@Z @ 0x1401E3C98
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E3704 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalcDesktopId(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ++*(_QWORD *)(UserSessionState + 62944) == 0xFFFFFFFFLL )
    *(_QWORD *)(UserSessionState + 62944) = 1LL;
  return ((*(_QWORD *)(W32GetUserSessionState(v4, v3) + 42592) ^ a1) << 32) | *(unsigned int *)(UserSessionState + 62944);
}
