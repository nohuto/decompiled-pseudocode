/*
 * XREFs of NtUserfnINSIZECLIPBRD @ 0x1402A41C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINSIZECLIPBRD(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF

  v8 = a2;
  v13 = 0LL;
  PtiCurrent(a1, a2);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int128 *)MmUserProbeAddress;
  v13 = *a4;
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70920))(
           a1,
           v8,
           a3,
           &v13,
           a5);
}
